/*
 * imx-tlv3203x.c  --  SoC audio for imx6 in I2S mode
 *
 * Copyright 2013 Evan Lin  <steve@synso.com>
 *
 * based on sound/soc/s3c24xx/s3c24xx_simtec_tlv320aic23.c
 * which is Copyright 2009 Simtec Electronics
 * and on sound/soc/imx/phycore-ac97.c which is
 * Copyright 2009 Sascha Hauer, Pengutronix <s.hauer@pengutronix.de>
 * 
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 */

#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/device.h>
#include <linux/platform_device.h>
#include <linux/i2c.h>
#include <linux/fsl_devices.h>
#include <sound/core.h>
#include <sound/pcm.h>
#include <sound/soc.h>
#include <mach/dma.h>
#include <mach/clock.h>
#include <mach/audmux.h>
#include <mach/gpio.h>
#include <asm/mach-types.h>
#include "../codecs/tlv320aic3x.h"
#include "imx-ssi.h"

#define CODEC_CLOCK 24000000
struct imx_priv {
        int sysclk;         /*mclk from the outside*/
        int codec_sysclk;
        int dai_hifi;
        int hp_irq;
        int hp_status;
        int amic_irq;
        int amic_status;
        struct platform_device *pdev;
};
static struct imx_priv card_priv;

static int gbt_tlv320aic3x_startup(struct snd_pcm_substream *substream)
{
        struct snd_soc_pcm_runtime *rtd = substream->private_data;
        struct snd_soc_dai *codec_dai = rtd->codec_dai;
        struct imx_priv *priv = &card_priv;
        struct mxc_audio_platform_data *plat = priv->pdev->dev.platform_data;
	printk("Evan in tlv320aic3x startup \n");
        if (!codec_dai->active)
                plat->clock_enable(1);

        return 0;
}

static void gbt_tlv320aic3x_shutdown(struct snd_pcm_substream *substream)
{
        struct snd_soc_pcm_runtime *rtd = substream->private_data;
        struct snd_soc_dai *codec_dai = rtd->codec_dai;
        struct imx_priv *priv = &card_priv;
        struct mxc_audio_platform_data *plat = priv->pdev->dev.platform_data;

        if (!codec_dai->active)
                plat->clock_enable(0);

        return;
}




static int gbt_tlv320aic3x_hw_params(struct snd_pcm_substream *substream,
			    struct snd_pcm_hw_params *params)
{
	struct snd_soc_pcm_runtime *rtd = substream->private_data;
	struct snd_soc_dai *codec_dai = rtd->codec_dai;
	struct snd_soc_dai *cpu_dai = rtd->cpu_dai;
        unsigned int channels = params_channels(params);
	int ret;

	ret = snd_soc_dai_set_fmt(cpu_dai, SND_SOC_DAIFMT_I2S |
				  SND_SOC_DAIFMT_NB_IF |
				  SND_SOC_DAIFMT_CBM_CFM);
	if (ret) {
		pr_err("%s: failed set cpu dai format\n", __func__);
		return ret;
	}

	ret = snd_soc_dai_set_fmt(codec_dai, SND_SOC_DAIFMT_I2S |
				  SND_SOC_DAIFMT_NB_NF |
				  SND_SOC_DAIFMT_CBM_CFM);
	if (ret) {
		pr_err("%s: failed set codec dai format\n", __func__);
		return ret;
	}

	ret = snd_soc_dai_set_sysclk(codec_dai, 0,
				     CODEC_CLOCK, SND_SOC_CLOCK_OUT);
	if (ret) {
		pr_err("%s: failed setting codec sysclk\n", __func__);
		return ret;
	}
        /* set i.MX active slot mask */
        snd_soc_dai_set_tdm_slot(cpu_dai,
                                 channels == 1 ? 0xfffffffe : 0xfffffffc,
                                 channels == 1 ? 0xfffffffe : 0xfffffffc,
                                 2, 32);
#if 0
	ret = snd_soc_dai_set_sysclk(cpu_dai, IMX_SSP_SYS_CLK, 0,
				SND_SOC_CLOCK_IN);
	if (ret) {
		pr_err("can't set CPU system clock IMX_SSP_SYS_CLK\n");
		return ret;
	}
#endif

	return 0;
}

static struct snd_soc_ops gbt_tlv320aic3x_snd_ops = {
        .startup 	= gbt_tlv320aic3x_startup,
        .shutdown 	= gbt_tlv320aic3x_shutdown,
	.hw_params	= gbt_tlv320aic3x_hw_params,
};

static struct snd_soc_dai_link gbt_tlv320aic3x_dai = {
	.name		= "tlv320aic3x",
	.stream_name	= "TLV320AIC3x",
	.codec_dai_name	= "tlv320aic3x-hifi",
	.platform_name	= "imx-pcm-audio.1",
	.codec_name	= "tlv320aic3x-codec.0-0018", // Evan modified
	.cpu_dai_name	= "imx-ssi.1",
	.ops		= &gbt_tlv320aic3x_snd_ops,
//	.init           = rk29_rt5631_init,
};

static struct snd_soc_card gbt_tlv320aic3x = {
	.name		= "tlv320aic3x-audio",
	.dai_link	= &gbt_tlv320aic3x_dai,
	.num_links	= 1,
};

static int gbt_audmux_config(int slave, int master)
{
        unsigned int ptcr, pdcr;
        slave = slave - 1;
        master = master - 1;

        ptcr = MXC_AUDMUX_V2_PTCR_SYN |
                MXC_AUDMUX_V2_PTCR_TFSDIR |
                MXC_AUDMUX_V2_PTCR_TFSEL(master) |
                MXC_AUDMUX_V2_PTCR_TCLKDIR |
                MXC_AUDMUX_V2_PTCR_TCSEL(master);
        pdcr = MXC_AUDMUX_V2_PDCR_RXDSEL(master);
        mxc_audmux_v2_configure_port(slave, ptcr, pdcr);

        ptcr = MXC_AUDMUX_V2_PTCR_SYN;
        pdcr = MXC_AUDMUX_V2_PDCR_RXDSEL(slave);
        mxc_audmux_v2_configure_port(master, ptcr, pdcr);

        return 0;
}



/*
 * This function will register the snd_soc_pcm_link drivers.
 */
static int __devinit gbt_tlv320aic3x_probe(struct platform_device *pdev)
{

        struct mxc_audio_platform_data *plat = pdev->dev.platform_data;
        struct imx_priv *priv = &card_priv;
        int ret = 0;

        priv->pdev = pdev;

        gbt_audmux_config(plat->src_port, plat->ext_port);

        if (plat->init && plat->init()) {
                ret = -EINVAL;
                return ret;
        }

        priv->sysclk = plat->sysclk;

        return ret;
}

static int __devexit gbt_tlv320aic3x_remove(struct platform_device *pdev)
{
        struct mxc_audio_platform_data *plat = pdev->dev.platform_data;

        plat->clock_enable(0);

        if (plat->finit)
                plat->finit();

        return 0;
}

static struct platform_driver gbt_tlv320aic3x_driver = {
        .probe = gbt_tlv320aic3x_probe,
        .remove = gbt_tlv320aic3x_remove,
        .driver = {
                   .name = "imx-tlv320aic3x",
                   .owner = THIS_MODULE,
                   },
};


static struct platform_device *gbt_tlv320aic3x_snd_device;


static int __init gbt_tlv320aic3x_init(void)
{
	int ret;

        ret = platform_driver_register(&gbt_tlv320aic3x_driver);
        if (ret < 0)
	{
		printk("Evan gbt tlv320 register driver fail - 1\n");
                return ret;
	}
	printk("Evan trace gbt_tlv320aic3x\n");

	gbt_tlv320aic3x_snd_device = platform_device_alloc("soc-audio", -1);
	if (!gbt_tlv320aic3x_snd_device)
	{
	         printk("Evan gbt tlv320 register driver fail - 2\n");
		 return -ENOMEM;
	}
	platform_set_drvdata(gbt_tlv320aic3x_snd_device, &gbt_tlv320aic3x);
	ret = platform_device_add(gbt_tlv320aic3x_snd_device);

	if (ret) {
		printk(KERN_ERR "ASoC: Platform device allocation failed\n");
		platform_device_put(gbt_tlv320aic3x_snd_device);
	}
	 printk("Evan gbt tlv320 register driver finish  \n");

	return ret;
}

static void __exit gbt_tlv320aic3x_exit(void)
{
	platform_device_unregister(gbt_tlv320aic3x_snd_device);
}

module_init(gbt_tlv320aic3x_init);
module_exit(gbt_tlv320aic3x_exit);

MODULE_AUTHOR("Evan Lin <evan.lin@tweverlight.com>");
MODULE_DESCRIPTION("IMX6 EVAN ALSA SoC driver");
MODULE_LICENSE("GPL");

cmd_firmware/imx/epdc_E97_V110.fw.gen.o := /opt/freescale/usr/local/gcc-4.4.4-glibc-2.11.1-multilib-1.0/arm-fsl-linux-gnueabi/bin/arm-none-linux-gnueabi-gcc -Wp,-MD,firmware/imx/.epdc_E97_V110.fw.gen.o.d  -nostdinc -isystem /opt/freescale/usr/local/gcc-4.4.4-glibc-2.11.1-multilib-1.0/arm-fsl-linux-gnueabi/bin/../lib/gcc/arm-fsl-linux-gnueabi/4.4.4/include -I/opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-mx6/include -Iarch/arm/plat-mxc/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables  -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float        -c -o firmware/imx/epdc_E97_V110.fw.gen.o firmware/imx/epdc_E97_V110.fw.gen.S

source_firmware/imx/epdc_E97_V110.fw.gen.o := firmware/imx/epdc_E97_V110.fw.gen.S

deps_firmware/imx/epdc_E97_V110.fw.gen.o := \
  /opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

firmware/imx/epdc_E97_V110.fw.gen.o: $(deps_firmware/imx/epdc_E97_V110.fw.gen.o)

$(deps_firmware/imx/epdc_E97_V110.fw.gen.o):

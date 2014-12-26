#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb76c596d, "module_layout" },
	{ 0x67589708, "ipu_get_soc" },
	{ 0x484fbf21, "ipu_check_task" },
	{ 0xc755e3aa, "ipu_queue_task" },
	{ 0x8949858b, "schedule_work" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xcf1aa511, "ipu_init_channel" },
	{ 0x77cab8f1, "ipu_uninit_channel" },
	{ 0x9fcb3e76, "ipu_init_channel_buffer" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x76632d92, "ipu_disable_channel" },
	{ 0x89d75d8e, "ipu_enable_channel" },
	{ 0x27e1a049, "printk" },
	{ 0xb39ffeab, "mipi_csi2_get_bind_csi" },
	{ 0x14df64b4, "dma_free_coherent" },
	{ 0xdbe9ca0, "ipu_disable_csi" },
	{ 0xfc6b13b, "ipu_clear_irq" },
	{ 0x1701e8a3, "dma_alloc_coherent" },
	{ 0x1eb014fd, "ipu_free_irq" },
	{ 0x3a9e0c65, "mipi_csi2_get_bind_ipu" },
	{ 0x24e1307e, "flush_work_sync" },
	{ 0x7de76035, "mipi_csi2_pixelclk_enable" },
	{ 0xdae15b83, "ipu_csi_get_sensor_protocol" },
	{ 0xd3857f60, "mipi_csi2_get_status" },
	{ 0x57015d2c, "mipi_csi2_get_info" },
	{ 0xbba87997, "ipu_enable_csi" },
	{ 0xfe18e67, "mipi_csi2_pixelclk_disable" },
	{ 0x62357a64, "ipu_select_buffer" },
	{ 0x7affee78, "mipi_csi2_get_virtual_channel" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x78f08e4b, "ipu_request_irq" },
	{ 0xdccaf2fb, "mipi_csi2_get_datatype" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


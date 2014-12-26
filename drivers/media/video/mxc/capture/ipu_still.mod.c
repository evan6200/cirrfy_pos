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
	{ 0xcf1aa511, "ipu_init_channel" },
	{ 0x77cab8f1, "ipu_uninit_channel" },
	{ 0x9fcb3e76, "ipu_init_channel_buffer" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x76632d92, "ipu_disable_channel" },
	{ 0x89d75d8e, "ipu_enable_channel" },
	{ 0x27e1a049, "printk" },
	{ 0xdbe9ca0, "ipu_disable_csi" },
	{ 0xfc6b13b, "ipu_clear_irq" },
	{ 0x1eb014fd, "ipu_free_irq" },
	{ 0x72542c85, "__wake_up" },
	{ 0xbba87997, "ipu_enable_csi" },
	{ 0x62357a64, "ipu_select_buffer" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x78f08e4b, "ipu_request_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


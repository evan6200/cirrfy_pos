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
	{ 0x3ac98cfc, "drm_release" },
	{ 0x89b65082, "drm_core_reclaim_buffers" },
	{ 0x45ddcdb2, "drm_mmap" },
	{ 0x27e1a049, "printk" },
	{ 0xac7a41bd, "drm_platform_exit" },
	{ 0x3b79e1b3, "noop_llseek" },
	{ 0xf89016e7, "platform_device_unregister" },
	{ 0x9565f0cd, "drm_platform_init" },
	{ 0x3a41decb, "drm_ioctl" },
	{ 0x1b35104e, "platform_device_register_resndata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x498aa4a6, "drm_poll" },
	{ 0xaf2aa0af, "drm_fasync" },
	{ 0x1fbe699b, "drm_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";


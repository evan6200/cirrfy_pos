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
	{ 0xfb06a4dc, "register_nls" },
	{ 0xfcc2a43c, "utf32_to_utf8" },
	{ 0xb2682405, "utf8_to_utf32" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb5ea4092, "unregister_nls" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


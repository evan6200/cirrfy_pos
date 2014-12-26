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
	{ 0xe8e5d397, "__hid_register_driver" },
	{ 0x56ca782d, "hid_connect" },
	{ 0xb5c63e4c, "dev_err" },
	{ 0x2a9a88ac, "input_event" },
	{ 0x4257f7e6, "dev_set_drvdata" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8245763f, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xdcae33f8, "hid_unregister_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003v000004B4p0000DE61");
MODULE_ALIAS("hid:b0003v000004B4p0000DE64");
MODULE_ALIAS("hid:b0003v000004B4p0000BCA1");
MODULE_ALIAS("hid:b0003v000004B4p00000001");

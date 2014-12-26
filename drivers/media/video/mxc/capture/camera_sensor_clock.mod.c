#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb76c596d, "module_layout" },
	{ 0x48a5b067, "__machine_arch_type" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x27e1a049, "printk" },
	{ 0xba7d870a, "__mxc_cpu_type" },
	{ 0xd8bfd41e, "clk_round_rate" },
	{ 0x68ef6bed, "clk_get" },
	{ 0x3b85cba7, "clk_set_rate" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


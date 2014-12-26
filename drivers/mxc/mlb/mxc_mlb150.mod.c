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
	{ 0xb41ab2da, "platform_driver_register" },
	{ 0x72542c85, "__wake_up" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0xb48a77ef, "kmalloc_caches" },
	{ 0x4257f7e6, "dev_set_drvdata" },
	{ 0x68ef6bed, "clk_get" },
	{ 0xde8beca5, "regulator_enable" },
	{ 0x150c3018, "regulator_set_voltage" },
	{ 0x9c67dec8, "regulator_get" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x90da78fa, "platform_get_resource" },
	{ 0x4c57bdeb, "device_create" },
	{ 0x56303c2f, "__class_create" },
	{ 0x32e78a59, "cdev_add" },
	{ 0x88b2953c, "cdev_init" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0xb5c63e4c, "dev_err" },
	{ 0xbcf83ac5, "kmem_cache_alloc" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xa882d544, "_raw_read_unlock_irqrestore" },
	{ 0xaca37af7, "_raw_read_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xca01666d, "_raw_read_lock" },
	{ 0x7d02520f, "_raw_read_unlock" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x27e1a049, "printk" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x29338e18, "iram_alloc" },
	{ 0x546ae5c3, "iram_free" },
	{ 0x77339464, "_raw_write_unlock_irqrestore" },
	{ 0xd442b3f4, "_raw_write_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x86626159, "class_destroy" },
	{ 0xbb3ad7bb, "device_destroy" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0x74b1617f, "gpio_mlb_inactive" },
	{ 0xfb7bc83b, "regulator_put" },
	{ 0xe2bf7f46, "regulator_disable" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xde4cdbbb, "clk_disable" },
	{ 0x572b94ec, "clk_enable" },
	{ 0x8245763f, "dev_get_drvdata" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0xf6aff851, "platform_driver_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


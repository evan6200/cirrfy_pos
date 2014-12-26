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
	{ 0x86c01021, "i2c_master_send" },
	{ 0xf9a482f9, "msleep" },
	{ 0x150c3018, "regulator_set_voltage" },
	{ 0x2dcf6fe6, "i2c_del_driver" },
	{ 0xe2bf7f46, "regulator_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5cbf2e0, "v4l2_int_device_register" },
	{ 0x27e1a049, "printk" },
	{ 0xe6a59531, "v4l2_int_device_unregister" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x94fbf8ee, "i2c_register_driver" },
	{ 0x64fd3859, "i2c_master_recv" },
	{ 0x9d669763, "memcpy" },
	{ 0xfb7bc83b, "regulator_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9c67dec8, "regulator_get" },
	{ 0xde8beca5, "regulator_enable" },
	{ 0x262439a2, "set_mclk_rate" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=camera_sensor_clock";

MODULE_ALIAS("i2c:ov5642");
MODULE_ALIAS("i2c:ov564x");

MODULE_INFO(srcversion, "4019A96CD66F129A5A9E47F");

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
	{ 0xf9a482f9, "msleep" },
	{ 0x150c3018, "regulator_set_voltage" },
	{ 0xc03be003, "i2c_smbus_read_byte_data" },
	{ 0xe8ebbdd0, "gpio_sensor_inactive" },
	{ 0x2dcf6fe6, "i2c_del_driver" },
	{ 0xe2bf7f46, "regulator_disable" },
	{ 0xc68e6b93, "i2c_smbus_write_byte_data" },
	{ 0xb7ddbd6, "mutex_unlock" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5cbf2e0, "v4l2_int_device_register" },
	{ 0x27e1a049, "printk" },
	{ 0xdfecbdcb, "gpio_sensor_active" },
	{ 0x7f14cbec, "mutex_lock" },
	{ 0xe6a59531, "v4l2_int_device_unregister" },
	{ 0x94fbf8ee, "i2c_register_driver" },
	{ 0x9d669763, "memcpy" },
	{ 0xfb7bc83b, "regulator_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9c67dec8, "regulator_get" },
	{ 0xde8beca5, "regulator_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:adv7180");

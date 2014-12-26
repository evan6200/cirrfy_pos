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
	{ 0x4949a0bd, "mipi_csi2_reset" },
	{ 0x2dcf6fe6, "i2c_del_driver" },
	{ 0x1b30e0bb, "mipi_csi2_set_datatype" },
	{ 0xe2bf7f46, "regulator_disable" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5cbf2e0, "v4l2_int_device_register" },
	{ 0x27e1a049, "printk" },
	{ 0x9f142f20, "mipi_csi2_enable" },
	{ 0xe6a59531, "v4l2_int_device_unregister" },
	{ 0x94fbf8ee, "i2c_register_driver" },
	{ 0xaa97f23e, "mipi_csi2_dphy_status" },
	{ 0xa51ba56e, "mipi_csi2_disable" },
	{ 0x2e266bf3, "mipi_csi2_set_lanes" },
	{ 0x64fd3859, "i2c_master_recv" },
	{ 0xd3857f60, "mipi_csi2_get_status" },
	{ 0x57015d2c, "mipi_csi2_get_info" },
	{ 0x9d669763, "memcpy" },
	{ 0x986fcea8, "mipi_csi2_get_error1" },
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

MODULE_ALIAS("i2c:ov8820_mipi");

MODULE_INFO(srcversion, "2EECA8FC429CB524CCD26BD");

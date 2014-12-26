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
	{ 0xb48a77ef, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x4257f7e6, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x64b1ff94, "video_device_release" },
	{ 0xed622f24, "video_usercopy" },
	{ 0x52760ca9, "getnstimeofday" },
	{ 0xfa26d996, "v4l2_device_unregister" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6c95ea1a, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x2f1ca8f0, "__video_register_device" },
	{ 0xb7ddbd6, "mutex_unlock" },
	{ 0x1bf5e95a, "usb_autopm_get_interface" },
	{ 0x484dedc0, "usb_enable_autosuspend" },
	{ 0x999e8297, "vfree" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x28a229e7, "v4l2_device_register" },
	{ 0x2a9a88ac, "input_event" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x76981505, "usb_string" },
	{ 0x23af979e, "video_device_alloc" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0xd303f95e, "usb_deregister" },
	{ 0x91aec004, "mutex_lock_interruptible" },
	{ 0xeac5046c, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x3e34aa36, "video_unregister_device" },
	{ 0x92b3f247, "usb_set_interface" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x8fbdcf68, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xa35ec51c, "usb_driver_claim_interface" },
	{ 0x7f14cbec, "mutex_lock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x345ebda, "usb_free_coherent" },
	{ 0xbbfaf5ce, "vm_insert_page" },
	{ 0x5ebefe4b, "v4l_printk_ioctl" },
	{ 0xe8587d57, "usb_submit_urb" },
	{ 0xbcf83ac5, "kmem_cache_alloc" },
	{ 0xe08894df, "usb_get_dev" },
	{ 0x1ebfd32b, "video_devdata" },
	{ 0xa75f1f68, "input_register_device" },
	{ 0x64d5e85, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x236bf29d, "usb_driver_release_interface" },
	{ 0xfed7d09c, "input_free_device" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x6985711b, "usb_get_intf" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0xefdd5a63, "ktime_get_ts" },
	{ 0x72542c85, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7a6d4c86, "input_unregister_device" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x4d92ec4f, "usb_match_one_id" },
	{ 0xd61ed28b, "usb_register_driver" },
	{ 0xf83178bd, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x957c79dc, "usb_ifnum_to_if" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xeef1caeb, "vmalloc_to_page" },
	{ 0xaaaf79e2, "usb_alloc_coherent" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x8245763f, "dev_get_drvdata" },
	{ 0xd808fca2, "usb_free_urb" },
	{ 0x324639fc, "usb_autopm_put_interface" },
	{ 0x42588f00, "usb_alloc_urb" },
	{ 0xc6dc59cf, "usb_put_intf" },
	{ 0x39b17ed4, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00*");

MODULE_INFO(srcversion, "BF09AB69B8595FD839AB561");

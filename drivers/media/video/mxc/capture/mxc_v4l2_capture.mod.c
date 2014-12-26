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
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x64b1ff94, "video_device_release" },
	{ 0xb41ab2da, "platform_driver_register" },
	{ 0xb48a77ef, "kmalloc_caches" },
	{ 0xb5c63e4c, "dev_err" },
	{ 0xb7951ef2, "device_create_file" },
	{ 0x2f1ca8f0, "__video_register_device" },
	{ 0xd5cbf2e0, "v4l2_int_device_register" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0x4257f7e6, "dev_set_drvdata" },
	{ 0x23af979e, "video_device_alloc" },
	{ 0x67589708, "ipu_get_soc" },
	{ 0xbcf83ac5, "kmem_cache_alloc" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x1d2e87c6, "do_gettimeofday" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x761b20eb, "prp_still_deselect" },
	{ 0xca55481b, "prp_still_select" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x84b183ae, "strncmp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xcd9897e9, "registered_fb" },
	{ 0x1701e8a3, "dma_alloc_coherent" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x5f754e5a, "memset" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe914e41e, "strcpy" },
	{ 0xed622f24, "video_usercopy" },
	{ 0x20bae612, "remap_pfn_range" },
	{ 0x1c3f30f, "down_interruptible" },
	{ 0xafd9dc5e, "prp_enc_select" },
	{ 0x7e14dc74, "csi_enc_select" },
	{ 0xf6548d26, "v4l2_int_ioctl_0" },
	{ 0x11286fa8, "ipu_csi_init_interface" },
	{ 0xe90ebf45, "ipu_csi_set_window_pos" },
	{ 0x178dc234, "ipu_csi_set_window_size" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x631cb49f, "csi_enc_deselect" },
	{ 0xc77a97a, "prp_enc_deselect" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x1ebfd32b, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e34aa36, "video_unregister_device" },
	{ 0xe6a59531, "v4l2_int_device_unregister" },
	{ 0x5dd82feb, "device_remove_file" },
	{ 0x14df64b4, "dma_free_coherent" },
	{ 0x9d669763, "memcpy" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x72542c85, "__wake_up" },
	{ 0x27e1a049, "printk" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0xf2b560e0, "ipu_csi_enable_mclk" },
	{ 0x7a728ef4, "up" },
	{ 0x5ca5bda7, "v4l2_int_ioctl_1" },
	{ 0xb5a0e267, "down" },
	{ 0x8245763f, "dev_get_drvdata" },
	{ 0xb9729003, "foreground_sdc_deselect" },
	{ 0xf0aa37df, "bg_overlay_sdc_deselect" },
	{ 0xd2a84747, "bg_overlay_sdc_select" },
	{ 0x39d0857c, "foreground_sdc_select" },
	{ 0xf6aff851, "platform_driver_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipu_still,ipu_prp_enc,ipu_csi_enc,ipu_fg_overlay_sdc,ipu_bg_overlay_sdc";


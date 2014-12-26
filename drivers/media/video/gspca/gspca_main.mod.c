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
	{ 0xf9a482f9, "msleep" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x4257f7e6, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0x6c95ea1a, "usb_kill_urb" },
	{ 0x2f1ca8f0, "__video_register_device" },
	{ 0xb7ddbd6, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x91aec004, "mutex_lock_interruptible" },
	{ 0xeac5046c, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x3e34aa36, "video_unregister_device" },
	{ 0x92b3f247, "usb_set_interface" },
	{ 0x328a05f1, "strncpy" },
	{ 0x7f14cbec, "mutex_lock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x345ebda, "usb_free_coherent" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xbbfaf5ce, "vm_insert_page" },
	{ 0x8b4e46a3, "module_put" },
	{ 0xe8587d57, "usb_submit_urb" },
	{ 0xbcf83ac5, "kmem_cache_alloc" },
	{ 0x1ebfd32b, "video_devdata" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xa75f1f68, "input_register_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x85fae28, "usb_clear_halt" },
	{ 0xfed7d09c, "input_free_device" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x72542c85, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7a6d4c86, "input_unregister_device" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0xf83178bd, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x957c79dc, "usb_ifnum_to_if" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xeef1caeb, "vmalloc_to_page" },
	{ 0xaaaf79e2, "usb_alloc_coherent" },
	{ 0x8245763f, "dev_get_drvdata" },
	{ 0xd808fca2, "usb_free_urb" },
	{ 0xf62e7e5a, "video_ioctl2" },
	{ 0x42588f00, "usb_alloc_urb" },
	{ 0xdf4c8767, "ns_to_timeval" },
	{ 0x39b17ed4, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


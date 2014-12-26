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
	{ 0x72aa82c6, "param_ops_charp" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x5086ac3a, "alg_test" },
	{ 0x90a1004a, "crypto_has_alg" },
	{ 0xb48a77ef, "kmalloc_caches" },
	{ 0x464d6464, "crypto_ahash_digest" },
	{ 0x6b4be8bd, "crypto_ahash_final" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a4497db, "kzfree" },
	{ 0x4ae9cef5, "wait_for_completion_interruptible" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37de4b02, "crypto_alloc_ahash" },
	{ 0xbcf83ac5, "kmem_cache_alloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x4f7f2d1b, "complete" },
	{ 0x7d11c268, "jiffies" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x21f6120a, "crypto_destroy_tfm" },
	{ 0x9d669763, "memcpy" },
	{ 0x5756a322, "crypto_alloc_base" },
	{ 0x27e1a049, "printk" },
	{ 0x959c383d, "mem_map" },
	{ 0xc27487dd, "__bug" },
	{ 0x5f754e5a, "memset" },
	{ 0xf88c3301, "sg_init_table" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


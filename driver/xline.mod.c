#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc8d01d53, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xde310d05, "kmalloc_caches" },
	{ 0x10ea38cd, "single_open" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xc876a99f, "seq_printf" },
	{ 0x510508ea, "usb_kill_urb" },
	{ 0x5c5f6242, "remove_proc_entry" },
	{ 0xa426ca69, "device_destroy" },
	{ 0x8120e312, "__register_chrdev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x223983ec, "seq_read" },
	{ 0xa2236ba8, "usb_unlink_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4fd0db63, "PDE_DATA" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4c9f47a5, "current_task" },
	{ 0xe180ce57, "usb_deregister" },
	{ 0x3398f7af, "usb_set_interface" },
	{ 0x3d7e65af, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa7d3d17b, "device_create" },
	{ 0x54af84da, "usb_free_coherent" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xb20c3797, "usb_submit_urb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa7b6ca7d, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xaf88e69b, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb932014d, "proc_create_data" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x11b64b24, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcf2a6966, "up" },
	{ 0x942410fb, "usb_register_driver" },
	{ 0x3ee2b36d, "class_destroy" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0xe62275ea, "seq_release" },
	{ 0xb5571d08, "usb_alloc_coherent" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9b0fb107, "__class_create" },
	{ 0x2f886acb, "usb_free_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x437b7175, "usb_alloc_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0FB6p3FC5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FC6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FC3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FC4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FC7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FC8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FC9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FCAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FCBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FCCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FCDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FCEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F08B7672A4684E68B2023CC");

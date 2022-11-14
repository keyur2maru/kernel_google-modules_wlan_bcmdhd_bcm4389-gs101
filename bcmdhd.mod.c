#include <linux/module.h>
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x4cc8efe, "module_layout" },
	{ 0x68c00043, "register_netdevice" },
	{ 0xbbc9ee2e, "kobject_put" },
	{ 0xe349925, "sdio_writeb" },
	{ 0x2a8e7a39, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x35cb5ea, "kernel_write" },
	{ 0xf429709a, "kmalloc_caches" },
	{ 0x62743eda, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0xf3144ad, "wiphy_free" },
	{ 0x4a45368e, "dma_release_from_dev_coherent" },
	{ 0xb109247e, "cfg80211_unlink_bss" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xe7b0f731, "cfg80211_connect_done" },
	{ 0x9fe15b35, "nla_append" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x6b0b7034, "generic_file_llseek" },
	{ 0x4fad5d73, "rockchip_wifi_mac_addr" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xb952c648, "param_ops_int" },
	{ 0xaa4008af, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc29bf967, "strspn" },
	{ 0xea124bd1, "gcd" },
	{ 0x10d1c965, "wakeup_source_add" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x336bd2e7, "dget_parent" },
	{ 0x2456bf04, "__pm_stay_awake" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6f54cf23, "sdio_enable_func" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x60fe7d24, "cfg80211_chandef_create" },
	{ 0xc8200134, "kobject_uevent" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x9cbdf6fc, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x64b4b5f, "gpio_to_desc" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x81b395b3, "down_interruptible" },
	{ 0x1d762468, "dput" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x72394689, "cancel_work_sync" },
	{ 0x2ac7ec3c, "cfg80211_rx_mgmt" },
	{ 0x95684b92, "filp_close" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xf9a3efb9, "__ll_sc_atomic_sub" },
	{ 0x2fec4bc, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xec306b1c, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe9092271, "vfs_fsync" },
	{ 0x25277497, "rfkill_register" },
	{ 0x999e8297, "vfree" },
	{ 0x8ace968a, "cfg80211_unregister_wdev" },
	{ 0x91715312, "sprintf" },
	{ 0xd75ddf8c, "skb_realloc_headroom" },
	{ 0x66decfd5, "ns_to_timespec" },
	{ 0x6c7bedc7, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xca4b3532, "sdio_get_host_pm_caps" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0xade00cb7, "rockchip_wifi_set_carddetect" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x73d88b7c, "cfg80211_mgmt_tx_status" },
	{ 0xc2297e2b, "param_ops_string" },
	{ 0x661601de, "sprint_symbol" },
	{ 0x1f7386be, "__ll_sc_atomic_add" },
	{ 0xfd26eb22, "__netdev_alloc_skb" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xdfaf2952, "netif_rx" },
	{ 0x23b3aab8, "dma_alloc_from_dev_coherent" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x985b4c0a, "mmc_wait_for_req" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8f407264, "kernel_read" },
	{ 0x352ced0c, "sdio_writel" },
	{ 0xf15e728e, "del_timer_sync" },
	{ 0xed314c9d, "cfg80211_vendor_cmd_reply" },
	{ 0x9b0d1b4e, "kern_path" },
	{ 0xdcb764ad, "memset" },
	{ 0x98bdf892, "netif_rx_ni" },
	{ 0x672bf342, "cancel_delayed_work" },
	{ 0x75f72ae, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x35b0f8e5, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2e2b40d2, "strncat" },
	{ 0x944fb62, "rfkill_alloc" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xd3da0522, "kobject_init_and_add" },
	{ 0xdd8fee90, "netlink_kernel_release" },
	{ 0x491ef29b, "free_netdev" },
	{ 0x129c14c5, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0x7a4c755b, "register_netdev" },
	{ 0x2ed8c26, "__ll_sc_atomic64_xor" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x97cdc797, "nla_put" },
	{ 0x5303cb72, "mmc_set_data_timeout" },
	{ 0xfcc0097e, "sdio_readl" },
	{ 0xe72239a2, "wireless_send_event" },
	{ 0x236b6fda, "cfg80211_del_sta_sinfo" },
	{ 0x6d8a4bfc, "ieee80211_get_channel" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x544d5b47, "set_cpus_allowed_ptr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xcf456bc9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe0396a01, "dev_close" },
	{ 0xf470cc17, "wiphy_apply_custom_regulatory" },
	{ 0x59ef798, "cfg80211_michael_mic_failure" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x6626afca, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x72cd0f7f, "mod_timer" },
	{ 0x8df6f4a0, "netlink_unicast" },
	{ 0x65744673, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xc4f82c1e, "gpiod_direction_output_raw" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xcb6fcf78, "cpu_bit_bitmap" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd53d97b0, "skb_pull" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xe3a53f4c, "sort" },
	{ 0xaad12719, "cfg80211_ibss_joined" },
	{ 0x3ae104b5, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfc75216, "__pm_relax" },
	{ 0xb9abf597, "mmc_retune_enable" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x227dcb95, "dev_open" },
	{ 0xe091d9c4, "__cfg80211_send_event_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5159e70b, "sdio_readsb" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xb46df5f1, "sdio_unregister_driver" },
	{ 0x2395379b, "work_busy" },
	{ 0x89987314, "sdio_f0_writeb" },
	{ 0x78ee675d, "sdio_set_host_pm_flags" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xa08ebd70, "cfg80211_ch_switch_notify" },
	{ 0x771cc316, "cfg80211_roamed" },
	{ 0x4b084b6b, "cfg80211_put_bss" },
	{ 0x92a3940c, "__alloc_skb" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6a255449, "__cfg80211_alloc_event_skb" },
	{ 0x29cd3971, "__cfg80211_alloc_reply_skb" },
	{ 0x9df7c0a5, "wiphy_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xaeca7f89, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa546fad3, "kfree_skb" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x79f3cdfb, "cfg80211_ready_on_channel" },
	{ 0x5c1c3eb4, "cpu_hwcaps" },
	{ 0x3300238f, "nla_put_nohdr" },
	{ 0x8aa9477, "__ll_sc_atomic64_andnot" },
	{ 0x13e6a4d3, "wiphy_new_nm" },
	{ 0xd790f716, "pm_wakeup_ws_event" },
	{ 0xcb0f0aef, "pci_read_config_dword" },
	{ 0xfb7f037, "eth_type_trans" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x9e79dc0c, "sdio_f0_readb" },
	{ 0xc192c67c, "cpu_hwcap_keys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xfe7fb356, "wake_up_process" },
	{ 0x6a84663e, "path_put" },
	{ 0x121a43ec, "cfg80211_disconnected" },
	{ 0x19326f3d, "rkwifi_set_firmware" },
	{ 0xbcabb230, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6edd76b0, "dummy_dma_ops" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x2463e724, "vfs_unlink" },
	{ 0x3005c543, "unregister_netdevice_queue" },
	{ 0x9eb9714e, "rockchip_wifi_get_oob_irq" },
	{ 0x1e01660e, "vsnprintf" },
	{ 0x60323276, "cfg80211_new_sta" },
	{ 0x6277b1c1, "sched_setscheduler" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb9f3ed41, "cfg80211_find_ie_match" },
	{ 0xdc678820, "sdio_memcpy_toio" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfd5834c3, "cfg80211_external_auth_request" },
	{ 0xfe990052, "gpio_free" },
	{ 0x5d66afd, "sdio_writew" },
	{ 0xcdd755bb, "cfg80211_port_authorized" },
	{ 0x8c5ebc14, "__netlink_kernel_create" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x67d370ad, "__ll_sc_atomic64_fetch_or" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcf2a6966, "up" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xf5a3cf74, "rockchip_wifi_power" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x593f3cd3, "sdio_reset_comm" },
	{ 0x94dbae61, "cfg80211_remain_on_channel_expired" },
	{ 0xed2e84f0, "unregister_netdev" },
	{ 0xfef8cf74, "vfs_statx" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4be4d8b, "queue_work_on" },
	{ 0xe666b276, "nla_reserve" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xa65bbbf8, "sdio_readw" },
	{ 0x15e5c49a, "sdio_register_driver" },
	{ 0x3ba4e48, "consume_skb" },
	{ 0x45f46ad2, "sdio_memcpy_fromio" },
	{ 0xba42338f, "sdio_claim_host" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe4ade4a4, "cfg80211_scan_done" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x649c8f63, "sock_wfree" },
	{ 0xca138548, "irq_set_affinity_hint" },
	{ 0x6673a8ed, "param_ops_uint" },
	{ 0x6dfb912f, "arm64_const_caps_ready" },
	{ 0xbe36a2ef, "__nlmsg_put" },
	{ 0xad1c144b, "__ll_sc_atomic64_or" },
	{ 0x9682235, "down_timeout" },
	{ 0x557fc0c6, "sdio_set_block_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x4cdf1eff, "wakeup_source_remove" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xcaf9bd66, "__skb_pad" },
	{ 0x23dfcee6, "sdio_disable_func" },
	{ 0x6f08a743, "mmc_retune_disable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7926dc9d, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
	{ 0x68ccef9d, "filp_open" },
	{ 0xd264aa9e, "alloc_etherdev_mqs" },
	{ 0xc64dddb, "cfg80211_inform_bss_frame_data" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v02D0d0000*");
MODULE_ALIAS("sdio:c*v02D0d4362*");
MODULE_ALIAS("sdio:c*v02D0dAAE7*");
MODULE_ALIAS("sdio:c*v02D0dAAE8*");
MODULE_ALIAS("sdio:c*v02D0dA804*");
MODULE_ALIAS("sdio:c*v02D0dA806*");
MODULE_ALIAS("sdio:c*v02D0d4495*");
MODULE_ALIAS("sdio:c*v02D0d4496*");
MODULE_ALIAS("sdio:c*v02D0d4497*");
MODULE_ALIAS("sdio:c00v*d*");
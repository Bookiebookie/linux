/*
 * Copyright (C) 2006-2017, Marvell International Ltd.
 * Copyright (C) 2018-2020 Laird Connectivity
 *
 * This software file (the "File") is distributed by Marvell International
 * Ltd. under the terms of the GNU General Public License Version 2, June 1991
 * (the "License").  You may use, redistribute and/or modify this File in
 * accordance with the terms and conditions of the License, a copy of which
 * is available by writing to the Free Software Foundation, Inc.
 *
 * THE FILE IS DISTRIBUTED AS-IS, WITHOUT WARRANTY OF ANY KIND, AND THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE
 * ARE EXPRESSLY DISCLAIMED.  The License provides additional details about
 * this warranty disclaimer.
 */

/* Description:  This file defines firmware host command related
 * structure.
 */

#ifndef _HOSTCMD_H_
#define _HOSTCMD_H_

/* 16 bit host command code */
#define HOSTCMD_CMD_GET_HW_SPEC                 0x0003
#define HOSTCMD_CMD_SET_HW_SPEC                 0x0004
#define HOSTCMD_CMD_802_11_GET_STAT             0x0014
#define HOSTCMD_CMD_MAC_REG_ACCESS              0x0019
#define HOSTCMD_CMD_BBP_REG_ACCESS              0x001a
#define HOSTCMD_CMD_RF_REG_ACCESS               0x001b
#define HOSTCMD_CMD_802_11_RADIO_CONTROL        0x001c
#define HOSTCMD_CMD_MEM_ADDR_ACCESS             0x001d
#define HOSTCMD_CMD_802_11_TX_POWER             0x001f
#define HOSTCMD_CMD_802_11_RF_ANTENNA           0x0020
#define HOSTCMD_CMD_802_11_PS_MODE              0x0021
#define HOSTCMD_CMD_802_11_RF_ANTENNA_V2        0x0022
#define HOSTCMD_CMD_BROADCAST_SSID_ENABLE       0x0050 /* per-vif */
#define HOSTCMD_CMD_MFG                         0x0089
#define HOSTCMD_CMD_SET_CFG                     0x008f

#define HOSTCMD_LRD_CMD                         0x00fd
#define HOSTCMD_LRD_MFG                         0x00fe
#define HOSTCMD_LRD_REGION_MAPPING              0x00ff

#define HOSTCMD_CMD_SET_PRE_SCAN                0x0107
#define HOSTCMD_CMD_SET_POST_SCAN               0x0108

#define HOSTCMD_CMD_SET_RF_CHANNEL              0x010a
#define HOSTCMD_CMD_SET_AID                     0x010d /* per-vif */
#define HOSTCMD_CMD_SET_INFRA_MODE              0x010e /* per-vif */
#define HOSTCMD_CMD_802_11_RTS_THSD             0x0113
#define HOSTCMD_CMD_SET_EDCA_PARAMS             0x0115
#define HOSTCMD_CMD_802_11H_DETECT_RADAR        0x0120
#define HOSTCMD_CMD_SET_WMM_MODE                0x0123
#define HOSTCMD_CMD_HT_GUARD_INTERVAL           0x0124
#define HOSTCMD_CMD_SET_FIXED_RATE              0x0126
#define HOSTCMD_CMD_SET_IES                     0x0127
#define HOSTCMD_CMD_SET_LINKADAPT_CS_MODE       0x0129
#define HOSTCMD_CMD_DUMP_OTP_DATA               0x0142
#define HOSTCMD_CMD_SET_MAC_ADDR                0x0202 /* per-vif */
#define HOSTCMD_CMD_SET_RATE_ADAPT_MODE         0x0203
#define HOSTCMD_CMD_GET_WATCHDOG_BITMAP         0x0205
#define HOSTCMD_CMD_DEL_MAC_ADDR                0x0206 /* per-vif */
#define HOSTCMD_CMD_BSS_START                   0x1100 /* per-vif */
#define HOSTCMD_CMD_AP_BEACON                   0x1101 /* per-vif */
#define HOSTCMD_CMD_SET_NEW_STN                 0x1111 /* per-vif */
#define HOSTCMD_CMD_SET_APMODE                  0x1114
#define HOSTCMD_CMD_SET_SWITCH_CHANNEL          0x1121
#define HOSTCMD_CMD_UPDATE_ENCRYPTION           0x1122 /* per-vif */
#define HOSTCMD_CMD_BASTREAM                    0x1125
#define HOSTCMD_CMD_SET_SPECTRUM_MGMT           0x1128
#define HOSTCMD_CMD_SET_POWER_CONSTRAINT        0x1129
#define HOSTCMD_CMD_SET_COUNTRY_CODE            0x1130
#define HOSTCMD_CMD_SET_OPTIMIZATION_LEVEL      0x1133
#define HOSTCMD_CMD_SET_MIMOPSHT                0x1135
#define HOSTCMD_CMD_SET_WSC_IE                  0x1136 /* per-vif */
#define HOSTCMD_CMD_DWDS_ENABLE                 0x1144
#define HOSTCMD_CMD_FW_FLUSH_TIMER              0x1148
#define HOSTCMD_CMD_SET_CDD                     0x1150
#define HOSTCMD_CMD_CAU_REG_ACCESS              0x1157
#define HOSTCMD_CMD_GET_TEMP                    0x1159
#define HOSTCMD_CMD_GET_FW_REGION_CODE          0x116A
#define HOSTCMD_CMD_GET_DEVICE_PWR_TBL          0x116B
#define HOSTCMD_CMD_GET_FW_REGION_CODE_SC4      0x118A
#define HOSTCMD_CMD_GET_DEVICE_PWR_TBL_SC4      0x118B
#define HOSTCMD_CMD_QUIET_MODE                  0x1201
#define HOSTCMD_CMD_SET_WFD_IE                  0x1202
#define HOSTCMD_CMD_802_11_SLOT_TIME            0x1203
#define HOSTCMD_CMD_EDMAC_CTRL                  0x1204
#define HOSTCMD_CMD_HOSTSLEEP_CTRL              0x1205
#define HOSTCMD_CMD_WOWLAN_AP_INRANGE_CFG       0x1206
#define HOSTCMD_CMD_MONITOR_MODE                0x1207
#define HOSTCMD_CMD_DEEPSLEEP                   0x1209
#define HOSTCMD_CMD_CONFIRM_PS                  0x1210
#define HOSTCMD_CMD_IBSS_START                  0x1212


/* Define general result code for each command */
#define HOSTCMD_RESULT_OK                       0x0000
/* General error */
#define HOSTCMD_RESULT_ERROR                    0x0001
/* Command is not valid */
#define HOSTCMD_RESULT_NOT_SUPPORT              0x0002
/* Command is pending (will be processed) */
#define HOSTCMD_RESULT_PENDING                  0x0003
/* System is busy (command ignored) */
#define HOSTCMD_RESULT_BUSY                     0x0004
/* Data buffer is not big enough */
#define HOSTCMD_RESULT_PARTIAL_DATA             0x0005

/* Define channel related constants */
#define FREQ_BAND_2DOT4GHZ                      0x1
#define FREQ_BAND_4DOT9GHZ                      0x2
#define FREQ_BAND_5GHZ                          0x4
#define FREQ_BAND_5DOT2GHZ                      0x8
#define CH_AUTO_WIDTH	                        0
#define CH_10_MHZ_WIDTH                         0x1
#define CH_20_MHZ_WIDTH                         0x2
#define CH_40_MHZ_WIDTH                         0x4
#define CH_80_MHZ_WIDTH                         0x5
#define CH_160_MHZ_WIDTH                        0x6
#define EXT_CH_ABOVE_CTRL_CH                    0x1
#define EXT_CH_AUTO                             0x2
#define EXT_CH_BELOW_CTRL_CH                    0x3
#define NO_EXT_CHANNEL                          0x0

#define ACT_PRIMARY_CHAN_0                      0
#define ACT_PRIMARY_CHAN_1                      1
#define ACT_PRIMARY_CHAN_2                      2
#define ACT_PRIMARY_CHAN_3                      3
#define ACT_PRIMARY_CHAN_4                      4
#define ACT_PRIMARY_CHAN_5                      5
#define ACT_PRIMARY_CHAN_6                      6
#define ACT_PRIMARY_CHAN_7                      7

/* Define rate related constants */
#define HOSTCMD_ACT_NOT_USE_FIXED_RATE          0x0002

/* Define station related constants */
#define HOSTCMD_ACT_STA_ACTION_ADD              0
#define HOSTCMD_ACT_STA_ACTION_REMOVE           2

/* Define key related constants */
#define MAX_ENCR_KEY_LENGTH                     16
#define MIC_KEY_LENGTH                          8

#define KEY_TYPE_ID_WEP                         0x00
#define KEY_TYPE_ID_TKIP                        0x01
#define KEY_TYPE_ID_AES	                        0x02

/* Group key for RX only */
#define ENCR_KEY_FLAG_RXGROUPKEY                0x00000002
#define ENCR_KEY_FLAG_TXGROUPKEY                0x00000004
#define ENCR_KEY_FLAG_PAIRWISE                  0x00000008
#define ENCR_KEY_FLAG_TSC_VALID                 0x00000040
#define ENCR_KEY_FLAG_WEP_TXKEY                 0x01000000
#define ENCR_KEY_FLAG_MICKEY_VALID              0x02000000

/* Define block ack related constants */
#define BASTREAM_FLAG_IMMEDIATE_TYPE            1
#define BASTREAM_FLAG_DIRECTION_UPSTREAM        0

/* Define general purpose action */
#define HOSTCMD_ACT_GEN_SET                     0x0001
#define HOSTCMD_ACT_GEN_SET_LIST                0x0002
#define HOSTCMD_ACT_GEN_GET_LIST                0x0003

/* Define TXPower control action*/
#define HOSTCMD_ACT_GET_TARGET_TX_PWR           0x0000
#define HOSTCMD_ACT_GET_MAX_TX_PWR              0x0001
#define HOSTCMD_ACT_SET_TARGET_TX_PWR           0x0002
#define HOSTCMD_ACT_SET_MAX_TX_PWR              0x0003

/* Misc */
#define WSC_IE_MAX_LENGTH                       251
#define WSC_IE_SET_BEACON                       0
#define WSC_IE_SET_PROBE_RESPONSE               1

/* Allocating space only for single NOA descriptor */
#define WFD_IE_MAX_LENGTH                       38
#define WFD_IE_SET_BEACON                       0
#define WFD_IE_SET_PROBE_RESPONSE               1

#define HW_SET_PARMS_FEATURES_HOST_PROBE_RESP   0x00000020
#define HW_SET_PARMS_FEATURES_HOST_ENCRDECRMGT  0x00000080

#define EDMAC_2G_ENABLE_MASK            0x00000001
#define EDMAC_2G_ENABLE_SHIFT           0x0
#define EDMAC_5G_ENABLE_MASK            0x00000002
#define EDMAC_5G_ENABLE_SHIFT           0x1
#define EDMAC_2G_THRESHOLD_OFFSET_MASK  0x00000FF0
#define EDMAC_2G_THRESHOLD_OFFSET_SHIFT 0x4
#define EDMAC_5G_THRESHOLD_OFFSET_MASK  0x000FF000
#define EDMAC_5G_THRESHOLD_OFFSET_SHIFT 0xC
#define EDMAC_QLOCK_BITMAP_MASK         0x3FF00000
#define EDMAC_QLOCK_BITMAP_SHIFT        0x14

#define WOWLAN_WAKE_BITMAP_LINK_LOST         0x0001
#define WOWLAN_WAKE_BITMAP_AP_INRANGE        0x0002
#define WOWLAN_WAKE_BITMAP_RX_UCAST_DATA     0x0100
#define WOWLAN_WAKE_BITMAP_RX_UCAST_DATA_ANY 0x0200
#define WOWLAN_WAKE_BITMAP_PATTERN_MATCH     0x0400
#define WOWLAN_WAKE_BITMAP_MAGIC_PACKET      0x0800

#define WOWLAN_WAKEUP_GAP_CFG                  1000 /*msec*/
#define WOWLAN_WAKEUP_SIGNAL_TYPE_HIGH          0x1
#define WOWLAN_WAKEUP_SIGNAL_TYPE_LOW           0x0

#define ANT_GAIN_VALID_MASK              0x000FFFFF

#define LRD_MAX_RSNIE_DATA                      102

enum {
	WL_DISABLE = 0,
	WL_ENABLE = 1,
	WL_DISABLE_VMAC = 0x80,
};

enum {
	WL_GET = 0,
	WL_SET = 1,
	WL_RESET = 2,
};

enum {
	WL_LONG_PREAMBLE  = 1,
	WL_SHORT_PREAMBLE = 3,
	WL_AUTO_PREAMBLE  = 5,
};

enum encr_action_type {
	/* request to enable/disable HW encryption */
	ENCR_ACTION_ENABLE_HW_ENCR,
	/* request to set encryption key */
	ENCR_ACTION_TYPE_SET_KEY,
	/* request to remove one or more keys */
	ENCR_ACTION_TYPE_REMOVE_KEY,
	ENCR_ACTION_TYPE_SET_GROUP_KEY,
};

enum ba_action_type {
	BA_CREATE_STREAM,
	BA_UPDATE_STREAM,
	BA_DESTROY_STREAM,
	BA_FLUSH_STREAM,
	BA_CHECK_STREAM,
};

enum mac_type {
	WL_MAC_TYPE_PRIMARY_CLIENT,
	WL_MAC_TYPE_SECONDARY_CLIENT,
	WL_MAC_TYPE_PRIMARY_AP,
	WL_MAC_TYPE_SECONDARY_AP,
};

enum mfg_action_type {
	MFG_TYPE_START,
	MFG_TYPE_WRITE,
	MFG_TYPE_END,
};

/* General host command header */
struct hostcmd_header {
	__le16 cmd;
	__le16 len;
	u8 seq_num;
	u8 macid;
	__le16 result;
} __packed;

#define WCB_BASE_COUNT     20
/* HOSTCMD_CMD_GET_HW_SPEC */
struct hostcmd_cmd_get_hw_spec {
	struct hostcmd_header cmd_hdr;
	u8 version;                  /* version of the HW                    */
	u8 host_if;                  /* host interface                       */
	__le16 num_wcb;              /* Max. number of WCB FW can handle     */
	__le16 num_mcast_addr;       /* MaxNbr of MC addresses FW can handle */
	u8 permanent_addr[ETH_ALEN]; /* MAC address programmed in HW         */
	__le16 region_code;
	__le16 num_antenna;          /* Number of antenna used      */
	__le32 fw_release_num;       /* 4 byte of FW release number */
	__le32 wcb_base0;
	__le32 rxpd_wr_ptr;
	__le32 rxpd_rd_ptr;
	__le32 fw_awake_cookie;
	__le32 wcb_base[WCB_BASE_COUNT - 1];
} __packed;

/* HOSTCMD_CMD_SET_HW_SPEC */
struct hostcmd_cmd_set_hw_spec {
	struct hostcmd_header cmd_hdr;
	/* HW revision */
	u8 version;
	/* Host interface */
	u8 host_if;
	/* Max. number of Multicast address FW can handle */
	__le16 num_mcast_addr;
	/* MAC address */
	u8 permanent_addr[ETH_ALEN];
	/* Region Code */
	__le16 region_code;
	/* 4 byte of FW release number, example 0x1234=1.2.3.4 */
	__le32 fw_release_num;
	/* Firmware awake cookie - used to ensure that the device
	 * is not in sleep mode
	 */
	__le32 fw_awake_cookie;
	/* Device capabilities (see above) */
	__le32 device_caps;
	/* Rx shared memory queue */
	__le32 rxpd_wr_ptr;
	/* Actual number of TX queues in WcbBase array */
	__le32 num_tx_queues;
	/* TX WCB Rings */
	__le32 wcb_base[WCB_BASE_COUNT];
	/* Max AMSDU size (00 - AMSDU Disabled,
	 * 01 - 4K, 10 - 8K, 11 - not defined)
	 */
	__le32 features;
	__le32 tx_wcb_num_per_queue;
	__le32 total_rx_wcb;
} __packed;

/* HOSTCMD_CMD_SET_CFG */
struct hostcmd_cmd_set_cfg {
	struct hostcmd_header cmd_hdr;
	/* Action */
	__le16 action;
	/* Type */
	__le16 type;
	/* Data length */
	__le16 data_len;
	/* Data */
	u8 data[1];
} __packed;

/* HOSTCMD_CMD_802_11_GET_STAT */
struct hostcmd_cmd_802_11_get_stat {
	struct hostcmd_header cmd_hdr;
	__le32 tx_retry_successes;
	__le32 tx_multiple_retry_successes;
	__le32 tx_failures;
	__le32 rts_successes;
	__le32 rts_failures;
	__le32 ack_failures;
	__le32 rx_duplicate_frames;
	__le32 rx_fcs_errors;
	__le32 tx_watchdog_timeouts;
	__le32 rx_overflows;
	__le32 rx_frag_errors;
	__le32 rx_mem_errors;
	__le32 pointer_errors;
	__le32 tx_underflows;
	__le32 tx_done;
	__le32 tx_done_buf_try_put;
	__le32 tx_done_buf_put;
	/* Put size of requested buffer in here */
	__le32 wait_for_tx_buf;
	__le32 tx_attempts;
	__le32 tx_successes;
	__le32 tx_fragments;
	__le32 tx_multicasts;
	__le32 rx_non_ctl_pkts;
	__le32 rx_multicasts;
	__le32 rx_undecryptable_frames;
	__le32 rx_icv_errors;
	__le32 rx_excluded_frames;
	__le32 rx_weak_iv_count;
	__le32 rx_unicasts;
	__le32 rx_bytes;
	__le32 rx_errors;
	__le32 rx_rts_count;
	__le32 tx_cts_count;
} __packed;

/* HOSTCMD_CMD_MAC_REG_ACCESS */
struct hostcmd_cmd_mac_reg_access {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	__le16 offset;
	u32 value;
} __packed;

/* HOSTCMD_CMD_BBP_REG_ACCESS */
struct hostcmd_cmd_bbp_reg_access {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	__le16 offset;
	u8 value;
	u8 reserverd[3];
} __packed;

/* HOSTCMD_CMD_RF_REG_ACCESS */
struct hostcmd_cmd_rf_reg_access {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	__le16 offset;
	u8 value;
	u8 reserverd[3];
} __packed;

/* HOSTCMD_CMD_802_11_RADIO_CONTROL */
struct hostcmd_cmd_802_11_radio_control {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	/* @bit0: 1/0,on/off, @bit1: 1/0, long/short @bit2: 1/0,auto/fix */
	__le16 control;
	__le16 radio_on;
} __packed;

/* HOSTCMD_CMD_802_11_SHORT_SLOT */
struct hostcmd_cmd_802_11_slot_time {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	/* 0:long slot; 1:short slot */
	__le16 short_slot;
} __packed;

/* HOSTCMD_CMD_EDMAC_CTRL */
struct hostcmd_cmd_edmac_ctrl {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	u8 ed_ctrl_2g;
	s8 ed_offset_2g;
	u8 ed_ctrl_5g;
	s8 ed_offset_5g;
	__le16 ed_bitmap_txq_lock;
} __packed;

/* HOSTCMD_CMD_MEM_ADDR_ACCESS */
struct hostcmd_cmd_mem_addr_access {
	struct hostcmd_header cmd_hdr;
	__le32 address;
	__le16 length;
	__le16 reserved;
	__le32 value[64];
} __packed;

/* HOSTCMD_CMD_802_11_TX_POWER */
struct hostcmd_cmd_802_11_tx_power {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	__le16 band;
	__le16 ch;
	__le16 bw;
	__le16 sub_ch;
	__le16 power_level_list[SYSADPT_TX_GRP_PWR_LEVEL_TOTAL];
} __packed;

/* HOSTCMD_CMD_802_11_RF_ANTENNA */
struct hostcmd_cmd_802_11_rf_antenna_v2 {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	__le16 ant_tx_bmp;     /* Number of antennas or 0xffff(diversity) */
	__le16 ant_rx_bmp;     /* Number of antennas or 0xffff(diversity) */
} __packed;

//Note this structure is packed mwl_wowlan equivalent is not
struct wowlan_apinrange_addrIe {
	u8 address[ETH_ALEN];
} __packed;

//Note This structure is packed mwl_wowlan_ equivalent is not
struct wowlan_apinrange_ssidIe {
	u8 ssidLen;
	u8 ssid[IEEE80211_MAX_SSID_LEN];
}__packed;

/* HOSTCMD_CMD_HOSTSLEEP_CTRL */
struct hostcmd_cmd_hostsleep_ctrl {
	struct hostcmd_header cmd_hdr;
	u8 HS_enable:1; /**/
	u8 DS_enable:1; /**/
	u8 reserved:6;  /**/
	u8 wakeupSignal;  /*1: active high   0: active low */
	__le16 gap;       /* Time in ms Fw needs to wait before sending Evnts or frames */
	__le32 wakeUpConditions;
	__le32 options;  /* For debug purpose Only*/
} __packed;

/* HOSTCMD_CMD_WOWLAN_AP_INRANGE_CFG */
struct hostcmd_cmd_wowlan_ap_inrange_cfg {
	struct hostcmd_header cmd_hdr;
	__le16 chanListCnt;
	__le16 addrIeList_Len;
	__le16 ssidIeList_Len;
	u8 chanList[SYSADPT_MAX_NUM_CHANNELS];
	struct wowlan_apinrange_addrIe addrIeList;
	struct wowlan_apinrange_ssidIe ssidIeList;
} __packed;

/* HOSTCMD_CMD_802_11_PS_MODE */
struct hostcmd_cmd_802_11_ps_mode {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	__le16 powermode;     /* PowerSave Enable/Disable */
} __packed;

/* HOSTCMD_CMD_BROADCAST_SSID_ENABLE */
struct hostcmd_cmd_broadcast_ssid_enable {
	struct hostcmd_header cmd_hdr;
	__le32 enable;
	/* Hidden SSID Options-
	** 0: Do not Hide
	** 1: Hide SSID by using zero len SSID element
	** 2: Hide SSID by using correct len in SSID element but zero out complete SSID
	*/
	 __le32 hidden_ssid_info;
} __packed;

/* HOSTCMD_CMD_SET_RF_CHANNEL */
#define FREQ_BAND_MASK     0x0000003f
#define CHNL_WIDTH_MASK    0x000007c0
#define CHNL_WIDTH_SHIFT   6
#define ACT_PRIMARY_MASK   0x00003800
#define ACT_PRIMARY_SHIFT  11

struct hostcmd_cmd_set_rf_channel {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	u8 curr_chnl;
	__le32 chnl_flags;
	u8 remain_on_chan;
} __packed;

/* HOSTCMD_CMD_SET_AID */
struct hostcmd_cmd_set_aid {
	struct hostcmd_header cmd_hdr;
	__le16 aid;
	u8 mac_addr[ETH_ALEN];       /* AP's Mac Address(BSSID) */
	__le32 gprotect;
	u8 ap_rates[SYSADPT_MAX_DATA_RATES_G];
} __packed;

/* HOSTCMD_CMD_SET_INFRA_MODE */
struct hostcmd_cmd_set_infra_mode {
	struct hostcmd_header cmd_hdr;
} __packed;

/* HOSTCMD_CMD_802_11_RTS_THSD */
struct hostcmd_cmd_802_11_rts_thsd {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	__le16	threshold;
} __packed;

/* HOSTCMD_CMD_SET_EDCA_PARAMS */
struct hostcmd_cmd_set_edca_params {
	struct hostcmd_header cmd_hdr;
	/* 0 = get all, 0x1 =set CWMin/Max,  0x2 = set TXOP , 0x4 =set AIFSN */
	__le16 action;
	__le16 txop;                 /* in unit of 32 us */
	__le32 cw_max;               /* 0~15 */
	__le32 cw_min;               /* 0~15 */
	u8 aifsn;
	u8 txq_num;                  /* Tx Queue number. */
} __packed;

/* HOSTCMD_CMD_802_11H_DETECT_RADAR */
#define RADAR_TYPE_CODE_0    0
#define RADAR_TYPE_CODE_53   53
#define RADAR_TYPE_CODE_56   56
#define RADAR_TYPE_CODE_ETSI 151

struct hostcmd_cmd_802_11h_detect_radar {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	__le16 radar_type_code;
	__le16 min_chirp_cnt;
	__le16 chirp_time_intvl;
	__le16 pw_filter;
	__le16 min_num_radar;
	__le16 pri_min_num;
} __packed;

/* HOSTCMD_CMD_SET_WMM_MODE */
struct hostcmd_cmd_set_wmm_mode {
	struct hostcmd_header cmd_hdr;
	__le16 action;               /* 0->unset, 1->set */
} __packed;

/* HOSTCMD_CMD_HT_GUARD_INTERVAL */
struct hostcmd_cmd_ht_guard_interval {
	struct hostcmd_header cmd_hdr;
	__le32 action;
	__le32 gi_type;
} __packed;

/* HOSTCMD_CMD_SET_FIXED_RATE */
struct fix_rate_flag {           /* lower rate after the retry count */
	/* 0: legacy, 1: HT */
	__le32 fix_rate_type;
	/* 0: retry count is not valid, 1: use retry count specified */
	__le32 retry_count_valid;
} __packed;

struct fix_rate_entry {
	struct fix_rate_flag fix_rate_type_flags;
	/* depending on the flags above, this can be either a legacy
	 * rate(not index) or an MCS code.
	 */
	__le32 fixed_rate;
	__le32 retry_count;
} __packed;

struct hostcmd_cmd_set_fixed_rate {
	struct hostcmd_header cmd_hdr;
	/* HOSTCMD_ACT_NOT_USE_FIXED_RATE 0x0002 */
	__le32 action;
	/* use fixed rate specified but firmware can drop to */
	__le32 allow_rate_drop;
	__le32 entry_count;
	struct fix_rate_entry fixed_rate_table[4];
	u8 multicast_rate;
	u8 multi_rate_tx_type;
	u8 management_rate;
} __packed;

/* HOSTCMD_CMD_SET_IES */
struct hostcmd_cmd_set_ies {
	struct hostcmd_header cmd_hdr;
	__le16 action;               /* 0->unset, 1->set */
	__le16 ie_list_len_ht;
	__le16 ie_list_len_vht;
	__le16 ie_list_len_proprietary;
	/*Buffer size same as Generic_Beacon*/
	u8 ie_list_ht[148];
	u8 ie_list_vht[24];
	u8 ie_list_proprietary[112];
} __packed;

/* HOSTCMD_CMD_SET_LINKADAPT_CS_MODE */
struct hostcmd_cmd_set_linkadapt_cs_mode {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	__le16 cs_mode;
} __packed;

/* HOSTCMD_CMD_SET_MAC_ADDR, HOSTCMD_CMD_DEL_MAC_ADDR */
struct hostcmd_cmd_set_mac_addr {
	struct hostcmd_header cmd_hdr;
	__le16 mac_type;
	u8 mac_addr[ETH_ALEN];
} __packed;

/* HOSTCMD_CMD_SET_RATE_ADAPT_MODE */
struct hostcmd_cmd_set_rate_adapt_mode {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	__le16 rate_adapt_mode;      /* 0:Indoor, 1:Outdoor */
} __packed;

/* HOSTCMD_CMD_GET_WATCHDOG_BITMAP */
struct hostcmd_cmd_get_watchdog_bitmap {
	struct hostcmd_header cmd_hdr;
	u8 watchdog_bitmap;          /* for SW/BA */
} __packed;

/* HOSTCMD_CMD_BSS_START */
struct hostcmd_cmd_bss_start {
	struct hostcmd_header cmd_hdr;
	__le32 enable;                  /* FALSE: Disable or TRUE: Enable */
} __packed;

/* HOSTCMD_CMD_AP_BEACON */
struct cf_params {
	u8 elem_id;
	u8 len;
	u8 cfp_cnt;
	u8 cfp_period;
	__le16 cfp_max_duration;
	__le16 cfp_duration_remaining;
} __packed;

struct ibss_params {
	u8 elem_id;
	u8 len;
	__le16	atim_window;
} __packed;

union ss_params {
	struct cf_params cf_param_set;
	struct ibss_params ibss_param_set;
} __packed;

struct fh_params {
	u8 elem_id;
	u8 len;
	__le16 dwell_time;
	u8 hop_set;
	u8 hop_pattern;
	u8 hop_index;
} __packed;

struct ds_params {
	u8 elem_id;
	u8 len;
	u8 current_chnl;
} __packed;

union phy_params {
	struct fh_params fh_param_set;
	struct ds_params ds_param_set;
} __packed;

struct rsn_ie {
	u8 elem_id;
	u8 len;
	u8 oui_type[4];              /* 00:50:f2:01 */
	u8 ver[2];
	u8 grp_key_cipher[4];
	u8 pws_key_cnt[2];
	u8 pws_key_cipher_list[4];
	u8 auth_key_cnt[2];
	u8 auth_key_list[4];
} __packed;

struct rsn48_ie {
	u8 elem_id;
	u8 len;
	u8 ver[2];
	u8 grp_key_cipher[4];
	u8 pws_key_cnt[2];
	u8 pws_key_cipher_list[4];
	u8 auth_key_cnt[2];
	u8 auth_key_list[4];
	u8 rsn_cap[2];
	u8 pmk_id_cnt[2];
	u8 pmk_id_list[16];          /* Should modify to 16 * S */
	u8 reserved[8];
} __packed;

struct ac_param_rcd {
	u8 aci_aifsn;
	u8 ecw_min_max;
	__le16 txop_lim;
} __packed;

struct wmm_param_elem {
	u8 elem_id;
	u8 len;
	u8 oui[3];
	u8 type;
	u8 sub_type;
	u8 version;
	// Adding QosInfo to make sure FW and Driver sees same structure
	u8 qos_info;
	u8 rsvd;
	struct ac_param_rcd ac_be;
	struct ac_param_rcd ac_bk;
	struct ac_param_rcd ac_vi;
	struct ac_param_rcd ac_vo;
} __packed;

struct channel_info {
	u8 first_channel_num;
	u8 num_channels;
	u8 max_tx_pwr_level;
} __packed;

struct country {
	u8 elem_id;
	u8 len;
	u8 country_str[3];
	struct channel_info channel_info[40];
} __packed;

struct power_constraint_ie {
	u8 elem_id;
	u8 len;
	u8 local_constraint;
} __packed;

struct start_cmd {
	u8 sta_mac_addr[ETH_ALEN];
	u8 ssid[IEEE80211_MAX_SSID_LEN];
	u8 bss_type;
	__le16 bcn_period;
	u8 dtim_period;
	union ss_params ss_param_set;
	union phy_params phy_param_set;
	__le16 probe_delay;
	__le16 cap_info;
	u8 b_rate_set[SYSADPT_MAX_DATA_RATES_G];
	u8 op_rate_set[SYSADPT_MAX_DATA_RATES_G];
	__le16 offset_StaRsnIE;
	__le16 offset_StaRsnIE48;

	struct wmm_param_elem wmm_param;
	struct country country;
	__le32 ap_rf_type;           /* 0->B, 1->G, 2->Mixed, 3->A, 4->11J */
	struct power_constraint_ie power_constraint;
	u8 Bssid[ETH_ALEN];

	u8 rsn_data[LRD_MAX_RSNIE_DATA];
} __packed;

struct hostcmd_cmd_ap_beacon {
	struct hostcmd_header cmd_hdr;
	struct start_cmd start_cmd;
} __packed;

/* HOSTCMD_CMD_SET_NEW_STN */
struct add_ht_info {
	u8 control_chnl;
	u8 add_chnl;
	__le16 op_mode;
	__le16 stbc;
} __packed;

struct peer_info {
	__le32 legacy_rate_bitmap;
	u8 ht_rates[4];
	__le16 cap_info;
	__le16 ht_cap_info;
	u8 mac_ht_param_info;
	u8 mrvl_sta;
	struct add_ht_info add_ht_info;
	__le32 tx_bf_capabilities;   /* EXBF_SUPPORT */
	__le32 vht_max_rx_mcs;
	__le32 vht_cap;
	/* 0:20Mhz, 1:40Mhz, 2:80Mhz, 3:160 or 80+80Mhz */
	u8 vht_rx_channel_width;
} __packed;

struct hostcmd_cmd_set_new_stn {
	struct hostcmd_header cmd_hdr;
	__le16 aid;
	u8 mac_addr[ETH_ALEN];
	__le16 stn_id;
	__le16 action;
	__le16 if_type;
	struct peer_info peer_info;
	/* UAPSD_SUPPORT */
	u8 qos_info;
	u8 is_qos_sta;
	__le32 fw_sta_ptr;
} __packed;

/* HOSTCMD_CMD_SET_APMODE */
struct hostcmd_cmd_set_apmode {
	struct hostcmd_header cmd_hdr;
	u8 apmode;
} __packed;

/* HOSTCMD_CMD_SET_SWITCH_CHANNEL */
struct hostcmd_cmd_set_switch_channel {
	struct hostcmd_header cmd_hdr;
	__le32 next_11h_chnl;
	__le32 mode;
	__le32 init_count;
	__le32 chnl_flags;
	__le32 next_ht_extchnl_offset;
	__le32 dfs_test_mode;
} __packed;

/* HOSTCMD_CMD_UPDATE_ENCRYPTION */
struct hostcmd_cmd_update_encryption {
	struct hostcmd_header cmd_hdr;
	/* Action type - see encr_action_type */
	__le32 action_type;          /* encr_action_type */
	/* size of the data buffer attached. */
	__le32 data_length;
	u8 mac_addr[ETH_ALEN];
	u8 action_data[1];
} __packed;

struct wep_type_key {
	/* WEP key material (max 128bit) */
	u8 key_material[MAX_ENCR_KEY_LENGTH];
} __packed;

struct encr_tkip_seqcnt {
	__le16 low;
	__le32 high;
} __packed;

struct tkip_type_key {
	/* TKIP Key material. Key type (group or pairwise key) is
	 * determined by flags
	 */
	/* in KEY_PARAM_SET structure. */
	u8 key_material[MAX_ENCR_KEY_LENGTH];
	/* MIC keys */
	u8 tkip_tx_mic_key[MIC_KEY_LENGTH];
	u8 tkip_rx_mic_key[MIC_KEY_LENGTH];
	struct encr_tkip_seqcnt	tkip_rsc;
	struct encr_tkip_seqcnt	tkip_tsc;
} __packed;

struct aes_type_key {
	/* AES Key material */
	u8 key_material[MAX_ENCR_KEY_LENGTH];
} __packed;

union mwl_key_type {
	struct wep_type_key  wep_key;
	struct tkip_type_key tkip_key;
	struct aes_type_key  aes_key;
} __packed;

struct key_param_set {
	/* Total length of this structure (Key is variable size array) */
	__le16 length;
	/* Key type - WEP, TKIP or AES-CCMP. */
	/* See definitions above */
	__le16 key_type_id;
	/* key flags (ENCR_KEY_FLAG_XXX_ */
	__le32 key_info;
	/* For WEP only - actual key index */
	__le32 key_index;
	/* Size of the key */
	__le16 key_len;
	/* Key material (variable size array) */
	union mwl_key_type key;
	u8 mac_addr[ETH_ALEN];
	__le32 cfg_flags;
} __packed;

struct hostcmd_cmd_set_key {
	struct hostcmd_header cmd_hdr;
	/* Action type - see encr_action_type */
	__le32 action_type;          /* encr_action_type */
	/* size of the data buffer attached. */
	__le32 data_length;
	/* data buffer - maps to one KEY_PARAM_SET structure */
	struct key_param_set key_param;
} __packed;

/* HOSTCMD_CMD_BASTREAM */
#define BA_TYPE_MASK       0x00000001
#define BA_DIRECTION_MASK  0x00000006
#define BA_DIRECTION_SHIFT 1

struct ba_context {
	__le32 context;
} __packed;

/* parameters for block ack creation */
struct create_ba_params {
	/* BA Creation flags - see above */
	__le32 flags;
	/* idle threshold */
	__le32 idle_thrs;
	/* block ack transmit threshold (after how many pkts should we
	 * send BAR?)
	 */
	__le32 bar_thrs;
	/* receiver window size */
	__le32 window_size;
	/* MAC Address of the BA partner */
	u8 peer_mac_addr[ETH_ALEN];
	/* Dialog Token */
	u8 dialog_token;
	/* TID for the traffic stream in this BA */
	u8 tid;
	/* shared memory queue ID (not sure if this is required) */
	u8 queue_id;
	u8 param_info;
	/* returned by firmware - firmware context pointer. */
	/* this context pointer will be passed to firmware for all
	 * future commands.
	 */
	struct ba_context fw_ba_context;
	u8 reset_seq_no;             /** 0 or 1**/
	__le16 current_seq;
	/* This is for virtual station in Sta proxy mode for V6FW */
	u8 sta_src_mac_addr[ETH_ALEN];
} __packed;

/* new transmit sequence number information */
struct ba_update_seq_num {
	/* BA flags - see above */
	__le32 flags;
	/* returned by firmware in the create ba stream response */
	struct ba_context fw_ba_context;
	/* new sequence number for this block ack stream */
	__le16 ba_seq_num;
} __packed;

struct ba_stream_context {
	/* BA Stream flags */
	__le32 flags;
	/* returned by firmware in the create ba stream response */
	struct ba_context fw_ba_context;
} __packed;

union ba_info {
	/* information required to create BA Stream... */
	struct create_ba_params	create_params;
	/* update starting/new sequence number etc. */
	struct ba_update_seq_num updt_seq_num;
	/* destroy an existing stream... */
	struct ba_stream_context destroy_params;
	/* destroy an existing stream... */
	struct ba_stream_context flush_params;
} __packed;

struct hostcmd_cmd_bastream {
	struct hostcmd_header cmd_hdr;
	__le32 action_type;
	union ba_info ba_info;
} __packed;

/* HOSTCMD_CMD_SET_SPECTRUM_MGMT */
struct hostcmd_cmd_set_spectrum_mgmt {
	struct hostcmd_header cmd_hdr;
	__le32 spectrum_mgmt;
} __packed;

/* HOSTCMD_CMD_SET_POWER_CONSTRAINT */
struct hostcmd_cmd_set_power_constraint {
	struct hostcmd_header cmd_hdr;
	__le32 power_constraint;
} __packed;

/* HOSTCMD_CMD_SET_COUNTRY_CODE */
struct domain_chnl_entry {
	u8 first_chnl_num;
	u8 chnl_num;
	u8 max_transmit_pw;
} __packed;

struct domain_country_info {
	u8 country_string[3];
	u8 g_chnl_len;
	struct domain_chnl_entry domain_entry_g[1];
	u8 a_chnl_len;
	struct domain_chnl_entry domain_entry_a[20];
} __packed;

struct hostcmd_cmd_set_country_code {
	struct hostcmd_header cmd_hdr;
	__le32 action ; /* 0 -> unset, 1 ->set */
	struct domain_country_info domain_info;
} __packed;

/* HOSTCMD_CMD_SET_OPTIMIZATION_LEVEL */
struct hostcmd_cmd_set_optimization_level {
	struct hostcmd_header cmd_hdr;
	u8 opt_level;
} __packed;

/* HOSTCMD_CMD_SET_MIMOPSHT */
struct hostcmd_cmd_set_mimops_ht {
	struct hostcmd_header cmd_hdr;
	u8 addr[ETH_ALEN];
    u8 enbl;
    u8 mode;
} __packed;

/* HOSTCMD_CMD_SET_WSC_IE */
struct hostcmd_cmd_set_wsc_ie {
	struct hostcmd_header cmd_hdr;
	__le16 ie_type;              /* 0 -- beacon. or 1 -- probe response. */
	__le16 len;
	u8 data[WSC_IE_MAX_LENGTH];
} __packed;

/* HOSTCMD_CMD_SET_WFD_IE */
struct hostcmd_cmd_set_wfd_ie {
	struct hostcmd_header cmd_hdr;
	__le16 ie_type;              /* 0 -- beacon. or 1 -- probe response. */
	__le16 len;
	u8 data[WFD_IE_MAX_LENGTH];
} __packed;

/* HOSTCMD_CMD_DWDS_ENABLE */
struct hostcmd_cmd_dwds_enable {
	struct hostcmd_header cmd_hdr;
	__le32 enable;               /* 0 -- Disable. or 1 -- Enable. */
} __packed;

/* HOSTCMD_CMD_FW_FLUSH_TIMER */
struct hostcmd_cmd_fw_flush_timer {
	struct hostcmd_header cmd_hdr;
	/* 0 -- Disable. > 0 -- holds time value in usecs. */
	__le32 value;
} __packed;

/* HOSTCMD_CMD_SET_CDD */
struct hostcmd_cmd_set_cdd {
	struct hostcmd_header cmd_hdr;
	__le32 enable;
} __packed;

/* HOSTCMD_CMD_GET_TEMP */
struct hostcmd_cmd_get_temp {
	struct hostcmd_header cmd_hdr;
	__le32 celcius;
	__le32 raw_data;
} __packed;

/* HOSTCMD_CMD_GET_FW_REGION_CODE */
struct hostcmd_cmd_get_fw_region_code {
	struct hostcmd_header cmd_hdr;
	__le32 status; /* 0 = Found, 1 = Error */
	__le32 fw_region_code;
} __packed;

/* HOSTCMD_CMD_GET_DEVICE_PWR_TBL */
#define HAL_TRPC_ID_MAX    28
#define HAL_TRPC_ID_2G_MAX 16
#define HAL_TRPC_ID_5G_MAX 28

struct channel_power_tbl {
	u8 channel;
	u8 tx_pwr[HAL_TRPC_ID_MAX];
	u8 dfs_capable;
	u8 ax_ant;
	u8 cdd;
} __packed;

struct hostcmd_cmd_get_device_pwr_tbl {
	struct hostcmd_header cmd_hdr;
	__le16 status; /* 0 = Found, 1 = Error */
	u8 region_code;
	u8 number_of_channels;
	__le32 current_channel_index;
	/* Only for 1 channel, so, 1 channel at a time */
	struct channel_power_tbl channel_pwr_tbl;
} __packed;

/* HOSTCMD_CMD_GET_FW_REGION_CODE_SC4 */
struct hostcmd_cmd_get_fw_region_code_sc4 {
	struct hostcmd_header cmd_hdr;
	__le32 fw_region_code;
} __packed;

/* HOSTCMD_CMD_GET_DEVICE_PWR_TBL_SC4 */
#define HAL_TRPC_ID_MAX_SC4        32
#define MAX_GROUP_PER_CHANNEL_5G   39
#define MAX_GROUP_PER_CHANNEL_2G   21
#define	MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MAX_GROUP_PER_CHANNEL_RATE \
	MAX(MAX_GROUP_PER_CHANNEL_5G, MAX_GROUP_PER_CHANNEL_2G)

struct channel_power_tbl_sc4 {
	u8 channel;
	u8 grp_pwr[MAX_GROUP_PER_CHANNEL_RATE];
	u8 tx_pwr[HAL_TRPC_ID_MAX_SC4];
	u8 dfs_capable;
	u8 ax_ant;
	u8 cdd;
	u8 rsvd;
} __packed;

struct hostcmd_cmd_get_device_pwr_tbl_sc4 {
	struct hostcmd_header cmd_hdr;
	__le16 status; /* 0 = Found, 1 = Error */
	u8 region_code;
	u8 number_of_channels;
	__le32 current_channel_index;
	/* Only for 1 channel, so, 1 channel at a time */
	struct channel_power_tbl_sc4 channel_pwr_tbl;
} __packed;

/* HOSTCMD_CMD_QUIET_MODE */
struct hostcmd_cmd_quiet_mode {
	struct hostcmd_header cmd_hdr;
	__le16 action;
	__le32 enable;
	__le32 period;
	__le32 duration;
	__le32 next_offset;
} __packed;

struct hostcmd_cmd_dump_otp_data {
	struct hostcmd_header cmd_hdr;
	u8 pload[0];
} __packed;

struct hostcmd_cmd_pre_scan {
	struct hostcmd_header cmd_hdr;
	u8 pload[0];
} __packed;

struct hostcmd_cmd_post_scan {
	struct hostcmd_header cmd_hdr;
	u8 pload[0];
} __packed;

struct hostcmd_cmd_monitor_mode {
	struct hostcmd_header cmd_hdr;
	u8 enableFlag;
} __packed;

struct hostcmd_cmd_region_mapping
{
	struct hostcmd_header cmd_hdr;
	u8  cc[2];
}__packed;

struct hostcmd_cmd_mfg
{
	struct hostcmd_header cmd_hdr;
	__le32 action;
	u8 data[0];
}__packed;

struct hostcmd_mfgfw_header {
	__le16 cmd;
	__le16 len;
	__le16 seq;
	__le16 result;
} __packed;

struct hostcmd_cmd_lru
{
	struct hostcmd_mfgfw_header cmd_hdr;
	__le32 cmd;
	__le16 action;
	__le16 id;
	__le32 error;
	u8 data[0];
}__packed;

struct lrdcmd_header
{
	__le16 lrd_cmd;
	__le16 result;
	__le32 reserved;  /* should be 0 */
}__packed;

struct lrdcmd_cmd_cap
{
	struct lrdcmd_header hdr;
	__le16 capability;
	__le16 num_mac_addr;
	__le16 version;
}__packed;

struct lrdcmd_cmd_ant_gain_adjust
{
	struct lrdcmd_header hdr;
	__le32 ant_gain_adjust;
}__packed;

struct lrdcmd_cmd_pwr_table
{
	struct lrdcmd_header hdr;
	__le16               len;
	struct ieee80211_hdr frm;
	u8 data[0];
}__packed;

struct lrdcmd_cmd_pwr_table_result
{
	struct lrdcmd_header hdr;
	__le32 result;
	__le32 pn;
}__packed;

struct lrdcmd_cmd_cc_info
{
	struct lrdcmd_header hdr;
	u32    region;
	u8     alpha2[2];
} __packed;

struct hostcmd_cmd_deepsleep {
	struct hostcmd_header cmd_hdr;
	u8 enableFlag;
} __packed;

struct hostcmd_cmd_confirm_ps {
	struct hostcmd_header cmd_hdr;
	u8 status;
} __packed;

#endif /* _HOSTCMD_H_ */

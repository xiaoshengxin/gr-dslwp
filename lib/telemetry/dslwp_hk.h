#ifndef __DSLWP_HK_H__
#define __DSLWP_HK_H__

#include <inttypes.h>

typedef struct hk_uv_t
{
	uint8_t config;
	uint8_t flag_rx;
	uint8_t tx_gain;
	uint8_t tx_modulation;
	uint8_t flag_tx;
	uint8_t flag_7021;
	uint8_t n_cmd_buf;
	uint8_t n_cmd_dropped;
	// 8
	uint8_t i_bus_rx;
	uint8_t u_bus_rx;
	uint8_t i_bus_tx;
	uint8_t u_bus_tx;
	int8_t t_pa;
	int8_t t_tx7021;
	int8_t n_jt4_tx;
	int8_t rsvd4;
	// 16
	uint8_t n_422_tx;
	uint8_t n_422_rx;
	uint8_t n_422_rx_pkg_err;
	uint8_t n_422_rx_exe_err;
	uint8_t cmd_422_last_rx;
	uint8_t n_rf_tx;
	uint8_t n_rf_tx_dropped;
	uint8_t n_rf_rx;
	// 24
	uint8_t n_rf_rx_pkg_err;
	uint8_t n_rf_rx_exe_err;
	uint8_t n_rf_rx_fec_err;
	uint8_t cmd_rf_last_rx;
	uint32_t n_ul;
	// 32
	int16_t fc_asm;
	uint16_t snr_asm;
	uint16_t rssi_asm;
	uint16_t rssi_channel;
	// 40
	int8_t rssi_7021;
	int8_t flag_agc;
	int16_t rsvd15;
	int32_t	seconds_since_epoch;
	// 48
	uint8_t cam_mode;
	uint8_t cam_task_flag;
	uint8_t cam_err_flag;
	uint8_t cam_pic_len_2;
	uint8_t cam_pic_len_1;
	uint8_t cam_pic_len_0;
	uint8_t cam_memory_id;
	uint8_t	jt4_task_flag;
	// 56
	uint8_t n_reset;
	uint8_t flag_reset;
	uint8_t flag_sys;
	uint8_t n_dma_overflow;
	uint32_t runtime;
	// 64
	char message[8];
	// 72
} hk_uv_t;

#endif

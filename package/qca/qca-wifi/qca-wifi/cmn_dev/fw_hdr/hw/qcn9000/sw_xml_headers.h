/*
 * Copyright (c) 2019, The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _SW_XML_HEADERS_H_
#define _SW_XML_HEADERS_H_


#include "ack_report.h"
#include "addr_search_entry.h"
#include "buffer_addr_info.h"
#include "cce_rule.h"
#include "ce_dst_desc.h"
#include "ce_src_desc.h"
#include "ce_stat_desc.h"
#include "he_sig_a_mu_dl_info.h"
#include "he_sig_a_mu_ul_info.h"
#include "he_sig_a_su_info.h"
#include "he_sig_b1_mu_info.h"
#include "he_sig_b2_mu_info.h"
#include "he_sig_b2_ofdma_info.h"
#include "ht_sig_info.h"
#include "l_sig_a_info.h"
#include "l_sig_b_info.h"
#include "mactx_abort_request_info.h"
#include "mimo_control_info.h"
#include "mimo_control_info_l1.h"
#include "no_ack_report.h"
#include "pcu_ppdu_setup_end_info.h"
#include "pdg_response_rate_setting.h"
#include "peer_table_entry.h"
#include "phyrx_abort_request_info.h"
#include "phyrx_pkt_end_info.h"
#include "ppdu_rate_setting.h"
#include "prot_rate_setting.h"
#include "receive_rssi_info.h"
#include "receive_user_info.h"
#include "receive_user_info_l1.h"
#include "received_response_user_info.h"
#include "received_trigger_info_details.h"
#include "reo_destination_ring.h"
#include "reo_entrance_ring.h"
#include "reo_to_ppe_ring.h"
#include "response_rate_setting.h"
#include "rx_flow_search_entry.h"
#include "rx_location_info.h"
#include "rx_mpdu_desc_info.h"
#include "rx_mpdu_details.h"
#include "rx_mpdu_info.h"
#include "rx_mpdu_link.h"
#include "rx_mpdu_link_ptr.h"
#include "rx_msdu_desc_info.h"
#include "rx_msdu_details.h"
#include "rx_msdu_link.h"
#include "rx_peer_entry_details.h"
#include "rx_reo_queue.h"
#include "rx_reo_queue_ext.h"
#include "rx_reo_queue_reference.h"
#include "rx_rxpcu_classification_overview.h"
#include "rx_timing_offset_info.h"
#include "rxole_cce_classify_info.h"
#include "rxole_cce_info.h"
#include "rxole_cce_superrule.h"
#include "rxpt_classify_info.h"
#include "scheduler_cmd.h"
#include "service_info.h"
#include "sw_peer_info.h"
#include "tcl_cce_classify_info.h"
#include "tcl_cce_info.h"
#include "tcl_cce_superrule.h"
#include "tcl_compact_exit_ring.h"
#include "tcl_entrance_from_ppe_ring.h"
#include "tcl_exit_base.h"
#include "tcl_extended_exit_ring.h"
#include "tcl_regular_exit_ring.h"
#include "tcl_status_ring.h"
#include "tqm_entrance_ring.h"
#include "tx_flow_search_entry.h"
#include "tx_mpdu_details.h"
#include "tx_mpdu_link.h"
#include "tx_mpdu_link_ptr.h"
#include "tx_mpdu_queue_ext.h"
#include "tx_mpdu_queue_ext_ptr.h"
#include "tx_mpdu_queue_head.h"
#include "tx_msdu_details.h"
#include "tx_msdu_extension.h"
#include "tx_msdu_flow.h"
#include "tx_msdu_link.h"
#include "tx_msdu_link_entry_ptr.h"
#include "tx_puncture_pattern.h"
#include "tx_rate_stats_info.h"
#include "txpcu_buffer_basics.h"
#include "txpt_classify_info.h"
#include "uniform_descriptor_header.h"
#include "uniform_reo_cmd_header.h"
#include "uniform_reo_status_header.h"
#include "uniform_tqm_cmd_header.h"
#include "uniform_tqm_status_header.h"
#include "uplink_common_info.h"
#include "uplink_common_info_punc.h"
#include "uplink_user_setup_info.h"
#include "user_rate_setting.h"
#include "vht_sig_a_info.h"
#include "vht_sig_b_mu160_info.h"
#include "vht_sig_b_mu20_info.h"
#include "vht_sig_b_mu40_info.h"
#include "vht_sig_b_mu80_info.h"
#include "vht_sig_b_su160_info.h"
#include "vht_sig_b_su20_info.h"
#include "vht_sig_b_su40_info.h"
#include "vht_sig_b_su80_info.h"
#include "wbm_buffer_ring.h"
#include "wbm_link_descriptor_ring.h"
#include "wbm_release_ring.h"
#include "who_classify_info.h"
#include "macrx_abort_request_info.h"
#include "phytx_abort_request_info.h"
#include "abort_from_phyrx_details.h"
#include "coex_mac_nap.h"
#include "coex_rx_status.h"
#include "coex_status_broadcast.h"
#include "coex_tx_req.h"
#include "coex_tx_resp.h"
#include "coex_tx_status.h"
#include "coex_tx_stop_ctrl.h"
#include "crypto_status.h"
#include "expected_response.h"
#include "hwsch_rxpcu_mac_info_announcement.h"
#include "mactx_abort_request.h"
#include "mactx_bf_params_common.h"
#include "mactx_coex_phy_ctrl.h"
#include "mactx_delete_cv.h"
#include "mactx_expect_cbf_common.h"
#include "mactx_he_sig_a_mu_dl.h"
#include "mactx_he_sig_a_mu_ul.h"
#include "mactx_he_sig_a_su.h"
#include "mactx_he_sig_b1_mu.h"
#include "mactx_ht_sig.h"
#include "mactx_l_sig_a.h"
#include "mactx_l_sig_b.h"
#include "mactx_mu_uplink_common.h"
#include "mactx_mu_uplink_common_punc.h"
#include "mactx_other_transmit_info_dl_ofdma_tx.h"
#include "mactx_other_transmit_info_emuphy_setup.h"
#include "mactx_phy_desc.h"
#include "mactx_phy_nap.h"
#include "mactx_pre_phy_desc.h"
#include "mactx_prefetch_cv.h"
#include "mactx_prefetch_cv_common.h"
#include "mactx_user_desc_common.h"
#include "mactx_vht_sig_a.h"
#include "mactx_vht_sig_b_su160.h"
#include "mactx_vht_sig_b_su20.h"
#include "mactx_vht_sig_b_su40.h"
#include "mactx_vht_sig_b_su80.h"
#include "obss_sr_info.h"
#include "ofdma_trigger_details.h"
#include "ole_buf_status.h"
#include "pcu_ppdu_setup_end.h"
#include "pcu_ppdu_setup_init.h"
#include "pcu_ppdu_setup_start.h"
#include "pdg_fes_setup.h"
#include "pdg_response.h"
#include "pdg_sw_mode_bw_start.h"
#include "pdg_tx_req.h"
#include "pdg_wait_for_mac_request.h"
#include "pdg_wait_for_phy_request.h"
#include "phyrx_cbf_read_request_ack.h"
#include "phyrx_generated_cbf_details.h"
#include "phyrx_he_sig_a_mu_dl.h"
#include "phyrx_he_sig_a_mu_ul.h"
#include "phyrx_he_sig_a_su.h"
#include "phyrx_he_sig_b1_mu.h"
#include "phyrx_ht_sig.h"
#include "phyrx_l_sig_a.h"
#include "phyrx_l_sig_b.h"
#include "phyrx_pkt_end.h"
#include "phyrx_rssi_ht.h"
#include "phyrx_rssi_legacy.h"
#include "phyrx_tx_start_timing.h"
#include "phyrx_vht_sig_a.h"
#include "phyrx_vht_sig_b_su160.h"
#include "phyrx_vht_sig_b_su20.h"
#include "phyrx_vht_sig_b_su40.h"
#include "phyrx_vht_sig_b_su80.h"
#include "received_response_info.h"
#include "received_response_info_part2.h"
#include "received_response_user_15_8.h"
#include "received_response_user_23_16.h"
#include "received_response_user_31_24.h"
#include "received_response_user_36_32.h"
#include "received_response_user_7_0.h"
#include "received_trigger_info.h"
#include "reo_descriptor_threshold_reached_status.h"
#include "reo_flush_cache.h"
#include "reo_flush_cache_status.h"
#include "reo_flush_queue.h"
#include "reo_flush_queue_status.h"
#include "reo_flush_timeout_list.h"
#include "reo_flush_timeout_list_status.h"
#include "reo_get_queue_stats.h"
#include "reo_get_queue_stats_status.h"
#include "reo_unblock_cache.h"
#include "reo_unblock_cache_status.h"
#include "reo_update_rx_reo_queue.h"
#include "reo_update_rx_reo_queue_status.h"
#include "response_end_status.h"
#include "response_start_status.h"
#include "rx_frame_bitmap_req.h"
#include "rx_frameless_bar_details.h"
#include "rx_pm_info.h"
#include "rx_ppdu_ack_report.h"
#include "rx_ppdu_end_status_done.h"
#include "rx_ppdu_no_ack_report.h"
#include "rx_ppdu_start.h"
#include "rx_preamble.h"
#include "rx_response_required_info.h"
#include "rx_ring_mask.h"
#include "rx_start_param.h"
#include "rx_trig_info.h"
#include "rxpcu_ppdu_end_info.h"
#include "rxpcu_setup.h"
#include "sch_coex_status.h"
#include "sch_wait_instr.h"
#include "sch_wait_instr_tx_path.h"
#include "scheduler_command_status.h"
#include "scheduler_rx_ppdu_no_response_status.h"
#include "scheduler_rx_sifs_response_trigger_status.h"
#include "scheduler_selfgen_response_status.h"
#include "scheduler_sw_msg_status.h"
#include "srp_info.h"
#include "tcl_data_cmd.h"
#include "tcl_gse_cmd.h"
#include "tqm_2_sch_mpdu_available.h"
#include "tqm_acked_mpdu_status.h"
#include "tqm_add_msdu_status.h"
#include "tqm_descriptor_threshold_reached_status.h"
#include "tqm_flow_empty_status.h"
#include "tqm_flow_not_empty_status.h"
#include "tqm_flush_cache.h"
#include "tqm_flush_cache_status.h"
#include "tqm_gen_mpdu_length_list.h"
#include "tqm_gen_mpdu_length_list_status.h"
#include "tqm_gen_mpdus.h"
#include "tqm_gen_mpdus_status.h"
#include "tqm_get_mpdu_head_info.h"
#include "tqm_get_mpdu_head_info_status.h"
#include "tqm_get_mpdu_queue_stats.h"
#include "tqm_get_mpdu_queue_stats_status.h"
#include "tqm_get_msdu_flow_stats.h"
#include "tqm_get_msdu_flow_stats_status.h"
#include "tqm_mpdu_queue_empty_status.h"
#include "tqm_remove_mpdu.h"
#include "tqm_remove_mpdu_status.h"
#include "tqm_remove_msdu.h"
#include "tqm_remove_msdu_status.h"
#include "tqm_sync_cmd.h"
#include "tqm_sync_cmd_status.h"
#include "tqm_threshold_drop_notification_status.h"
#include "tqm_unblock_cache.h"
#include "tqm_unblock_cache_status.h"
#include "tqm_update_tx_mpdu_count_status.h"
#include "tqm_update_tx_mpdu_queue_head.h"
#include "tqm_update_tx_mpdu_queue_head_status.h"
#include "tqm_update_tx_msdu_flow.h"
#include "tqm_update_tx_msdu_flow_status.h"
#include "tqm_write_cmd.h"
#include "tqm_write_cmd_status.h"
#include "tx_cbf_info.h"
#include "tx_data_sync.h"
#include "tx_fes_setup.h"
#include "tx_fes_status_end.h"
#include "tx_fes_status_prot.h"
#include "tx_fes_status_start.h"
#include "tx_fes_status_start_ppdu.h"
#include "tx_fes_status_start_prot.h"
#include "tx_flush_req.h"
#include "tx_loopback_setup.h"
#include "tx_puncture_setup.h"
#include "tx_sw_mode_setup.h"
#include "txpcu_buffer_status.h"
#include "who_terminate.h"
#include "data_to_time_config.h"
#include "mactx_bf_params_per_user.h"
#include "mactx_expect_cbf_per_user.h"
#include "mactx_he_sig_b2_mu.h"
#include "mactx_he_sig_b2_ofdma.h"
#include "mactx_mu_uplink_user_setup.h"
#include "mactx_mu_uplink_user_setup_punc.h"
#include "mactx_service.h"
#include "mactx_user_desc_per_user.h"
#include "mactx_vht_sig_b_mu160.h"
#include "mactx_vht_sig_b_mu20.h"
#include "mactx_vht_sig_b_mu40.h"
#include "mactx_vht_sig_b_mu80.h"
#include "mpdu_info.h"
#include "mpdu_info_bitmap.h"
#include "mpdu_limit.h"
#include "pcu_ppdu_setup_user.h"
#include "pdg_user_setup.h"
#include "phyrx_common_user_info.h"
#include "phyrx_he_sig_b2_mu.h"
#include "phyrx_he_sig_b2_ofdma.h"
#include "phyrx_other_receive_info_evm_details.h"
#include "phyrx_other_receive_info_ru_details.h"
#include "phyrx_user_info.h"
#include "phyrx_vht_sig_b_mu160.h"
#include "phyrx_vht_sig_b_mu20.h"
#include "phyrx_vht_sig_b_mu40.h"
#include "phyrx_vht_sig_b_mu80.h"
#include "rx_attention.h"
#include "rx_frame_bitmap_ack.h"
#include "rx_header.h"
#include "rx_mpdu_end.h"
#include "rx_mpdu_pcu_start.h"
#include "rx_mpdu_start.h"
#include "rx_msdu_end.h"
#include "rx_msdu_start.h"
#include "rx_peer_entry.h"
#include "rx_ppdu_end_user_stats.h"
#include "rx_ppdu_end_user_stats_ext.h"
#include "rx_ppdu_start_user_info.h"
#include "rxpcu_user_setup.h"
#include "rxpcu_user_setup_ext.h"
#include "tqm_acked_mpdu.h"
#include "tqm_update_tx_mpdu_count.h"
#include "tx_11ah_setup.h"
#include "tx_fes_status_ack_or_ba.h"
#include "tx_fes_status_user_ppdu.h"
#include "tx_fes_status_user_response.h"
#include "tx_mpdu_start.h"
#include "tx_msdu_start.h"
#include "tx_peer_entry.h"
#include "tx_queue_extension.h"
#include "tx_raw_or_native_frame_setup.h"
#include "txpcu_user_buffer_status.h"
#include "txpcu_user_setup.h"
#include "who_anchor_value.h"
#include "who_cce_info.h"
#include "who_commit_done.h"
#include "who_l2_llc.h"
#include "who_l3_checksum.h"
#include "who_l3_info.h"
#include "who_l4_checksum.h"
#include "who_l4_info.h"
#include "who_mesh_control.h"
#include "who_msdu_misc.h"
#include "who_packet_hdr.h"
#include "who_tso.h"
#include "who_wmac_header_pv0.h"
#include "who_wmac_header_pv1.h"
#include "who_wmac_iv.h"
#include "tlv_tag_def.h"
#include "mactx_cbf_data.h"
#include "mactx_cbf_done.h"
#include "mactx_cbf_start.h"
#include "mactx_data_resp.h"
#include "phyrx_abort_request.h"
#include "phyrx_cbf_data_resp.h"
#include "phyrx_data.h"
#include "phyrx_user_abort_notification.h"
#include "macrx_abort_request.h"
#include "macrx_cbf_data_request.h"
#include "macrx_cbf_read_request.h"
#include "macrx_chain_mask.h"
#include "macrx_expect_ndp_reception.h"
#include "macrx_freeze_capture_channel.h"
#include "macrx_req_implicit_fb.h"
#include "phytx_abort_request.h"
#include "phytx_bf_cv_loading_done.h"
#include "phytx_nap_ack.h"
#include "phytx_pkt_end.h"
#include "phytx_ppdu_header_info_request.h"
#include "phytx_request_ctrl_info.h"


#endif

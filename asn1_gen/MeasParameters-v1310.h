/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasParameters_v1310_H_
#define	_MeasParameters_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasParameters_v1310__rs_SINR_Meas_r13 {
	MeasParameters_v1310__rs_SINR_Meas_r13_supported	= 0
} e_MeasParameters_v1310__rs_SINR_Meas_r13;
typedef enum MeasParameters_v1310__whiteCellList_r13 {
	MeasParameters_v1310__whiteCellList_r13_supported	= 0
} e_MeasParameters_v1310__whiteCellList_r13;
typedef enum MeasParameters_v1310__extendedMaxObjectId_r13 {
	MeasParameters_v1310__extendedMaxObjectId_r13_supported	= 0
} e_MeasParameters_v1310__extendedMaxObjectId_r13;
typedef enum MeasParameters_v1310__ul_PDCP_Delay_r13 {
	MeasParameters_v1310__ul_PDCP_Delay_r13_supported	= 0
} e_MeasParameters_v1310__ul_PDCP_Delay_r13;
typedef enum MeasParameters_v1310__extendedFreqPriorities_r13 {
	MeasParameters_v1310__extendedFreqPriorities_r13_supported	= 0
} e_MeasParameters_v1310__extendedFreqPriorities_r13;
typedef enum MeasParameters_v1310__multiBandInfoReport_r13 {
	MeasParameters_v1310__multiBandInfoReport_r13_supported	= 0
} e_MeasParameters_v1310__multiBandInfoReport_r13;
typedef enum MeasParameters_v1310__rssi_AndChannelOccupancyReporting_r13 {
	MeasParameters_v1310__rssi_AndChannelOccupancyReporting_r13_supported	= 0
} e_MeasParameters_v1310__rssi_AndChannelOccupancyReporting_r13;

/* MeasParameters-v1310 */
typedef struct MeasParameters_v1310 {
	long	*rs_SINR_Meas_r13	/* OPTIONAL */;
	long	*whiteCellList_r13	/* OPTIONAL */;
	long	*extendedMaxObjectId_r13	/* OPTIONAL */;
	long	*ul_PDCP_Delay_r13	/* OPTIONAL */;
	long	*extendedFreqPriorities_r13	/* OPTIONAL */;
	long	*multiBandInfoReport_r13	/* OPTIONAL */;
	long	*rssi_AndChannelOccupancyReporting_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasParameters_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rs_SINR_Meas_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_whiteCellList_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_extendedMaxObjectId_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_PDCP_Delay_r13_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_extendedFreqPriorities_r13_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_multiBandInfoReport_r13_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rssi_AndChannelOccupancyReporting_r13_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasParameters_v1310;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasParameters_v1310_H_ */
#include <asn_internal.h>

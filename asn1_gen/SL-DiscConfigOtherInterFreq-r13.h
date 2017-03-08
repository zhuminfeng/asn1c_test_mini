/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SL_DiscConfigOtherInterFreq_r13_H_
#define	_SL_DiscConfigOtherInterFreq_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_DiscConfigOtherInterFreq_r13__refCarrierCommon_r13 {
	SL_DiscConfigOtherInterFreq_r13__refCarrierCommon_r13_pCell	= 0
} e_SL_DiscConfigOtherInterFreq_r13__refCarrierCommon_r13;

/* Forward declarations */
struct SL_DiscTxPowerInfoList_r12;
struct SL_SyncConfigListNFreq_r13;
struct CellSelectionInfoNFreq_r13;

/* SL-DiscConfigOtherInterFreq-r13 */
typedef struct SL_DiscConfigOtherInterFreq_r13 {
	struct SL_DiscTxPowerInfoList_r12	*txPowerInfo_r13	/* OPTIONAL */;
	long	*refCarrierCommon_r13	/* OPTIONAL */;
	struct SL_SyncConfigListNFreq_r13	*discSyncConfig_r13	/* OPTIONAL */;
	struct CellSelectionInfoNFreq_r13	*discCellSelectionInfo_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_DiscConfigOtherInterFreq_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_refCarrierCommon_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_DiscConfigOtherInterFreq_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-DiscTxPowerInfoList-r12.h"
#include "SL-SyncConfigListNFreq-r13.h"
#include "CellSelectionInfoNFreq-r13.h"

#endif	/* _SL_DiscConfigOtherInterFreq_r13_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SL_DiscTxConfigScheduled_r13_H_
#define	_SL_DiscTxConfigScheduled_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_DiscResourcePool_r12;
struct SL_TF_IndexPairList_r12b;
struct SL_HoppingConfigDisc_r12;

/* SL-DiscTxConfigScheduled-r13 */
typedef struct SL_DiscTxConfigScheduled_r13 {
	struct SL_DiscResourcePool_r12	*discTxConfig_r13	/* OPTIONAL */;
	struct SL_TF_IndexPairList_r12b	*discTF_IndexList_r13	/* OPTIONAL */;
	struct SL_HoppingConfigDisc_r12	*discHoppingConfig_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_DiscTxConfigScheduled_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_DiscTxConfigScheduled_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-DiscResourcePool-r12.h"
#include "SL-TF-IndexPairList-r12b.h"
#include "SL-HoppingConfigDisc-r12.h"

#endif	/* _SL_DiscTxConfigScheduled_r13_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SL_TF_IndexPairList_r12b_H_
#define	_SL_TF_IndexPairList_r12b_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_TF_IndexPair_r12b;

/* SL-TF-IndexPairList-r12b */
typedef struct SL_TF_IndexPairList_r12b {
	A_SEQUENCE_OF(struct SL_TF_IndexPair_r12b) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_TF_IndexPairList_r12b_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_TF_IndexPairList_r12b;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-TF-IndexPair-r12b.h"

#endif	/* _SL_TF_IndexPairList_r12b_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_TargetMBSFN_AreaList_r12_H_
#define	_TargetMBSFN_AreaList_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TargetMBSFN_Area_r12;

/* TargetMBSFN-AreaList-r12 */
typedef struct TargetMBSFN_AreaList_r12 {
	A_SEQUENCE_OF(struct TargetMBSFN_Area_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TargetMBSFN_AreaList_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TargetMBSFN_AreaList_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TargetMBSFN-Area-r12.h"

#endif	/* _TargetMBSFN_AreaList_r12_H_ */
#include <asn_internal.h>

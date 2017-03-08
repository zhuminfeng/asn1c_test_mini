/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasObjectToRemoveListExt_r13_H_
#define	_MeasObjectToRemoveListExt_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasObjectId-v1310.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasObjectToRemoveListExt-r13 */
typedef struct MeasObjectToRemoveListExt_r13 {
	A_SEQUENCE_OF(MeasObjectId_v1310_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectToRemoveListExt_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectToRemoveListExt_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasObjectToRemoveListExt_r13_H_ */
#include <asn_internal.h>

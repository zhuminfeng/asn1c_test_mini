/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asn1_defs/NBIOT-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_DRB_ToReleaseList_NB_r13_H_
#define	_DRB_ToReleaseList_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DRB-Identity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DRB-ToReleaseList-NB-r13 */
typedef struct DRB_ToReleaseList_NB_r13 {
	A_SEQUENCE_OF(DRB_Identity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_ToReleaseList_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRB_ToReleaseList_NB_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _DRB_ToReleaseList_NB_r13_H_ */
#include <asn_internal.h>

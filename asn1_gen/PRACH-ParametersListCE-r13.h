/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PRACH_ParametersListCE_r13_H_
#define	_PRACH_ParametersListCE_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PRACH_ParametersCE_r13;

/* PRACH-ParametersListCE-r13 */
typedef struct PRACH_ParametersListCE_r13 {
	A_SEQUENCE_OF(struct PRACH_ParametersCE_r13) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_ParametersListCE_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_ParametersListCE_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PRACH-ParametersCE-r13.h"

#endif	/* _PRACH_ParametersListCE_r13_H_ */
#include <asn_internal.h>

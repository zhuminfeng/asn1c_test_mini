/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SupportedBandCombinationAdd_v1250_H_
#define	_SupportedBandCombinationAdd_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandCombinationParameters_v1250;

/* SupportedBandCombinationAdd-v1250 */
typedef struct SupportedBandCombinationAdd_v1250 {
	A_SEQUENCE_OF(struct BandCombinationParameters_v1250) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandCombinationAdd_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandCombinationAdd_v1250;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandCombinationParameters-v1250.h"

#endif	/* _SupportedBandCombinationAdd_v1250_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_BandCombinationParametersExt_r10_H_
#define	_BandCombinationParametersExt_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SupportedBandwidthCombinationSet-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BandCombinationParametersExt-r10 */
typedef struct BandCombinationParametersExt_r10 {
	SupportedBandwidthCombinationSet_r10_t	*supportedBandwidthCombinationSet_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationParametersExt_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationParametersExt_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _BandCombinationParametersExt_r10_H_ */
#include <asn_internal.h>

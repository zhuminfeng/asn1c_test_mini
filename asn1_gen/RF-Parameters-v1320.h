/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RF_Parameters_v1320_H_
#define	_RF_Parameters_v1320_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SupportedBandListEUTRA_v1320;
struct SupportedBandCombination_v1320;
struct SupportedBandCombinationAdd_v1320;
struct SupportedBandCombinationReduced_v1320;

/* RF-Parameters-v1320 */
typedef struct RF_Parameters_v1320 {
	struct SupportedBandListEUTRA_v1320	*supportedBandListEUTRA_v1320	/* OPTIONAL */;
	struct SupportedBandCombination_v1320	*supportedBandCombination_v1320	/* OPTIONAL */;
	struct SupportedBandCombinationAdd_v1320	*supportedBandCombinationAdd_v1320	/* OPTIONAL */;
	struct SupportedBandCombinationReduced_v1320	*supportedBandCombinationReduced_v1320	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v1320_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1320;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedBandListEUTRA-v1320.h"
#include "SupportedBandCombination-v1320.h"
#include "SupportedBandCombinationAdd-v1320.h"
#include "SupportedBandCombinationReduced-v1320.h"

#endif	/* _RF_Parameters_v1320_H_ */
#include <asn_internal.h>

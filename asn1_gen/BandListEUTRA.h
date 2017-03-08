/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_BandListEUTRA_H_
#define	_BandListEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandInfoEUTRA;

/* BandListEUTRA */
typedef struct BandListEUTRA {
	A_SEQUENCE_OF(struct BandInfoEUTRA) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandListEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandListEUTRA;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandInfoEUTRA.h"

#endif	/* _BandListEUTRA_H_ */
#include <asn_internal.h>

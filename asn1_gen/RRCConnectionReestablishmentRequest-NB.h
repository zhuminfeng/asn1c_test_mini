/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asn1_defs/NBIOT-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionReestablishmentRequest_NB_H_
#define	_RRCConnectionReestablishmentRequest_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCConnectionReestablishmentRequest-NB-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReestablishmentRequest_NB__criticalExtensions_PR {
	RRCConnectionReestablishmentRequest_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionReestablishmentRequest_NB__criticalExtensions_PR_rrcConnectionReestablishmentRequest_r13,
	RRCConnectionReestablishmentRequest_NB__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionReestablishmentRequest_NB__criticalExtensions_PR;

/* RRCConnectionReestablishmentRequest-NB */
typedef struct RRCConnectionReestablishmentRequest_NB {
	struct RRCConnectionReestablishmentRequest_NB__criticalExtensions {
		RRCConnectionReestablishmentRequest_NB__criticalExtensions_PR present;
		union RRCConnectionReestablishmentRequest_NB__criticalExtensions_u {
			RRCConnectionReestablishmentRequest_NB_r13_IEs_t	 rrcConnectionReestablishmentRequest_r13;
			struct RRCConnectionReestablishmentRequest_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishmentRequest_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentRequest_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReestablishmentRequest_NB_H_ */
#include <asn_internal.h>
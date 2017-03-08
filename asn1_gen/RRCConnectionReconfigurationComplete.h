/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionReconfigurationComplete_H_
#define	_RRCConnectionReconfigurationComplete_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "RRCConnectionReconfigurationComplete-r8-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReconfigurationComplete__criticalExtensions_PR {
	RRCConnectionReconfigurationComplete__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionReconfigurationComplete__criticalExtensions_PR_rrcConnectionReconfigurationComplete_r8,
	RRCConnectionReconfigurationComplete__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionReconfigurationComplete__criticalExtensions_PR;

/* RRCConnectionReconfigurationComplete */
typedef struct RRCConnectionReconfigurationComplete {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionReconfigurationComplete__criticalExtensions {
		RRCConnectionReconfigurationComplete__criticalExtensions_PR present;
		union RRCConnectionReconfigurationComplete__criticalExtensions_u {
			RRCConnectionReconfigurationComplete_r8_IEs_t	 rrcConnectionReconfigurationComplete_r8;
			struct RRCConnectionReconfigurationComplete__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfigurationComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfigurationComplete;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfigurationComplete_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionReconfigurationComplete_v1250_IEs_H_
#define	_RRCConnectionReconfigurationComplete_v1250_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReconfigurationComplete_v1250_IEs__logMeasAvailableMBSFN_r12 {
	RRCConnectionReconfigurationComplete_v1250_IEs__logMeasAvailableMBSFN_r12_true	= 0
} e_RRCConnectionReconfigurationComplete_v1250_IEs__logMeasAvailableMBSFN_r12;

/* RRCConnectionReconfigurationComplete-v1250-IEs */
typedef struct RRCConnectionReconfigurationComplete_v1250_IEs {
	long	*logMeasAvailableMBSFN_r12	/* OPTIONAL */;
	struct RRCConnectionReconfigurationComplete_v1250_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfigurationComplete_v1250_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_logMeasAvailableMBSFN_r12_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfigurationComplete_v1250_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfigurationComplete_v1250_IEs_H_ */
#include <asn_internal.h>

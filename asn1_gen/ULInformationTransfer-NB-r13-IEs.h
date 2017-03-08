/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asn1_defs/NBIOT-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_ULInformationTransfer_NB_r13_IEs_H_
#define	_ULInformationTransfer_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DedicatedInfoNAS.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ULInformationTransfer-NB-r13-IEs */
typedef struct ULInformationTransfer_NB_r13_IEs {
	DedicatedInfoNAS_t	 dedicatedInfoNAS_r13;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct ULInformationTransfer_NB_r13_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULInformationTransfer_NB_r13_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULInformationTransfer_NB_r13_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _ULInformationTransfer_NB_r13_IEs_H_ */
#include <asn_internal.h>

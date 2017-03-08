/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_UE_EUTRA_Capability_v11a0_IEs_H_
#define	_UE_EUTRA_Capability_v11a0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasParameters_v11a0;
struct UE_EUTRA_Capability_v1250_IEs;

/* UE-EUTRA-Capability-v11a0-IEs */
typedef struct UE_EUTRA_Capability_v11a0_IEs {
	long	*ue_Category_v11a0	/* OPTIONAL */;
	struct MeasParameters_v11a0	*measParameters_v11a0	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v1250_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v11a0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v11a0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasParameters-v11a0.h"
#include "UE-EUTRA-Capability-v1250-IEs.h"

#endif	/* _UE_EUTRA_Capability_v11a0_IEs_H_ */
#include <asn_internal.h>

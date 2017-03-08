/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SCGFailureInformation_r12_IEs_H_
#define	_SCGFailureInformation_r12_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FailureReportSCG_r12;
struct SCGFailureInformation_v1310_IEs;

/* SCGFailureInformation-r12-IEs */
typedef struct SCGFailureInformation_r12_IEs {
	struct FailureReportSCG_r12	*failureReportSCG_r12	/* OPTIONAL */;
	struct SCGFailureInformation_v1310_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCGFailureInformation_r12_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCGFailureInformation_r12_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FailureReportSCG-r12.h"
#include "SCGFailureInformation-v1310-IEs.h"

#endif	/* _SCGFailureInformation_r12_IEs_H_ */
#include <asn_internal.h>

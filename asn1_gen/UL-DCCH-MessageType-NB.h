/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asn1_defs/NBIOT-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_UL_DCCH_MessageType_NB_H_
#define	_UL_DCCH_MessageType_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCConnectionReconfigurationComplete-NB.h"
#include "RRCConnectionReestablishmentComplete-NB.h"
#include "RRCConnectionSetupComplete-NB.h"
#include "SecurityModeComplete.h"
#include "SecurityModeFailure.h"
#include "UECapabilityInformation-NB.h"
#include "ULInformationTransfer-NB.h"
#include "RRCConnectionResumeComplete-NB.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_DCCH_MessageType_NB_PR {
	UL_DCCH_MessageType_NB_PR_NOTHING,	/* No components present */
	UL_DCCH_MessageType_NB_PR_c1,
	UL_DCCH_MessageType_NB_PR_messageClassExtension
} UL_DCCH_MessageType_NB_PR;
typedef enum UL_DCCH_MessageType_NB__c1_PR {
	UL_DCCH_MessageType_NB__c1_PR_NOTHING,	/* No components present */
	UL_DCCH_MessageType_NB__c1_PR_rrcConnectionReconfigurationComplete_r13,
	UL_DCCH_MessageType_NB__c1_PR_rrcConnectionReestablishmentComplete_r13,
	UL_DCCH_MessageType_NB__c1_PR_rrcConnectionSetupComplete_r13,
	UL_DCCH_MessageType_NB__c1_PR_securityModeComplete_r13,
	UL_DCCH_MessageType_NB__c1_PR_securityModeFailure_r13,
	UL_DCCH_MessageType_NB__c1_PR_ueCapabilityInformation_r13,
	UL_DCCH_MessageType_NB__c1_PR_ulInformationTransfer_r13,
	UL_DCCH_MessageType_NB__c1_PR_rrcConnectionResumeComplete_r13,
	UL_DCCH_MessageType_NB__c1_PR_spare8,
	UL_DCCH_MessageType_NB__c1_PR_spare7,
	UL_DCCH_MessageType_NB__c1_PR_spare6,
	UL_DCCH_MessageType_NB__c1_PR_spare5,
	UL_DCCH_MessageType_NB__c1_PR_spare4,
	UL_DCCH_MessageType_NB__c1_PR_spare3,
	UL_DCCH_MessageType_NB__c1_PR_spare2,
	UL_DCCH_MessageType_NB__c1_PR_spare1
} UL_DCCH_MessageType_NB__c1_PR;

/* UL-DCCH-MessageType-NB */
typedef struct UL_DCCH_MessageType_NB {
	UL_DCCH_MessageType_NB_PR present;
	union UL_DCCH_MessageType_NB_u {
		struct UL_DCCH_MessageType_NB__c1 {
			UL_DCCH_MessageType_NB__c1_PR present;
			union UL_DCCH_MessageType_NB__c1_u {
				RRCConnectionReconfigurationComplete_NB_t	 rrcConnectionReconfigurationComplete_r13;
				RRCConnectionReestablishmentComplete_NB_t	 rrcConnectionReestablishmentComplete_r13;
				RRCConnectionSetupComplete_NB_t	 rrcConnectionSetupComplete_r13;
				SecurityModeComplete_t	 securityModeComplete_r13;
				SecurityModeFailure_t	 securityModeFailure_r13;
				UECapabilityInformation_NB_t	 ueCapabilityInformation_r13;
				ULInformationTransfer_NB_t	 ulInformationTransfer_r13;
				RRCConnectionResumeComplete_NB_t	 rrcConnectionResumeComplete_r13;
				NULL_t	 spare8;
				NULL_t	 spare7;
				NULL_t	 spare6;
				NULL_t	 spare5;
				NULL_t	 spare4;
				NULL_t	 spare3;
				NULL_t	 spare2;
				NULL_t	 spare1;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct UL_DCCH_MessageType_NB__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_DCCH_MessageType_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_DCCH_MessageType_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_DCCH_MessageType_NB_H_ */
#include <asn_internal.h>

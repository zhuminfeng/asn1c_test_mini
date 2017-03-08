/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SystemInformationBlockType1_v1250_IEs_H_
#define	_SystemInformationBlockType1_v1250_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType1_v1250_IEs__cellAccessRelatedInfo_v1250__category0Allowed_r12 {
	SystemInformationBlockType1_v1250_IEs__cellAccessRelatedInfo_v1250__category0Allowed_r12_true	= 0
} e_SystemInformationBlockType1_v1250_IEs__cellAccessRelatedInfo_v1250__category0Allowed_r12;
typedef enum SystemInformationBlockType1_v1250_IEs__freqBandIndicatorPriority_r12 {
	SystemInformationBlockType1_v1250_IEs__freqBandIndicatorPriority_r12_true	= 0
} e_SystemInformationBlockType1_v1250_IEs__freqBandIndicatorPriority_r12;

/* Forward declarations */
struct CellSelectionInfo_v1250;
struct SystemInformationBlockType1_v1310_IEs;

/* SystemInformationBlockType1-v1250-IEs */
typedef struct SystemInformationBlockType1_v1250_IEs {
	struct SystemInformationBlockType1_v1250_IEs__cellAccessRelatedInfo_v1250 {
		long	*category0Allowed_r12	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellAccessRelatedInfo_v1250;
	struct CellSelectionInfo_v1250	*cellSelectionInfo_v1250	/* OPTIONAL */;
	long	*freqBandIndicatorPriority_r12	/* OPTIONAL */;
	struct SystemInformationBlockType1_v1310_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_v1250_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_category0Allowed_r12_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_freqBandIndicatorPriority_r12_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v1250_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellSelectionInfo-v1250.h"
#include "SystemInformationBlockType1-v1310-IEs.h"

#endif	/* _SystemInformationBlockType1_v1250_IEs_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SystemInformationBlockType15_r11_H_
#define	_SystemInformationBlockType15_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBMS_SAI_List_r11;
struct MBMS_SAI_InterFreqList_r11;
struct MBMS_SAI_InterFreqList_v1140;

/* SystemInformationBlockType15-r11 */
typedef struct SystemInformationBlockType15_r11 {
	struct MBMS_SAI_List_r11	*mbms_SAI_IntraFreq_r11	/* OPTIONAL */;
	struct MBMS_SAI_InterFreqList_r11	*mbms_SAI_InterFreqList_r11	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MBMS_SAI_InterFreqList_v1140	*mbms_SAI_InterFreqList_v1140	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType15_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType15_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBMS-SAI-List-r11.h"
#include "MBMS-SAI-InterFreqList-r11.h"
#include "MBMS-SAI-InterFreqList-v1140.h"

#endif	/* _SystemInformationBlockType15_r11_H_ */
#include <asn_internal.h>

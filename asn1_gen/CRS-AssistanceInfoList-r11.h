/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CRS_AssistanceInfoList_r11_H_
#define	_CRS_AssistanceInfoList_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CRS_AssistanceInfo_r11;

/* CRS-AssistanceInfoList-r11 */
typedef struct CRS_AssistanceInfoList_r11 {
	A_SEQUENCE_OF(struct CRS_AssistanceInfo_r11) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CRS_AssistanceInfoList_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CRS_AssistanceInfoList_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CRS-AssistanceInfo-r11.h"

#endif	/* _CRS_AssistanceInfoList_r11_H_ */
#include <asn_internal.h>

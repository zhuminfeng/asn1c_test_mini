/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_EAB_ConfigPLMN_r11_H_
#define	_EAB_ConfigPLMN_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EAB_Config_r11;

/* EAB-ConfigPLMN-r11 */
typedef struct EAB_ConfigPLMN_r11 {
	struct EAB_Config_r11	*eab_Config_r11	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EAB_ConfigPLMN_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EAB_ConfigPLMN_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EAB-Config-r11.h"

#endif	/* _EAB_ConfigPLMN_r11_H_ */
#include <asn_internal.h>

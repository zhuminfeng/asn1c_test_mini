/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asn1_defs/NBIOT-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_BCCH_BCH_Message_NB_H_
#define	_BCCH_BCH_Message_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BCCH-BCH-MessageType-NB.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BCCH-BCH-Message-NB */
typedef struct BCCH_BCH_Message_NB {
	BCCH_BCH_MessageType_NB_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BCCH_BCH_Message_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BCCH_BCH_Message_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _BCCH_BCH_Message_NB_H_ */
#include <asn_internal.h>

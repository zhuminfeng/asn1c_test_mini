/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_AltTTT_CellsToAddModList_r12_H_
#define	_AltTTT_CellsToAddModList_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AltTTT_CellsToAddMod_r12;

/* AltTTT-CellsToAddModList-r12 */
typedef struct AltTTT_CellsToAddModList_r12 {
	A_SEQUENCE_OF(struct AltTTT_CellsToAddMod_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AltTTT_CellsToAddModList_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AltTTT_CellsToAddModList_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AltTTT-CellsToAddMod-r12.h"

#endif	/* _AltTTT_CellsToAddModList_r12_H_ */
#include <asn_internal.h>

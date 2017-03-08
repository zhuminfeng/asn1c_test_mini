/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_InterFreqNeighCellList_H_
#define	_InterFreqNeighCellList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqNeighCellInfo;

/* InterFreqNeighCellList */
typedef struct InterFreqNeighCellList {
	A_SEQUENCE_OF(struct InterFreqNeighCellInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqNeighCellList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqNeighCellList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqNeighCellInfo.h"

#endif	/* _InterFreqNeighCellList_H_ */
#include <asn_internal.h>

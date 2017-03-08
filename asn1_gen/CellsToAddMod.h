/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CellsToAddMod_H_
#define	_CellsToAddMod_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "PhysCellId.h"
#include "Q-OffsetRange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellsToAddMod */
typedef struct CellsToAddMod {
	long	 cellIndex;
	PhysCellId_t	 physCellId;
	Q_OffsetRange_t	 cellIndividualOffset;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellsToAddMod_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellsToAddMod;

#ifdef __cplusplus
}
#endif

#endif	/* _CellsToAddMod_H_ */
#include <asn_internal.h>

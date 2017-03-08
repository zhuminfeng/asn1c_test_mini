/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasObjectCDMA2000_H_
#define	_MeasObjectCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CDMA2000-Type.h"
#include "CarrierFreqCDMA2000.h"
#include <NativeInteger.h>
#include "Q-OffsetRangeInterRAT.h"
#include "PhysCellIdCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellIndexList;
struct CellsToAddModListCDMA2000;

/* MeasObjectCDMA2000 */
typedef struct MeasObjectCDMA2000 {
	CDMA2000_Type_t	 cdma2000_Type;
	CarrierFreqCDMA2000_t	 carrierFreq;
	long	*searchWindowSize	/* OPTIONAL */;
	Q_OffsetRangeInterRAT_t	 offsetFreq	/* DEFAULT 0 */;
	struct CellIndexList	*cellsToRemoveList	/* OPTIONAL */;
	struct CellsToAddModListCDMA2000	*cellsToAddModList	/* OPTIONAL */;
	PhysCellIdCDMA2000_t	*cellForWhichToReportCGI	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectCDMA2000;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellIndexList.h"
#include "CellsToAddModListCDMA2000.h"

#endif	/* _MeasObjectCDMA2000_H_ */
#include <asn_internal.h>

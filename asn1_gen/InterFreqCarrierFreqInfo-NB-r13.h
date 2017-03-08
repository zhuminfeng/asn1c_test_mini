/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asn1_defs/NBIOT-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_InterFreqCarrierFreqInfo_NB_r13_H_
#define	_InterFreqCarrierFreqInfo_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CarrierFreq-NB-r13.h"
#include "Q-RxLevMin.h"
#include "Q-QualMin-r9.h"
#include "P-Max.h"
#include "Q-OffsetRange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqNeighCellList_NB_r13;
struct InterFreqBlackCellList_NB_r13;
struct MultiBandInfoList_NB_r13;

/* InterFreqCarrierFreqInfo-NB-r13 */
typedef struct InterFreqCarrierFreqInfo_NB_r13 {
	CarrierFreq_NB_r13_t	 dl_CarrierFreq_r13;
	Q_RxLevMin_t	 q_RxLevMin_r13;
	Q_QualMin_r9_t	*q_QualMin_r13	/* OPTIONAL */;
	P_Max_t	*p_Max_r13	/* OPTIONAL */;
	Q_OffsetRange_t	*q_OffsetFreq_r13	/* DEFAULT 15 */;
	struct InterFreqNeighCellList_NB_r13	*interFreqNeighCellList_r13	/* OPTIONAL */;
	struct InterFreqBlackCellList_NB_r13	*interFreqBlackCellList_r13	/* OPTIONAL */;
	struct MultiBandInfoList_NB_r13	*multiBandInfoList_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_NB_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqNeighCellList-NB-r13.h"
#include "InterFreqBlackCellList-NB-r13.h"
#include "MultiBandInfoList-NB-r13.h"

#endif	/* _InterFreqCarrierFreqInfo_NB_r13_H_ */
#include <asn_internal.h>

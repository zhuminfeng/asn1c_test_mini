/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asn1_defs/NBIOT-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SystemInformationBlockType3_NB_r13_H_
#define	_SystemInformationBlockType3_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include "ReselectionThreshold.h"
#include "Q-RxLevMin.h"
#include "Q-QualMin-r9.h"
#include "P-Max.h"
#include "T-Reselection-NB-r13.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13 {
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB0	= 0,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB1	= 1,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB2	= 2,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB3	= 3,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB4	= 4,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB5	= 5,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB6	= 6,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB8	= 7,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB10	= 8,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB12	= 9,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB14	= 10,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB16	= 11,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB18	= 12,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB20	= 13,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB22	= 14,
	SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13_dB24	= 15
} e_SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13__q_Hyst_r13;

/* Forward declarations */
struct NS_PmaxList_NB_r13;

/* SystemInformationBlockType3-NB-r13 */
typedef struct SystemInformationBlockType3_NB_r13 {
	struct SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13 {
		long	 q_Hyst_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellReselectionInfoCommon_r13;
	struct SystemInformationBlockType3_NB_r13__cellReselectionServingFreqInfo_r13 {
		ReselectionThreshold_t	 s_NonIntraSearch_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellReselectionServingFreqInfo_r13;
	struct SystemInformationBlockType3_NB_r13__intraFreqCellReselectionInfo_r13 {
		Q_RxLevMin_t	 q_RxLevMin_r13;
		Q_QualMin_r9_t	*q_QualMin_r13	/* OPTIONAL */;
		P_Max_t	*p_Max_r13	/* OPTIONAL */;
		ReselectionThreshold_t	 s_IntraSearchP_r13;
		T_Reselection_NB_r13_t	 t_Reselection_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} intraFreqCellReselectionInfo_r13;
	struct NS_PmaxList_NB_r13	*freqBandInfo_r13	/* OPTIONAL */;
	struct SystemInformationBlockType3_NB_r13__multiBandInfoList_r13 {
		A_SEQUENCE_OF(struct NS_PmaxList_NB_r13) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *multiBandInfoList_r13;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType3_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_q_Hyst_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType3_NB_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NS-PmaxList-NB-r13.h"

#endif	/* _SystemInformationBlockType3_NB_r13_H_ */
#include <asn_internal.h>

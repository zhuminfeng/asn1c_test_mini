/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CSI_Process_r11_H_
#define	_CSI_Process_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSI-ProcessId-r11.h"
#include "CSI-RS-ConfigNZPId-r11.h"
#include "CSI-IM-ConfigId-r11.h"
#include "P-C-AndCBSR-Pair-r13a.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <NULL.h>
#include "CSI-IM-ConfigId-r12.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include "CQI-ReportAperiodicProc-r11.h"
#include "CQI-ReportAperiodicProc-v1310.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_Process_r11__alternativeCodebookEnabledFor4TXProc_r12 {
	CSI_Process_r11__alternativeCodebookEnabledFor4TXProc_r12_true	= 0
} e_CSI_Process_r11__alternativeCodebookEnabledFor4TXProc_r12;
typedef enum CSI_Process_r11__csi_IM_ConfigIdList_r12_PR {
	CSI_Process_r11__csi_IM_ConfigIdList_r12_PR_NOTHING,	/* No components present */
	CSI_Process_r11__csi_IM_ConfigIdList_r12_PR_release,
	CSI_Process_r11__csi_IM_ConfigIdList_r12_PR_setup
} CSI_Process_r11__csi_IM_ConfigIdList_r12_PR;
typedef enum CSI_Process_r11__cqi_ReportAperiodicProc2_r12_PR {
	CSI_Process_r11__cqi_ReportAperiodicProc2_r12_PR_NOTHING,	/* No components present */
	CSI_Process_r11__cqi_ReportAperiodicProc2_r12_PR_release,
	CSI_Process_r11__cqi_ReportAperiodicProc2_r12_PR_setup
} CSI_Process_r11__cqi_ReportAperiodicProc2_r12_PR;
typedef enum CSI_Process_r11__cqi_ReportAperiodicProc_v1310_PR {
	CSI_Process_r11__cqi_ReportAperiodicProc_v1310_PR_NOTHING,	/* No components present */
	CSI_Process_r11__cqi_ReportAperiodicProc_v1310_PR_release,
	CSI_Process_r11__cqi_ReportAperiodicProc_v1310_PR_setup
} CSI_Process_r11__cqi_ReportAperiodicProc_v1310_PR;
typedef enum CSI_Process_r11__cqi_ReportAperiodicProc2_v1310_PR {
	CSI_Process_r11__cqi_ReportAperiodicProc2_v1310_PR_NOTHING,	/* No components present */
	CSI_Process_r11__cqi_ReportAperiodicProc2_v1310_PR_release,
	CSI_Process_r11__cqi_ReportAperiodicProc2_v1310_PR_setup
} CSI_Process_r11__cqi_ReportAperiodicProc2_v1310_PR;

/* Forward declarations */
struct CQI_ReportBothProc_r11;
struct CQI_ReportAperiodicProc_r11;
struct CSI_RS_ConfigEMIMO_r13;

/* CSI-Process-r11 */
typedef struct CSI_Process_r11 {
	CSI_ProcessId_r11_t	 csi_ProcessId_r11;
	CSI_RS_ConfigNZPId_r11_t	 csi_RS_ConfigNZPId_r11;
	CSI_IM_ConfigId_r11_t	 csi_IM_ConfigId_r11;
	P_C_AndCBSR_Pair_r13a_t	 p_C_AndCBSRList_r11;
	struct CQI_ReportBothProc_r11	*cqi_ReportBothProc_r11	/* OPTIONAL */;
	long	*cqi_ReportPeriodicProcId_r11	/* OPTIONAL */;
	struct CQI_ReportAperiodicProc_r11	*cqi_ReportAperiodicProc_r11	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*alternativeCodebookEnabledFor4TXProc_r12	/* OPTIONAL */;
	struct CSI_Process_r11__csi_IM_ConfigIdList_r12 {
		CSI_Process_r11__csi_IM_ConfigIdList_r12_PR present;
		union CSI_Process_r11__csi_IM_ConfigIdList_r12_u {
			NULL_t	 release;
			struct CSI_Process_r11__csi_IM_ConfigIdList_r12__setup {
				A_SEQUENCE_OF(CSI_IM_ConfigId_r12_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_IM_ConfigIdList_r12;
	struct CSI_Process_r11__cqi_ReportAperiodicProc2_r12 {
		CSI_Process_r11__cqi_ReportAperiodicProc2_r12_PR present;
		union CSI_Process_r11__cqi_ReportAperiodicProc2_r12_u {
			NULL_t	 release;
			CQI_ReportAperiodicProc_r11_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cqi_ReportAperiodicProc2_r12;
	struct CSI_Process_r11__cqi_ReportAperiodicProc_v1310 {
		CSI_Process_r11__cqi_ReportAperiodicProc_v1310_PR present;
		union CSI_Process_r11__cqi_ReportAperiodicProc_v1310_u {
			NULL_t	 release;
			CQI_ReportAperiodicProc_v1310_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cqi_ReportAperiodicProc_v1310;
	struct CSI_Process_r11__cqi_ReportAperiodicProc2_v1310 {
		CSI_Process_r11__cqi_ReportAperiodicProc2_v1310_PR present;
		union CSI_Process_r11__cqi_ReportAperiodicProc2_v1310_u {
			NULL_t	 release;
			CQI_ReportAperiodicProc_v1310_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cqi_ReportAperiodicProc2_v1310;
	struct CSI_RS_ConfigEMIMO_r13	*eMIMO_Type_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_Process_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_alternativeCodebookEnabledFor4TXProc_r12_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CSI_Process_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CQI-ReportBothProc-r11.h"
#include "CQI-ReportAperiodicProc-r11.h"
#include "CSI-RS-ConfigEMIMO-r13.h"

#endif	/* _CSI_Process_r11_H_ */
#include <asn_internal.h>

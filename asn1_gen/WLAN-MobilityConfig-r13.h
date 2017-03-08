/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_WLAN_MobilityConfig_r13_H_
#define	_WLAN_MobilityConfig_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WLAN_MobilityConfig_r13__associationTimer_r13 {
	WLAN_MobilityConfig_r13__associationTimer_r13_s10	= 0,
	WLAN_MobilityConfig_r13__associationTimer_r13_s30	= 1,
	WLAN_MobilityConfig_r13__associationTimer_r13_s60	= 2,
	WLAN_MobilityConfig_r13__associationTimer_r13_s120	= 3,
	WLAN_MobilityConfig_r13__associationTimer_r13_s240	= 4
} e_WLAN_MobilityConfig_r13__associationTimer_r13;
typedef enum WLAN_MobilityConfig_r13__successReportRequested_r13 {
	WLAN_MobilityConfig_r13__successReportRequested_r13_true	= 0
} e_WLAN_MobilityConfig_r13__successReportRequested_r13;

/* Forward declarations */
struct WLAN_Id_List_r13;

/* WLAN-MobilityConfig-r13 */
typedef struct WLAN_MobilityConfig_r13 {
	struct WLAN_Id_List_r13	*wlan_ToReleaseList_r13	/* OPTIONAL */;
	struct WLAN_Id_List_r13	*wlan_ToAddList_r13	/* OPTIONAL */;
	long	*associationTimer_r13	/* OPTIONAL */;
	long	*successReportRequested_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WLAN_MobilityConfig_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_associationTimer_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_successReportRequested_r13_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_WLAN_MobilityConfig_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "WLAN-Id-List-r13.h"

#endif	/* _WLAN_MobilityConfig_r13_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PDSCH_RE_MappingQCL_Config_r11_H_
#define	_PDSCH_RE_MappingQCL_Config_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDSCH-RE-MappingQCL-ConfigId-r11.h"
#include "CSI-RS-ConfigZPId-r11.h"
#include "CSI-RS-ConfigNZPId-r11.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <NULL.h>
#include "MBSFN-SubframeConfigList.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__crs_PortsCount_r11 {
	PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__crs_PortsCount_r11_n1	= 0,
	PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__crs_PortsCount_r11_n2	= 1,
	PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__crs_PortsCount_r11_n4	= 2,
	PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__crs_PortsCount_r11_spare1	= 3
} e_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__crs_PortsCount_r11;
typedef enum PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11_PR {
	PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11_PR_NOTHING,	/* No components present */
	PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11_PR_release,
	PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11_PR_setup
} PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11_PR;
typedef enum PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11 {
	PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11_reserved	= 0,
	PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11_n1	= 1,
	PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11_n2	= 2,
	PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11_n3	= 3,
	PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11_n4	= 4,
	PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11_assigned	= 5
} e_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11;

/* PDSCH-RE-MappingQCL-Config-r11 */
typedef struct PDSCH_RE_MappingQCL_Config_r11 {
	PDSCH_RE_MappingQCL_ConfigId_r11_t	 pdsch_RE_MappingQCL_ConfigId_r11;
	struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11 {
		long	 crs_PortsCount_r11;
		long	 crs_FreqShift_r11;
		struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11 {
			PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11_PR present;
			union PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11_u {
				NULL_t	 release;
				struct PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11__setup {
					MBSFN_SubframeConfigList_t	 subframeConfigList;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *mbsfn_SubframeConfigList_r11;
		long	 pdsch_Start_r11;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *optionalSetOfFields_r11;
	CSI_RS_ConfigZPId_r11_t	 csi_RS_ConfigZPId_r11;
	CSI_RS_ConfigNZPId_r11_t	*qcl_CSI_RS_ConfigNZPId_r11	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_RE_MappingQCL_Config_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_PortsCount_r11_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdsch_Start_r11_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_RE_MappingQCL_Config_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _PDSCH_RE_MappingQCL_Config_r11_H_ */
#include <asn_internal.h>

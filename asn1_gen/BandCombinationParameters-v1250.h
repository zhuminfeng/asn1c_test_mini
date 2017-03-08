/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_BandCombinationParameters_v1250_H_
#define	_BandCombinationParameters_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandCombinationParameters_v1250__dc_Support_r12__asynchronous_r12 {
	BandCombinationParameters_v1250__dc_Support_r12__asynchronous_r12_supported	= 0
} e_BandCombinationParameters_v1250__dc_Support_r12__asynchronous_r12;
typedef enum BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_PR {
	BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_PR_NOTHING,	/* No components present */
	BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_PR_threeEntries_r12,
	BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_PR_fourEntries_r12,
	BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_PR_fiveEntries_r12
} BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_PR;

/* BandCombinationParameters-v1250 */
typedef struct BandCombinationParameters_v1250 {
	struct BandCombinationParameters_v1250__dc_Support_r12 {
		long	*asynchronous_r12	/* OPTIONAL */;
		struct BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12 {
			BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_PR present;
			union BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_u {
				BIT_STRING_t	 threeEntries_r12;
				BIT_STRING_t	 fourEntries_r12;
				BIT_STRING_t	 fiveEntries_r12;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *supportedCellGrouping_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dc_Support_r12;
	BIT_STRING_t	*supportedNAICS_2CRS_AP_r12	/* OPTIONAL */;
	BIT_STRING_t	*commSupportedBandsPerBC_r12	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationParameters_v1250_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_asynchronous_r12_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_v1250;

#ifdef __cplusplus
}
#endif

#endif	/* _BandCombinationParameters_v1250_H_ */
#include <asn_internal.h>

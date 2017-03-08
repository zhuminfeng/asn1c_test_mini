/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CSG_ProximityIndicationParameters_r9_H_
#define	_CSG_ProximityIndicationParameters_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSG_ProximityIndicationParameters_r9__intraFreqProximityIndication_r9 {
	CSG_ProximityIndicationParameters_r9__intraFreqProximityIndication_r9_supported	= 0
} e_CSG_ProximityIndicationParameters_r9__intraFreqProximityIndication_r9;
typedef enum CSG_ProximityIndicationParameters_r9__interFreqProximityIndication_r9 {
	CSG_ProximityIndicationParameters_r9__interFreqProximityIndication_r9_supported	= 0
} e_CSG_ProximityIndicationParameters_r9__interFreqProximityIndication_r9;
typedef enum CSG_ProximityIndicationParameters_r9__utran_ProximityIndication_r9 {
	CSG_ProximityIndicationParameters_r9__utran_ProximityIndication_r9_supported	= 0
} e_CSG_ProximityIndicationParameters_r9__utran_ProximityIndication_r9;

/* CSG-ProximityIndicationParameters-r9 */
typedef struct CSG_ProximityIndicationParameters_r9 {
	long	*intraFreqProximityIndication_r9	/* OPTIONAL */;
	long	*interFreqProximityIndication_r9	/* OPTIONAL */;
	long	*utran_ProximityIndication_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSG_ProximityIndicationParameters_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_intraFreqProximityIndication_r9_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interFreqProximityIndication_r9_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_utran_ProximityIndication_r9_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CSG_ProximityIndicationParameters_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _CSG_ProximityIndicationParameters_r9_H_ */
#include <asn_internal.h>

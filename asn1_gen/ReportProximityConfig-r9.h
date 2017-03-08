/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_ReportProximityConfig_r9_H_
#define	_ReportProximityConfig_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportProximityConfig_r9__proximityIndicationEUTRA_r9 {
	ReportProximityConfig_r9__proximityIndicationEUTRA_r9_enabled	= 0
} e_ReportProximityConfig_r9__proximityIndicationEUTRA_r9;
typedef enum ReportProximityConfig_r9__proximityIndicationUTRA_r9 {
	ReportProximityConfig_r9__proximityIndicationUTRA_r9_enabled	= 0
} e_ReportProximityConfig_r9__proximityIndicationUTRA_r9;

/* ReportProximityConfig-r9 */
typedef struct ReportProximityConfig_r9 {
	long	*proximityIndicationEUTRA_r9	/* OPTIONAL */;
	long	*proximityIndicationUTRA_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportProximityConfig_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_proximityIndicationEUTRA_r9_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_proximityIndicationUTRA_r9_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ReportProximityConfig_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportProximityConfig_r9_H_ */
#include <asn_internal.h>

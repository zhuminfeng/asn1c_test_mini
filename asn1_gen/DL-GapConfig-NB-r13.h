/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asn1_defs/NBIOT-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_DL_GapConfig_NB_r13_H_
#define	_DL_GapConfig_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_GapConfig_NB_r13__dl_GapThreshold_r13 {
	DL_GapConfig_NB_r13__dl_GapThreshold_r13_n32	= 0,
	DL_GapConfig_NB_r13__dl_GapThreshold_r13_n64	= 1,
	DL_GapConfig_NB_r13__dl_GapThreshold_r13_n128	= 2,
	DL_GapConfig_NB_r13__dl_GapThreshold_r13_n256	= 3
} e_DL_GapConfig_NB_r13__dl_GapThreshold_r13;
typedef enum DL_GapConfig_NB_r13__dl_GapPeriodicity_r13 {
	DL_GapConfig_NB_r13__dl_GapPeriodicity_r13_sf64	= 0,
	DL_GapConfig_NB_r13__dl_GapPeriodicity_r13_sf128	= 1,
	DL_GapConfig_NB_r13__dl_GapPeriodicity_r13_sf256	= 2,
	DL_GapConfig_NB_r13__dl_GapPeriodicity_r13_sf512	= 3
} e_DL_GapConfig_NB_r13__dl_GapPeriodicity_r13;
typedef enum DL_GapConfig_NB_r13__dl_GapDurationCoeff_r13 {
	DL_GapConfig_NB_r13__dl_GapDurationCoeff_r13_oneEighth	= 0,
	DL_GapConfig_NB_r13__dl_GapDurationCoeff_r13_oneFourth	= 1,
	DL_GapConfig_NB_r13__dl_GapDurationCoeff_r13_threeEighth	= 2,
	DL_GapConfig_NB_r13__dl_GapDurationCoeff_r13_oneHalf	= 3
} e_DL_GapConfig_NB_r13__dl_GapDurationCoeff_r13;

/* DL-GapConfig-NB-r13 */
typedef struct DL_GapConfig_NB_r13 {
	long	 dl_GapThreshold_r13;
	long	 dl_GapPeriodicity_r13;
	long	 dl_GapDurationCoeff_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_GapConfig_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_GapThreshold_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_GapPeriodicity_r13_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_GapDurationCoeff_r13_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DL_GapConfig_NB_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_GapConfig_NB_r13_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PUSCH_ConfigCommon_v1310_H_
#define	_PUSCH_ConfigCommon_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeA_r13 {
	PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeA_r13_r8	= 0,
	PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeA_r13_r16	= 1,
	PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeA_r13_r32	= 2
} e_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeA_r13;
typedef enum PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13 {
	PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r192	= 0,
	PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r256	= 1,
	PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r384	= 2,
	PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r512	= 3,
	PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r768	= 4,
	PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r1024	= 5,
	PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r1536	= 6,
	PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r2048	= 7
} e_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13;

/* PUSCH-ConfigCommon-v1310 */
typedef struct PUSCH_ConfigCommon_v1310 {
	long	*pusch_maxNumRepetitionCEmodeA_r13	/* OPTIONAL */;
	long	*pusch_maxNumRepetitionCEmodeB_r13	/* OPTIONAL */;
	long	*pusch_HoppingOffset_v1310	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_ConfigCommon_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pusch_maxNumRepetitionCEmodeA_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pusch_maxNumRepetitionCEmodeB_r13_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigCommon_v1310;

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_ConfigCommon_v1310_H_ */
#include <asn_internal.h>

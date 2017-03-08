/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asn1_defs/NBIOT-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RLC_Config_NB_r13_H_
#define	_RLC_Config_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-AM-RLC-NB-r13.h"
#include "DL-AM-RLC-NB-r13.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_Config_NB_r13_PR {
	RLC_Config_NB_r13_PR_NOTHING,	/* No components present */
	RLC_Config_NB_r13_PR_am,
	/* Extensions may appear below */
	
} RLC_Config_NB_r13_PR;

/* RLC-Config-NB-r13 */
typedef struct RLC_Config_NB_r13 {
	RLC_Config_NB_r13_PR present;
	union RLC_Config_NB_r13_u {
		struct RLC_Config_NB_r13__am {
			UL_AM_RLC_NB_r13_t	 ul_AM_RLC_r13;
			DL_AM_RLC_NB_r13_t	 dl_AM_RLC_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} am;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Config_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Config_NB_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Config_NB_r13_H_ */
#include <asn_internal.h>
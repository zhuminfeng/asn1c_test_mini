/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_H_
#define	_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "SRS-ConfigAp-r13.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_PR {
	SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_PR_NOTHING,	/* No components present */
	SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_PR_release,
	SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_PR_setup
} SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_PR;
typedef enum SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_UpPtsAdd_r13 {
	SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_UpPtsAdd_r13_sym2	= 0,
	SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_UpPtsAdd_r13_sym4	= 1
} e_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_UpPtsAdd_r13;
typedef enum SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13_PR {
	SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13_PR_NOTHING,	/* No components present */
	SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13_PR_release,
	SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13_PR_setup
} SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13_PR;

/* Forward declarations */
struct SRS_ConfigAp_r13;

/* SoundingRS-UL-ConfigDedicatedAperiodicUpPTsExt-r13 */
typedef struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13 {
	SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_PR present;
	union SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_u {
		NULL_t	 release;
		struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup {
			long	 srs_UpPtsAdd_r13;
			long	 srs_ConfigIndexAp_r13;
			struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ConfigApDCI_Format4_r13 {
				A_SEQUENCE_OF(struct SRS_ConfigAp_r13) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *srs_ConfigApDCI_Format4_r13;
			struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13 {
				SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13_PR present;
				union SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13_u {
					NULL_t	 release;
					struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13__setup__srs_ActivateAp_r13__setup {
						SRS_ConfigAp_r13_t	 srs_ConfigApDCI_Format0_r13;
						SRS_ConfigAp_r13_t	 srs_ConfigApDCI_Format1a2b2c_r13;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} setup;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *srs_ActivateAp_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_UpPtsAdd_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SRS-ConfigAp-r13.h"

#endif	/* _SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_H_ */
#include <asn_internal.h>

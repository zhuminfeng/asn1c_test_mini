/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "UE-EUTRA-Capability-v11a0-IEs.h"

static int
memb_ue_Category_v11a0_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long long *)sptr;
	
	if((value >= 11LL && value <= 12LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ue_Category_v11a0_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  11,  12 }	/* (11..12) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v11a0_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v11a0_IEs, ue_Category_v11a0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ue_Category_v11a0_constraint_1,
		&asn_PER_memb_ue_Category_v11a0_constr_2,
		0,
		"ue-Category-v11a0"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v11a0_IEs, measParameters_v11a0),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasParameters_v11a0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measParameters-v11a0"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v11a0_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v1250_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_EUTRA_Capability_v11a0_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v11a0_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v11a0_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-Category-v11a0 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measParameters-v11a0 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v11a0_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v11a0_IEs),
	offsetof(struct UE_EUTRA_Capability_v11a0_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v11a0_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v11a0_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v11a0_IEs = {
	"UE-EUTRA-Capability-v11a0-IEs",
	"UE-EUTRA-Capability-v11a0-IEs",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_UE_EUTRA_Capability_v11a0_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v11a0_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v11a0_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v11a0_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v11a0_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v11a0_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_EUTRA_Capability_v11a0_IEs_1,
	3,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v11a0_IEs_specs_1	/* Additional specs */
};


/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "SoundingRS-UL-ConfigDedicatedAperiodic-v1310.h"

static int
memb_srs_ConfigApDCI_Format4_v1310_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1LL && size <= 3LL)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_srs_ConfigApDCI_Format4_v1310_constr_4 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_srs_ActivateAp_v1310_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_srs_ConfigApDCI_Format4_v1310_constr_4 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_SoundingRS_UL_ConfigDedicatedAperiodic_v1310_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_srs_ConfigApDCI_Format4_v1310_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SRS_ConfigAp_v1310,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_srs_ConfigApDCI_Format4_v1310_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_srs_ConfigApDCI_Format4_v1310_specs_4 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ConfigApDCI_Format4_v1310),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ConfigApDCI_Format4_v1310, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_ConfigApDCI_Format4_v1310_4 = {
	"srs-ConfigApDCI-Format4-v1310",
	"srs-ConfigApDCI-Format4-v1310",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	SEQUENCE_OF_decode_aper,
	SEQUENCE_OF_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_srs_ConfigApDCI_Format4_v1310_tags_4,
	sizeof(asn_DEF_srs_ConfigApDCI_Format4_v1310_tags_4)
		/sizeof(asn_DEF_srs_ConfigApDCI_Format4_v1310_tags_4[0]) - 1, /* 1 */
	asn_DEF_srs_ConfigApDCI_Format4_v1310_tags_4,	/* Same as above */
	sizeof(asn_DEF_srs_ConfigApDCI_Format4_v1310_tags_4)
		/sizeof(asn_DEF_srs_ConfigApDCI_Format4_v1310_tags_4[0]), /* 2 */
	&asn_PER_type_srs_ConfigApDCI_Format4_v1310_constr_4,
	asn_MBR_srs_ConfigApDCI_Format4_v1310_4,
	1,	/* Single element */
	&asn_SPC_srs_ConfigApDCI_Format4_v1310_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_8[] = {
	{ ATF_POINTER, 2, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310__setup, srs_ConfigApDCI_Format0_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRS_ConfigAp_v1310,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srs-ConfigApDCI-Format0-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310__setup, srs_ConfigApDCI_Format1a2b2c_v1310),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRS_ConfigAp_v1310,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srs-ConfigApDCI-Format1a2b2c-v1310"
		},
};
static const int asn_MAP_setup_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_setup_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-ConfigApDCI-Format0-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* srs-ConfigApDCI-Format1a2b2c-v1310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_8 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310__setup),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310__setup, _asn_ctx),
	asn_MAP_setup_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_setup_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_8 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_8,
	sizeof(asn_DEF_setup_tags_8)
		/sizeof(asn_DEF_setup_tags_8[0]) - 1, /* 1 */
	asn_DEF_setup_tags_8,	/* Same as above */
	sizeof(asn_DEF_setup_tags_8)
		/sizeof(asn_DEF_setup_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_8,
	2,	/* Elements count */
	&asn_SPC_setup_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_srs_ActivateAp_v1310_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_srs_ActivateAp_v1310_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_srs_ActivateAp_v1310_specs_6 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310, _asn_ctx),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310, present),
	sizeof(((struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310 *)0)->present),
	asn_MAP_srs_ActivateAp_v1310_tag2el_6,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_ActivateAp_v1310_6 = {
	"srs-ActivateAp-v1310",
	"srs-ActivateAp-v1310",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_srs_ActivateAp_v1310_constr_6,
	asn_MBR_srs_ActivateAp_v1310_6,
	2,	/* Elements count */
	&asn_SPC_srs_ActivateAp_v1310_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_POINTER, 2, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup, srs_ConfigApDCI_Format4_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_srs_ConfigApDCI_Format4_v1310_4,
		memb_srs_ConfigApDCI_Format4_v1310_constraint_3,
		&asn_PER_memb_srs_ConfigApDCI_Format4_v1310_constr_4,
		0,
		"srs-ConfigApDCI-Format4-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup, srs_ActivateAp_v1310),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_srs_ActivateAp_v1310_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srs-ActivateAp-v1310"
		},
};
static const int asn_MAP_setup_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-ConfigApDCI-Format4-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* srs-ActivateAp-v1310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_3,
	2,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SoundingRS_UL_ConfigDedicatedAperiodic_v1310_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SoundingRS_UL_ConfigDedicatedAperiodic_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_SoundingRS_UL_ConfigDedicatedAperiodic_v1310_specs_1 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310, _asn_ctx),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310, present),
	sizeof(((struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310 *)0)->present),
	asn_MAP_SoundingRS_UL_ConfigDedicatedAperiodic_v1310_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigDedicatedAperiodic_v1310 = {
	"SoundingRS-UL-ConfigDedicatedAperiodic-v1310",
	"SoundingRS-UL-ConfigDedicatedAperiodic-v1310",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_SoundingRS_UL_ConfigDedicatedAperiodic_v1310_constr_1,
	asn_MBR_SoundingRS_UL_ConfigDedicatedAperiodic_v1310_1,
	2,	/* Elements count */
	&asn_SPC_SoundingRS_UL_ConfigDedicatedAperiodic_v1310_specs_1	/* Additional specs */
};


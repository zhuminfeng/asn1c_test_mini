/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "ReportConfigToAddMod.h"

static asn_per_constraints_t asn_PER_type_reportConfig_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_reportConfig_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigToAddMod__reportConfig, choice.reportConfigEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportConfigEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportConfigEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigToAddMod__reportConfig, choice.reportConfigInterRAT),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportConfigInterRAT,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportConfigInterRAT"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_reportConfig_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reportConfigEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reportConfigInterRAT */
};
static asn_CHOICE_specifics_t asn_SPC_reportConfig_specs_3 = {
	sizeof(struct ReportConfigToAddMod__reportConfig),
	offsetof(struct ReportConfigToAddMod__reportConfig, _asn_ctx),
	offsetof(struct ReportConfigToAddMod__reportConfig, present),
	sizeof(((struct ReportConfigToAddMod__reportConfig *)0)->present),
	asn_MAP_reportConfig_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reportConfig_3 = {
	"reportConfig",
	"reportConfig",
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
	&asn_PER_type_reportConfig_constr_3,
	asn_MBR_reportConfig_3,
	2,	/* Elements count */
	&asn_SPC_reportConfig_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ReportConfigToAddMod_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigToAddMod, reportConfigId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportConfigId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportConfigId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigToAddMod, reportConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_reportConfig_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportConfig"
		},
};
static const ber_tlv_tag_t asn_DEF_ReportConfigToAddMod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReportConfigToAddMod_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reportConfigId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reportConfig */
};
static asn_SEQUENCE_specifics_t asn_SPC_ReportConfigToAddMod_specs_1 = {
	sizeof(struct ReportConfigToAddMod),
	offsetof(struct ReportConfigToAddMod, _asn_ctx),
	asn_MAP_ReportConfigToAddMod_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ReportConfigToAddMod = {
	"ReportConfigToAddMod",
	"ReportConfigToAddMod",
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
	asn_DEF_ReportConfigToAddMod_tags_1,
	sizeof(asn_DEF_ReportConfigToAddMod_tags_1)
		/sizeof(asn_DEF_ReportConfigToAddMod_tags_1[0]), /* 1 */
	asn_DEF_ReportConfigToAddMod_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportConfigToAddMod_tags_1)
		/sizeof(asn_DEF_ReportConfigToAddMod_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ReportConfigToAddMod_1,
	2,	/* Elements count */
	&asn_SPC_ReportConfigToAddMod_specs_1	/* Additional specs */
};


/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "RRCConnectionReestablishmentReject.h"

static asn_per_constraints_t asn_PER_type_criticalExtensions_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_criticalExtensionsFuture_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_criticalExtensionsFuture_specs_4 = {
	sizeof(struct RRCConnectionReestablishmentReject__criticalExtensions__criticalExtensionsFuture),
	offsetof(struct RRCConnectionReestablishmentReject__criticalExtensions__criticalExtensionsFuture, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensionsFuture_4 = {
	"criticalExtensionsFuture",
	"criticalExtensionsFuture",
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
	asn_DEF_criticalExtensionsFuture_tags_4,
	sizeof(asn_DEF_criticalExtensionsFuture_tags_4)
		/sizeof(asn_DEF_criticalExtensionsFuture_tags_4[0]) - 1, /* 1 */
	asn_DEF_criticalExtensionsFuture_tags_4,	/* Same as above */
	sizeof(asn_DEF_criticalExtensionsFuture_tags_4)
		/sizeof(asn_DEF_criticalExtensionsFuture_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_criticalExtensionsFuture_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_criticalExtensions_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReestablishmentReject__criticalExtensions, choice.rrcConnectionReestablishmentReject_r8),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReestablishmentReject_r8_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionReestablishmentReject-r8"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReestablishmentReject__criticalExtensions, choice.criticalExtensionsFuture),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_criticalExtensionsFuture_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"criticalExtensionsFuture"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_criticalExtensions_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionReestablishmentReject-r8 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensionsFuture */
};
static asn_CHOICE_specifics_t asn_SPC_criticalExtensions_specs_2 = {
	sizeof(struct RRCConnectionReestablishmentReject__criticalExtensions),
	offsetof(struct RRCConnectionReestablishmentReject__criticalExtensions, _asn_ctx),
	offsetof(struct RRCConnectionReestablishmentReject__criticalExtensions, present),
	sizeof(((struct RRCConnectionReestablishmentReject__criticalExtensions *)0)->present),
	asn_MAP_criticalExtensions_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensions_2 = {
	"criticalExtensions",
	"criticalExtensions",
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
	&asn_PER_type_criticalExtensions_constr_2,
	asn_MBR_criticalExtensions_2,
	2,	/* Elements count */
	&asn_SPC_criticalExtensions_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRCConnectionReestablishmentReject_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReestablishmentReject, criticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_criticalExtensions_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"criticalExtensions"
		},
};
static const ber_tlv_tag_t asn_DEF_RRCConnectionReestablishmentReject_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionReestablishmentReject_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* criticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishmentReject_specs_1 = {
	sizeof(struct RRCConnectionReestablishmentReject),
	offsetof(struct RRCConnectionReestablishmentReject, _asn_ctx),
	asn_MAP_RRCConnectionReestablishmentReject_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentReject = {
	"RRCConnectionReestablishmentReject",
	"RRCConnectionReestablishmentReject",
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
	asn_DEF_RRCConnectionReestablishmentReject_tags_1,
	sizeof(asn_DEF_RRCConnectionReestablishmentReject_tags_1)
		/sizeof(asn_DEF_RRCConnectionReestablishmentReject_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionReestablishmentReject_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionReestablishmentReject_tags_1)
		/sizeof(asn_DEF_RRCConnectionReestablishmentReject_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCConnectionReestablishmentReject_1,
	1,	/* Elements count */
	&asn_SPC_RRCConnectionReestablishmentReject_specs_1	/* Additional specs */
};


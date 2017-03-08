/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "NeighCellsCRS-Info-r13.h"

static asn_per_constraints_t asn_PER_type_NeighCellsCRS_Info_r13_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NeighCellsCRS_Info_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NeighCellsCRS_Info_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighCellsCRS_Info_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CRS_AssistanceInfoList_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NeighCellsCRS_Info_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_NeighCellsCRS_Info_r13_specs_1 = {
	sizeof(struct NeighCellsCRS_Info_r13),
	offsetof(struct NeighCellsCRS_Info_r13, _asn_ctx),
	offsetof(struct NeighCellsCRS_Info_r13, present),
	sizeof(((struct NeighCellsCRS_Info_r13 *)0)->present),
	asn_MAP_NeighCellsCRS_Info_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NeighCellsCRS_Info_r13 = {
	"NeighCellsCRS-Info-r13",
	"NeighCellsCRS-Info-r13",
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
	&asn_PER_type_NeighCellsCRS_Info_r13_constr_1,
	asn_MBR_NeighCellsCRS_Info_r13_1,
	2,	/* Elements count */
	&asn_SPC_NeighCellsCRS_Info_r13_specs_1	/* Additional specs */
};


/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "SystemInformationBlockType9.h"

static int
memb_hnb_Name_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1LL && size <= 48LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_hnb_Name_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  48 }	/* (SIZE(1..48)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SystemInformationBlockType9_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType9, hnb_Name),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_hnb_Name_constraint_1,
		&asn_PER_memb_hnb_Name_constr_2,
		0,
		"hnb-Name"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType9, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType9_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hnb-Name */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* lateNonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType9_specs_1 = {
	sizeof(struct SystemInformationBlockType9),
	offsetof(struct SystemInformationBlockType9, _asn_ctx),
	asn_MAP_SystemInformationBlockType9_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType9_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	0,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType9 = {
	"SystemInformationBlockType9",
	"SystemInformationBlockType9",
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
	asn_DEF_SystemInformationBlockType9_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType9_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType9_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType9_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType9_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType9_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformationBlockType9_1,
	2,	/* Elements count */
	&asn_SPC_SystemInformationBlockType9_specs_1	/* Additional specs */
};


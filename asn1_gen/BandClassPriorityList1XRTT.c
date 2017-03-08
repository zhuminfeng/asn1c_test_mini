/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "BandClassPriorityList1XRTT.h"

static asn_per_constraints_t asn_PER_type_BandClassPriorityList1XRTT_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_BandClassPriorityList1XRTT_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_BandClassPriority1XRTT,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_BandClassPriorityList1XRTT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_BandClassPriorityList1XRTT_specs_1 = {
	sizeof(struct BandClassPriorityList1XRTT),
	offsetof(struct BandClassPriorityList1XRTT, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_BandClassPriorityList1XRTT = {
	"BandClassPriorityList1XRTT",
	"BandClassPriorityList1XRTT",
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
	asn_DEF_BandClassPriorityList1XRTT_tags_1,
	sizeof(asn_DEF_BandClassPriorityList1XRTT_tags_1)
		/sizeof(asn_DEF_BandClassPriorityList1XRTT_tags_1[0]), /* 1 */
	asn_DEF_BandClassPriorityList1XRTT_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandClassPriorityList1XRTT_tags_1)
		/sizeof(asn_DEF_BandClassPriorityList1XRTT_tags_1[0]), /* 1 */
	&asn_PER_type_BandClassPriorityList1XRTT_constr_1,
	asn_MBR_BandClassPriorityList1XRTT_1,
	1,	/* Single element */
	&asn_SPC_BandClassPriorityList1XRTT_specs_1	/* Additional specs */
};


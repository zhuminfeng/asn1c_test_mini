/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "UE-EUTRA-CapabilityAddXDD-Mode-v1060.h"

static int
memb_featureGroupIndRel10_v1060_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_featureGroupIndRel10_v1060_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1060_1[] = {
	{ ATF_POINTER, 5, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1060, phyLayerParameters_v1060),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_v1020,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"phyLayerParameters-v1060"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1060, featureGroupIndRel10_v1060),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_featureGroupIndRel10_v1060_constraint_1,
		&asn_PER_memb_featureGroupIndRel10_v1060_constr_3,
		0,
		"featureGroupIndRel10-v1060"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1060, interRAT_ParametersCDMA2000_v1060),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersCDMA2000_1XRTT_v1020,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interRAT-ParametersCDMA2000-v1060"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1060, interRAT_ParametersUTRA_TDD_v1060),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersUTRA_TDD_v1020,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interRAT-ParametersUTRA-TDD-v1060"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1060, otdoa_PositioningCapabilities_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OTDOA_PositioningCapabilities_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"otdoa-PositioningCapabilities-r10"
		},
};
static const int asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1060_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* phyLayerParameters-v1060 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* featureGroupIndRel10-v1060 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* interRAT-ParametersCDMA2000-v1060 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* interRAT-ParametersUTRA-TDD-v1060 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* otdoa-PositioningCapabilities-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1060_specs_1 = {
	sizeof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1060),
	offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1060, _asn_ctx),
	asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1060_oms_1,	/* Optional members */
	4, 1,	/* Root/Additions */
	3,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1060 = {
	"UE-EUTRA-CapabilityAddXDD-Mode-v1060",
	"UE-EUTRA-CapabilityAddXDD-Mode-v1060",
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
	asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tags_1,
	sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1060_1,
	5,	/* Elements count */
	&asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1060_specs_1	/* Additional specs */
};


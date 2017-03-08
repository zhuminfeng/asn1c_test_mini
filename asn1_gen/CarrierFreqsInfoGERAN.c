/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "CarrierFreqsInfoGERAN.h"

static int
memb_ncc_Permitted_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_q_RxLevMin_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long long *)sptr;
	
	if((value >= 0LL && value <= 45LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_p_MaxGERAN_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long long *)sptr;
	
	if((value >= 0LL && value <= 39LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ncc_Permitted_constr_5 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_q_RxLevMin_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  45 }	/* (0..45) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p_MaxGERAN_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  39 }	/* (0..39) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_commonInfo_3[] = {
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqsInfoGERAN__commonInfo, cellReselectionPriority),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionPriority,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellReselectionPriority"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqsInfoGERAN__commonInfo, ncc_Permitted),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_ncc_Permitted_constraint_3,
		&asn_PER_memb_ncc_Permitted_constr_5,
		0,
		"ncc-Permitted"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqsInfoGERAN__commonInfo, q_RxLevMin),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_q_RxLevMin_constraint_3,
		&asn_PER_memb_q_RxLevMin_constr_6,
		0,
		"q-RxLevMin"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqsInfoGERAN__commonInfo, p_MaxGERAN),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_p_MaxGERAN_constraint_3,
		&asn_PER_memb_p_MaxGERAN_constr_7,
		0,
		"p-MaxGERAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqsInfoGERAN__commonInfo, threshX_High),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshX-High"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqsInfoGERAN__commonInfo, threshX_Low),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshX-Low"
		},
};
static const int asn_MAP_commonInfo_oms_3[] = { 0, 3 };
static const ber_tlv_tag_t asn_DEF_commonInfo_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_commonInfo_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellReselectionPriority */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ncc-Permitted */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* q-RxLevMin */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* p-MaxGERAN */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* threshX-High */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* threshX-Low */
};
static asn_SEQUENCE_specifics_t asn_SPC_commonInfo_specs_3 = {
	sizeof(struct CarrierFreqsInfoGERAN__commonInfo),
	offsetof(struct CarrierFreqsInfoGERAN__commonInfo, _asn_ctx),
	asn_MAP_commonInfo_tag2el_3,
	6,	/* Count of tags in the map */
	asn_MAP_commonInfo_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_commonInfo_3 = {
	"commonInfo",
	"commonInfo",
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
	asn_DEF_commonInfo_tags_3,
	sizeof(asn_DEF_commonInfo_tags_3)
		/sizeof(asn_DEF_commonInfo_tags_3[0]) - 1, /* 1 */
	asn_DEF_commonInfo_tags_3,	/* Same as above */
	sizeof(asn_DEF_commonInfo_tags_3)
		/sizeof(asn_DEF_commonInfo_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_commonInfo_3,
	6,	/* Elements count */
	&asn_SPC_commonInfo_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CarrierFreqsInfoGERAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqsInfoGERAN, carrierFreqs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqsGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreqs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqsInfoGERAN, commonInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_commonInfo_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commonInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_CarrierFreqsInfoGERAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CarrierFreqsInfoGERAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreqs */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* commonInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqsInfoGERAN_specs_1 = {
	sizeof(struct CarrierFreqsInfoGERAN),
	offsetof(struct CarrierFreqsInfoGERAN, _asn_ctx),
	asn_MAP_CarrierFreqsInfoGERAN_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CarrierFreqsInfoGERAN = {
	"CarrierFreqsInfoGERAN",
	"CarrierFreqsInfoGERAN",
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
	asn_DEF_CarrierFreqsInfoGERAN_tags_1,
	sizeof(asn_DEF_CarrierFreqsInfoGERAN_tags_1)
		/sizeof(asn_DEF_CarrierFreqsInfoGERAN_tags_1[0]), /* 1 */
	asn_DEF_CarrierFreqsInfoGERAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierFreqsInfoGERAN_tags_1)
		/sizeof(asn_DEF_CarrierFreqsInfoGERAN_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CarrierFreqsInfoGERAN_1,
	2,	/* Elements count */
	&asn_SPC_CarrierFreqsInfoGERAN_specs_1	/* Additional specs */
};


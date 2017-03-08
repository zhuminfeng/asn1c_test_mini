/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asn1_defs/NBIOT-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "UplinkPowerControlCommon-NB-r13.h"

static int
alpha_r13_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
alpha_r13_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
alpha_r13_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	alpha_r13_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
alpha_r13_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	alpha_r13_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
alpha_r13_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	alpha_r13_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
alpha_r13_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	alpha_r13_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
alpha_r13_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	alpha_r13_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
alpha_r13_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	alpha_r13_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
alpha_r13_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	alpha_r13_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
alpha_r13_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	alpha_r13_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
alpha_r13_3_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	alpha_r13_3_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
alpha_r13_3_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	alpha_r13_3_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static int
memb_p0_NominalNPUSCH_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long long *)sptr;
	
	if((value >= -126LL && value <= 24LL)) {
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
memb_deltaPreambleMsg3_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long long *)sptr;
	
	if((value >= -1LL && value <= 6LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_alpha_r13_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p0_NominalNPUSCH_r13_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_deltaPreambleMsg3_r13_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3, -1,  6 }	/* (-1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_alpha_r13_value2enum_3[] = {
	{ 0,	3,	"al0" },
	{ 1,	4,	"al04" },
	{ 2,	4,	"al05" },
	{ 3,	4,	"al06" },
	{ 4,	4,	"al07" },
	{ 5,	4,	"al08" },
	{ 6,	4,	"al09" },
	{ 7,	3,	"al1" }
};
static const unsigned int asn_MAP_alpha_r13_enum2value_3[] = {
	0,	/* al0(0) */
	1,	/* al04(1) */
	2,	/* al05(2) */
	3,	/* al06(3) */
	4,	/* al07(4) */
	5,	/* al08(5) */
	6,	/* al09(6) */
	7	/* al1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_alpha_r13_specs_3 = {
	asn_MAP_alpha_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_alpha_r13_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_alpha_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_alpha_r13_3 = {
	"alpha-r13",
	"alpha-r13",
	alpha_r13_3_free,
	alpha_r13_3_print,
	alpha_r13_3_constraint,
	alpha_r13_3_decode_ber,
	alpha_r13_3_encode_der,
	alpha_r13_3_decode_xer,
	alpha_r13_3_encode_xer,
	alpha_r13_3_decode_uper,
	alpha_r13_3_encode_uper,
	alpha_r13_3_decode_aper,
	alpha_r13_3_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_alpha_r13_tags_3,
	sizeof(asn_DEF_alpha_r13_tags_3)
		/sizeof(asn_DEF_alpha_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_alpha_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_alpha_r13_tags_3)
		/sizeof(asn_DEF_alpha_r13_tags_3[0]), /* 2 */
	&asn_PER_type_alpha_r13_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_alpha_r13_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UplinkPowerControlCommon_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlCommon_NB_r13, p0_NominalNPUSCH_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_p0_NominalNPUSCH_r13_constraint_1,
		&asn_PER_memb_p0_NominalNPUSCH_r13_constr_2,
		0,
		"p0-NominalNPUSCH-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlCommon_NB_r13, alpha_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_alpha_r13_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alpha-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlCommon_NB_r13, deltaPreambleMsg3_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_deltaPreambleMsg3_r13_constraint_1,
		&asn_PER_memb_deltaPreambleMsg3_r13_constr_12,
		0,
		"deltaPreambleMsg3-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_UplinkPowerControlCommon_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UplinkPowerControlCommon_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p0-NominalNPUSCH-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* alpha-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* deltaPreambleMsg3-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlCommon_NB_r13_specs_1 = {
	sizeof(struct UplinkPowerControlCommon_NB_r13),
	offsetof(struct UplinkPowerControlCommon_NB_r13, _asn_ctx),
	asn_MAP_UplinkPowerControlCommon_NB_r13_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlCommon_NB_r13 = {
	"UplinkPowerControlCommon-NB-r13",
	"UplinkPowerControlCommon-NB-r13",
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
	asn_DEF_UplinkPowerControlCommon_NB_r13_tags_1,
	sizeof(asn_DEF_UplinkPowerControlCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlCommon_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_UplinkPowerControlCommon_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkPowerControlCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlCommon_NB_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UplinkPowerControlCommon_NB_r13_1,
	3,	/* Elements count */
	&asn_SPC_UplinkPowerControlCommon_NB_r13_specs_1	/* Additional specs */
};


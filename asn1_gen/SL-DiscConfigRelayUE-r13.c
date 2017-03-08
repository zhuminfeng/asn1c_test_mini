/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "SL-DiscConfigRelayUE-r13.h"

static int
hystMax_r13_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
hystMax_r13_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
hystMax_r13_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	hystMax_r13_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
hystMax_r13_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	hystMax_r13_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
hystMax_r13_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	hystMax_r13_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
hystMax_r13_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	hystMax_r13_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
hystMax_r13_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	hystMax_r13_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
hystMax_r13_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	hystMax_r13_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
hystMax_r13_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	hystMax_r13_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
hystMax_r13_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	hystMax_r13_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
hystMax_r13_4_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	hystMax_r13_4_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
hystMax_r13_4_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	hystMax_r13_4_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static int
hystMin_r13_11_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
hystMin_r13_11_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
hystMin_r13_11_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	hystMin_r13_11_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
hystMin_r13_11_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	hystMin_r13_11_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
hystMin_r13_11_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	hystMin_r13_11_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
hystMin_r13_11_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	hystMin_r13_11_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
hystMin_r13_11_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	hystMin_r13_11_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
hystMin_r13_11_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	hystMin_r13_11_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
hystMin_r13_11_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	hystMin_r13_11_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
hystMin_r13_11_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	hystMin_r13_11_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
hystMin_r13_11_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	hystMin_r13_11_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
hystMin_r13_11_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	hystMin_r13_11_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_hystMax_r13_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_hystMin_r13_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_hystMax_r13_value2enum_4[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB3" },
	{ 2,	3,	"dB6" },
	{ 3,	3,	"dB9" },
	{ 4,	4,	"dB12" },
	{ 5,	5,	"dBinf" }
};
static const unsigned int asn_MAP_hystMax_r13_enum2value_4[] = {
	0,	/* dB0(0) */
	4,	/* dB12(4) */
	1,	/* dB3(1) */
	2,	/* dB6(2) */
	3,	/* dB9(3) */
	5	/* dBinf(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_hystMax_r13_specs_4 = {
	asn_MAP_hystMax_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_hystMax_r13_enum2value_4,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_hystMax_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_hystMax_r13_4 = {
	"hystMax-r13",
	"hystMax-r13",
	hystMax_r13_4_free,
	hystMax_r13_4_print,
	hystMax_r13_4_constraint,
	hystMax_r13_4_decode_ber,
	hystMax_r13_4_encode_der,
	hystMax_r13_4_decode_xer,
	hystMax_r13_4_encode_xer,
	hystMax_r13_4_decode_uper,
	hystMax_r13_4_encode_uper,
	hystMax_r13_4_decode_aper,
	hystMax_r13_4_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_hystMax_r13_tags_4,
	sizeof(asn_DEF_hystMax_r13_tags_4)
		/sizeof(asn_DEF_hystMax_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_hystMax_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_hystMax_r13_tags_4)
		/sizeof(asn_DEF_hystMax_r13_tags_4[0]), /* 2 */
	&asn_PER_type_hystMax_r13_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_hystMax_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_hystMin_r13_value2enum_11[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB3" },
	{ 2,	3,	"dB6" },
	{ 3,	3,	"dB9" },
	{ 4,	4,	"dB12" }
};
static const unsigned int asn_MAP_hystMin_r13_enum2value_11[] = {
	0,	/* dB0(0) */
	4,	/* dB12(4) */
	1,	/* dB3(1) */
	2,	/* dB6(2) */
	3	/* dB9(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_hystMin_r13_specs_11 = {
	asn_MAP_hystMin_r13_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_hystMin_r13_enum2value_11,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_hystMin_r13_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_hystMin_r13_11 = {
	"hystMin-r13",
	"hystMin-r13",
	hystMin_r13_11_free,
	hystMin_r13_11_print,
	hystMin_r13_11_constraint,
	hystMin_r13_11_decode_ber,
	hystMin_r13_11_encode_der,
	hystMin_r13_11_decode_xer,
	hystMin_r13_11_encode_xer,
	hystMin_r13_11_decode_uper,
	hystMin_r13_11_encode_uper,
	hystMin_r13_11_decode_aper,
	hystMin_r13_11_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_hystMin_r13_tags_11,
	sizeof(asn_DEF_hystMin_r13_tags_11)
		/sizeof(asn_DEF_hystMin_r13_tags_11[0]) - 1, /* 1 */
	asn_DEF_hystMin_r13_tags_11,	/* Same as above */
	sizeof(asn_DEF_hystMin_r13_tags_11)
		/sizeof(asn_DEF_hystMin_r13_tags_11[0]), /* 2 */
	&asn_PER_type_hystMin_r13_constr_11,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_hystMin_r13_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SL_DiscConfigRelayUE_r13_1[] = {
	{ ATF_POINTER, 4, offsetof(struct SL_DiscConfigRelayUE_r13, threshHigh_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_RangeSL4_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshHigh-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_DiscConfigRelayUE_r13, threshLow_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_RangeSL4_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshLow-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_DiscConfigRelayUE_r13, hystMax_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_hystMax_r13_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hystMax-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_DiscConfigRelayUE_r13, hystMin_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_hystMin_r13_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hystMin-r13"
		},
};
static const int asn_MAP_SL_DiscConfigRelayUE_r13_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_SL_DiscConfigRelayUE_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_DiscConfigRelayUE_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threshHigh-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* threshLow-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* hystMax-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* hystMin-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SL_DiscConfigRelayUE_r13_specs_1 = {
	sizeof(struct SL_DiscConfigRelayUE_r13),
	offsetof(struct SL_DiscConfigRelayUE_r13, _asn_ctx),
	asn_MAP_SL_DiscConfigRelayUE_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SL_DiscConfigRelayUE_r13_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SL_DiscConfigRelayUE_r13 = {
	"SL-DiscConfigRelayUE-r13",
	"SL-DiscConfigRelayUE-r13",
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
	asn_DEF_SL_DiscConfigRelayUE_r13_tags_1,
	sizeof(asn_DEF_SL_DiscConfigRelayUE_r13_tags_1)
		/sizeof(asn_DEF_SL_DiscConfigRelayUE_r13_tags_1[0]), /* 1 */
	asn_DEF_SL_DiscConfigRelayUE_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_DiscConfigRelayUE_r13_tags_1)
		/sizeof(asn_DEF_SL_DiscConfigRelayUE_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SL_DiscConfigRelayUE_r13_1,
	4,	/* Elements count */
	&asn_SPC_SL_DiscConfigRelayUE_r13_specs_1	/* Additional specs */
};


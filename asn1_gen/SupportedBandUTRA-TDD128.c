/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "SupportedBandUTRA-TDD128.h"

int
SupportedBandUTRA_TDD128_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
SupportedBandUTRA_TDD128_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

void
SupportedBandUTRA_TDD128_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	SupportedBandUTRA_TDD128_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
SupportedBandUTRA_TDD128_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	SupportedBandUTRA_TDD128_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
SupportedBandUTRA_TDD128_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	SupportedBandUTRA_TDD128_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
SupportedBandUTRA_TDD128_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SupportedBandUTRA_TDD128_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
SupportedBandUTRA_TDD128_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	SupportedBandUTRA_TDD128_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
SupportedBandUTRA_TDD128_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SupportedBandUTRA_TDD128_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
SupportedBandUTRA_TDD128_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	SupportedBandUTRA_TDD128_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
SupportedBandUTRA_TDD128_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	SupportedBandUTRA_TDD128_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

asn_dec_rval_t
SupportedBandUTRA_TDD128_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	SupportedBandUTRA_TDD128_1_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
SupportedBandUTRA_TDD128_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	SupportedBandUTRA_TDD128_1_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_SupportedBandUTRA_TDD128_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_SupportedBandUTRA_TDD128_value2enum_1[] = {
	{ 0,	1,	"a" },
	{ 1,	1,	"b" },
	{ 2,	1,	"c" },
	{ 3,	1,	"d" },
	{ 4,	1,	"e" },
	{ 5,	1,	"f" },
	{ 6,	1,	"g" },
	{ 7,	1,	"h" },
	{ 8,	1,	"i" },
	{ 9,	1,	"j" },
	{ 10,	1,	"k" },
	{ 11,	1,	"l" },
	{ 12,	1,	"m" },
	{ 13,	1,	"n" },
	{ 14,	1,	"o" },
	{ 15,	1,	"p" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_SupportedBandUTRA_TDD128_enum2value_1[] = {
	0,	/* a(0) */
	1,	/* b(1) */
	2,	/* c(2) */
	3,	/* d(3) */
	4,	/* e(4) */
	5,	/* f(5) */
	6,	/* g(6) */
	7,	/* h(7) */
	8,	/* i(8) */
	9,	/* j(9) */
	10,	/* k(10) */
	11,	/* l(11) */
	12,	/* m(12) */
	13,	/* n(13) */
	14,	/* o(14) */
	15	/* p(15) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_SupportedBandUTRA_TDD128_specs_1 = {
	asn_MAP_SupportedBandUTRA_TDD128_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SupportedBandUTRA_TDD128_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SupportedBandUTRA_TDD128_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SupportedBandUTRA_TDD128 = {
	"SupportedBandUTRA-TDD128",
	"SupportedBandUTRA-TDD128",
	SupportedBandUTRA_TDD128_free,
	SupportedBandUTRA_TDD128_print,
	SupportedBandUTRA_TDD128_constraint,
	SupportedBandUTRA_TDD128_decode_ber,
	SupportedBandUTRA_TDD128_encode_der,
	SupportedBandUTRA_TDD128_decode_xer,
	SupportedBandUTRA_TDD128_encode_xer,
	SupportedBandUTRA_TDD128_decode_uper,
	SupportedBandUTRA_TDD128_encode_uper,
	SupportedBandUTRA_TDD128_decode_aper,
	SupportedBandUTRA_TDD128_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SupportedBandUTRA_TDD128_tags_1,
	sizeof(asn_DEF_SupportedBandUTRA_TDD128_tags_1)
		/sizeof(asn_DEF_SupportedBandUTRA_TDD128_tags_1[0]), /* 1 */
	asn_DEF_SupportedBandUTRA_TDD128_tags_1,	/* Same as above */
	sizeof(asn_DEF_SupportedBandUTRA_TDD128_tags_1)
		/sizeof(asn_DEF_SupportedBandUTRA_TDD128_tags_1[0]), /* 1 */
	&asn_PER_type_SupportedBandUTRA_TDD128_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SupportedBandUTRA_TDD128_specs_1	/* Additional specs */
};


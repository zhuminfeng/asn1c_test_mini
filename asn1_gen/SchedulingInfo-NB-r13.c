/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asn1_defs/NBIOT-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "SchedulingInfo-NB-r13.h"

static int
si_Periodicity_r13_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
si_Periodicity_r13_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
si_Periodicity_r13_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	si_Periodicity_r13_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
si_Periodicity_r13_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	si_Periodicity_r13_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
si_Periodicity_r13_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	si_Periodicity_r13_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
si_Periodicity_r13_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	si_Periodicity_r13_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
si_Periodicity_r13_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	si_Periodicity_r13_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
si_Periodicity_r13_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	si_Periodicity_r13_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
si_Periodicity_r13_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	si_Periodicity_r13_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
si_Periodicity_r13_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	si_Periodicity_r13_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
si_Periodicity_r13_2_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	si_Periodicity_r13_2_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
si_Periodicity_r13_2_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	si_Periodicity_r13_2_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static int
si_RepetitionPattern_r13_11_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
si_RepetitionPattern_r13_11_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
si_RepetitionPattern_r13_11_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	si_RepetitionPattern_r13_11_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
si_RepetitionPattern_r13_11_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	si_RepetitionPattern_r13_11_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
si_RepetitionPattern_r13_11_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	si_RepetitionPattern_r13_11_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
si_RepetitionPattern_r13_11_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	si_RepetitionPattern_r13_11_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
si_RepetitionPattern_r13_11_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	si_RepetitionPattern_r13_11_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
si_RepetitionPattern_r13_11_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	si_RepetitionPattern_r13_11_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
si_RepetitionPattern_r13_11_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	si_RepetitionPattern_r13_11_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
si_RepetitionPattern_r13_11_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	si_RepetitionPattern_r13_11_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
si_RepetitionPattern_r13_11_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	si_RepetitionPattern_r13_11_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
si_RepetitionPattern_r13_11_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	si_RepetitionPattern_r13_11_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static int
si_TB_r13_17_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
si_TB_r13_17_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
si_TB_r13_17_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	si_TB_r13_17_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
si_TB_r13_17_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	si_TB_r13_17_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
si_TB_r13_17_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	si_TB_r13_17_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
si_TB_r13_17_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	si_TB_r13_17_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
si_TB_r13_17_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	si_TB_r13_17_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
si_TB_r13_17_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	si_TB_r13_17_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
si_TB_r13_17_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	si_TB_r13_17_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
si_TB_r13_17_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	si_TB_r13_17_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
si_TB_r13_17_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	si_TB_r13_17_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
si_TB_r13_17_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	si_TB_r13_17_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_si_Periodicity_r13_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_si_RepetitionPattern_r13_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_si_TB_r13_constr_17 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_si_Periodicity_r13_value2enum_2[] = {
	{ 0,	4,	"rf64" },
	{ 1,	5,	"rf128" },
	{ 2,	5,	"rf256" },
	{ 3,	5,	"rf512" },
	{ 4,	6,	"rf1024" },
	{ 5,	6,	"rf2048" },
	{ 6,	6,	"rf4096" },
	{ 7,	5,	"spare" }
};
static const unsigned int asn_MAP_si_Periodicity_r13_enum2value_2[] = {
	4,	/* rf1024(4) */
	1,	/* rf128(1) */
	5,	/* rf2048(5) */
	2,	/* rf256(2) */
	6,	/* rf4096(6) */
	3,	/* rf512(3) */
	0,	/* rf64(0) */
	7	/* spare(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_si_Periodicity_r13_specs_2 = {
	asn_MAP_si_Periodicity_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_si_Periodicity_r13_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_si_Periodicity_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_si_Periodicity_r13_2 = {
	"si-Periodicity-r13",
	"si-Periodicity-r13",
	si_Periodicity_r13_2_free,
	si_Periodicity_r13_2_print,
	si_Periodicity_r13_2_constraint,
	si_Periodicity_r13_2_decode_ber,
	si_Periodicity_r13_2_encode_der,
	si_Periodicity_r13_2_decode_xer,
	si_Periodicity_r13_2_encode_xer,
	si_Periodicity_r13_2_decode_uper,
	si_Periodicity_r13_2_encode_uper,
	si_Periodicity_r13_2_decode_aper,
	si_Periodicity_r13_2_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_si_Periodicity_r13_tags_2,
	sizeof(asn_DEF_si_Periodicity_r13_tags_2)
		/sizeof(asn_DEF_si_Periodicity_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_si_Periodicity_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_si_Periodicity_r13_tags_2)
		/sizeof(asn_DEF_si_Periodicity_r13_tags_2[0]), /* 2 */
	&asn_PER_type_si_Periodicity_r13_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_si_Periodicity_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_si_RepetitionPattern_r13_value2enum_11[] = {
	{ 0,	10,	"every2ndRF" },
	{ 1,	10,	"every4thRF" },
	{ 2,	10,	"every8thRF" },
	{ 3,	11,	"every16thRF" }
};
static const unsigned int asn_MAP_si_RepetitionPattern_r13_enum2value_11[] = {
	3,	/* every16thRF(3) */
	0,	/* every2ndRF(0) */
	1,	/* every4thRF(1) */
	2	/* every8thRF(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_si_RepetitionPattern_r13_specs_11 = {
	asn_MAP_si_RepetitionPattern_r13_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_si_RepetitionPattern_r13_enum2value_11,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_si_RepetitionPattern_r13_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_si_RepetitionPattern_r13_11 = {
	"si-RepetitionPattern-r13",
	"si-RepetitionPattern-r13",
	si_RepetitionPattern_r13_11_free,
	si_RepetitionPattern_r13_11_print,
	si_RepetitionPattern_r13_11_constraint,
	si_RepetitionPattern_r13_11_decode_ber,
	si_RepetitionPattern_r13_11_encode_der,
	si_RepetitionPattern_r13_11_decode_xer,
	si_RepetitionPattern_r13_11_encode_xer,
	si_RepetitionPattern_r13_11_decode_uper,
	si_RepetitionPattern_r13_11_encode_uper,
	si_RepetitionPattern_r13_11_decode_aper,
	si_RepetitionPattern_r13_11_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_si_RepetitionPattern_r13_tags_11,
	sizeof(asn_DEF_si_RepetitionPattern_r13_tags_11)
		/sizeof(asn_DEF_si_RepetitionPattern_r13_tags_11[0]) - 1, /* 1 */
	asn_DEF_si_RepetitionPattern_r13_tags_11,	/* Same as above */
	sizeof(asn_DEF_si_RepetitionPattern_r13_tags_11)
		/sizeof(asn_DEF_si_RepetitionPattern_r13_tags_11[0]), /* 2 */
	&asn_PER_type_si_RepetitionPattern_r13_constr_11,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_si_RepetitionPattern_r13_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_si_TB_r13_value2enum_17[] = {
	{ 0,	3,	"b56" },
	{ 1,	4,	"b120" },
	{ 2,	4,	"b208" },
	{ 3,	4,	"b256" },
	{ 4,	4,	"b328" },
	{ 5,	4,	"b440" },
	{ 6,	4,	"b552" },
	{ 7,	4,	"b680" }
};
static const unsigned int asn_MAP_si_TB_r13_enum2value_17[] = {
	1,	/* b120(1) */
	2,	/* b208(2) */
	3,	/* b256(3) */
	4,	/* b328(4) */
	5,	/* b440(5) */
	6,	/* b552(6) */
	0,	/* b56(0) */
	7	/* b680(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_si_TB_r13_specs_17 = {
	asn_MAP_si_TB_r13_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_si_TB_r13_enum2value_17,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_si_TB_r13_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_si_TB_r13_17 = {
	"si-TB-r13",
	"si-TB-r13",
	si_TB_r13_17_free,
	si_TB_r13_17_print,
	si_TB_r13_17_constraint,
	si_TB_r13_17_decode_ber,
	si_TB_r13_17_encode_der,
	si_TB_r13_17_decode_xer,
	si_TB_r13_17_encode_xer,
	si_TB_r13_17_decode_uper,
	si_TB_r13_17_encode_uper,
	si_TB_r13_17_decode_aper,
	si_TB_r13_17_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_si_TB_r13_tags_17,
	sizeof(asn_DEF_si_TB_r13_tags_17)
		/sizeof(asn_DEF_si_TB_r13_tags_17[0]) - 1, /* 1 */
	asn_DEF_si_TB_r13_tags_17,	/* Same as above */
	sizeof(asn_DEF_si_TB_r13_tags_17)
		/sizeof(asn_DEF_si_TB_r13_tags_17[0]), /* 2 */
	&asn_PER_type_si_TB_r13_constr_17,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_si_TB_r13_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SchedulingInfo_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SchedulingInfo_NB_r13, si_Periodicity_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_si_Periodicity_r13_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"si-Periodicity-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SchedulingInfo_NB_r13, si_RepetitionPattern_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_si_RepetitionPattern_r13_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"si-RepetitionPattern-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SchedulingInfo_NB_r13, sib_MappingInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SIB_MappingInfo_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sib-MappingInfo-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SchedulingInfo_NB_r13, si_TB_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_si_TB_r13_17,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"si-TB-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_SchedulingInfo_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SchedulingInfo_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* si-Periodicity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* si-RepetitionPattern-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sib-MappingInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* si-TB-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SchedulingInfo_NB_r13_specs_1 = {
	sizeof(struct SchedulingInfo_NB_r13),
	offsetof(struct SchedulingInfo_NB_r13, _asn_ctx),
	asn_MAP_SchedulingInfo_NB_r13_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SchedulingInfo_NB_r13 = {
	"SchedulingInfo-NB-r13",
	"SchedulingInfo-NB-r13",
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
	asn_DEF_SchedulingInfo_NB_r13_tags_1,
	sizeof(asn_DEF_SchedulingInfo_NB_r13_tags_1)
		/sizeof(asn_DEF_SchedulingInfo_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_SchedulingInfo_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SchedulingInfo_NB_r13_tags_1)
		/sizeof(asn_DEF_SchedulingInfo_NB_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SchedulingInfo_NB_r13_1,
	4,	/* Elements count */
	&asn_SPC_SchedulingInfo_NB_r13_specs_1	/* Additional specs */
};


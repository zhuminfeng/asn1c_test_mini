/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "BandParameters-r11.h"

static int
supportedCSI_Proc_r11_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
supportedCSI_Proc_r11_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
supportedCSI_Proc_r11_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	supportedCSI_Proc_r11_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
supportedCSI_Proc_r11_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	supportedCSI_Proc_r11_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
supportedCSI_Proc_r11_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	supportedCSI_Proc_r11_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
supportedCSI_Proc_r11_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportedCSI_Proc_r11_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
supportedCSI_Proc_r11_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	supportedCSI_Proc_r11_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
supportedCSI_Proc_r11_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportedCSI_Proc_r11_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
supportedCSI_Proc_r11_5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	supportedCSI_Proc_r11_5_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
supportedCSI_Proc_r11_5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	supportedCSI_Proc_r11_5_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
supportedCSI_Proc_r11_5_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	supportedCSI_Proc_r11_5_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
supportedCSI_Proc_r11_5_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	supportedCSI_Proc_r11_5_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_supportedCSI_Proc_r11_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_supportedCSI_Proc_r11_value2enum_5[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n4" }
};
static const unsigned int asn_MAP_supportedCSI_Proc_r11_enum2value_5[] = {
	0,	/* n1(0) */
	1,	/* n3(1) */
	2	/* n4(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_supportedCSI_Proc_r11_specs_5 = {
	asn_MAP_supportedCSI_Proc_r11_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_supportedCSI_Proc_r11_enum2value_5,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_supportedCSI_Proc_r11_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportedCSI_Proc_r11_5 = {
	"supportedCSI-Proc-r11",
	"supportedCSI-Proc-r11",
	supportedCSI_Proc_r11_5_free,
	supportedCSI_Proc_r11_5_print,
	supportedCSI_Proc_r11_5_constraint,
	supportedCSI_Proc_r11_5_decode_ber,
	supportedCSI_Proc_r11_5_encode_der,
	supportedCSI_Proc_r11_5_decode_xer,
	supportedCSI_Proc_r11_5_encode_xer,
	supportedCSI_Proc_r11_5_decode_uper,
	supportedCSI_Proc_r11_5_encode_uper,
	supportedCSI_Proc_r11_5_decode_aper,
	supportedCSI_Proc_r11_5_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_supportedCSI_Proc_r11_tags_5,
	sizeof(asn_DEF_supportedCSI_Proc_r11_tags_5)
		/sizeof(asn_DEF_supportedCSI_Proc_r11_tags_5[0]) - 1, /* 1 */
	asn_DEF_supportedCSI_Proc_r11_tags_5,	/* Same as above */
	sizeof(asn_DEF_supportedCSI_Proc_r11_tags_5)
		/sizeof(asn_DEF_supportedCSI_Proc_r11_tags_5[0]), /* 2 */
	&asn_PER_type_supportedCSI_Proc_r11_constr_5,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportedCSI_Proc_r11_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_BandParameters_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandParameters_r11, bandEUTRA_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicator_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bandEUTRA-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct BandParameters_r11, bandParametersUL_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandParametersUL_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bandParametersUL-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct BandParameters_r11, bandParametersDL_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandParametersDL_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bandParametersDL-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct BandParameters_r11, supportedCSI_Proc_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportedCSI_Proc_r11_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportedCSI-Proc-r11"
		},
};
static const int asn_MAP_BandParameters_r11_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_BandParameters_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandParameters_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandEUTRA-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bandParametersUL-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bandParametersDL-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* supportedCSI-Proc-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_BandParameters_r11_specs_1 = {
	sizeof(struct BandParameters_r11),
	offsetof(struct BandParameters_r11, _asn_ctx),
	asn_MAP_BandParameters_r11_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_BandParameters_r11_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_BandParameters_r11 = {
	"BandParameters-r11",
	"BandParameters-r11",
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
	asn_DEF_BandParameters_r11_tags_1,
	sizeof(asn_DEF_BandParameters_r11_tags_1)
		/sizeof(asn_DEF_BandParameters_r11_tags_1[0]), /* 1 */
	asn_DEF_BandParameters_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandParameters_r11_tags_1)
		/sizeof(asn_DEF_BandParameters_r11_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_BandParameters_r11_1,
	4,	/* Elements count */
	&asn_SPC_BandParameters_r11_specs_1	/* Additional specs */
};


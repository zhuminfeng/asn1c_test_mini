/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "RRCConnectionReject-v1130-IEs.h"

static int
deprioritisationType_r11_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
deprioritisationType_r11_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
deprioritisationType_r11_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	deprioritisationType_r11_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
deprioritisationType_r11_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	deprioritisationType_r11_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
deprioritisationType_r11_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	deprioritisationType_r11_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
deprioritisationType_r11_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	deprioritisationType_r11_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
deprioritisationType_r11_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	deprioritisationType_r11_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
deprioritisationType_r11_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	deprioritisationType_r11_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
deprioritisationType_r11_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	deprioritisationType_r11_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
deprioritisationType_r11_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	deprioritisationType_r11_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
deprioritisationType_r11_3_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	deprioritisationType_r11_3_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
deprioritisationType_r11_3_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	deprioritisationType_r11_3_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static int
deprioritisationTimer_r11_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
deprioritisationTimer_r11_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
deprioritisationTimer_r11_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	deprioritisationTimer_r11_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
deprioritisationTimer_r11_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	deprioritisationTimer_r11_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
deprioritisationTimer_r11_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	deprioritisationTimer_r11_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
deprioritisationTimer_r11_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	deprioritisationTimer_r11_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
deprioritisationTimer_r11_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	deprioritisationTimer_r11_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
deprioritisationTimer_r11_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	deprioritisationTimer_r11_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
deprioritisationTimer_r11_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	deprioritisationTimer_r11_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
deprioritisationTimer_r11_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	deprioritisationTimer_r11_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
deprioritisationTimer_r11_6_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	deprioritisationTimer_r11_6_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
deprioritisationTimer_r11_6_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	deprioritisationTimer_r11_6_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_deprioritisationType_r11_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_deprioritisationTimer_r11_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_deprioritisationType_r11_value2enum_3[] = {
	{ 0,	9,	"frequency" },
	{ 1,	6,	"e-utra" }
};
static const unsigned int asn_MAP_deprioritisationType_r11_enum2value_3[] = {
	1,	/* e-utra(1) */
	0	/* frequency(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_deprioritisationType_r11_specs_3 = {
	asn_MAP_deprioritisationType_r11_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_deprioritisationType_r11_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deprioritisationType_r11_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deprioritisationType_r11_3 = {
	"deprioritisationType-r11",
	"deprioritisationType-r11",
	deprioritisationType_r11_3_free,
	deprioritisationType_r11_3_print,
	deprioritisationType_r11_3_constraint,
	deprioritisationType_r11_3_decode_ber,
	deprioritisationType_r11_3_encode_der,
	deprioritisationType_r11_3_decode_xer,
	deprioritisationType_r11_3_encode_xer,
	deprioritisationType_r11_3_decode_uper,
	deprioritisationType_r11_3_encode_uper,
	deprioritisationType_r11_3_decode_aper,
	deprioritisationType_r11_3_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_deprioritisationType_r11_tags_3,
	sizeof(asn_DEF_deprioritisationType_r11_tags_3)
		/sizeof(asn_DEF_deprioritisationType_r11_tags_3[0]) - 1, /* 1 */
	asn_DEF_deprioritisationType_r11_tags_3,	/* Same as above */
	sizeof(asn_DEF_deprioritisationType_r11_tags_3)
		/sizeof(asn_DEF_deprioritisationType_r11_tags_3[0]), /* 2 */
	&asn_PER_type_deprioritisationType_r11_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deprioritisationType_r11_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_deprioritisationTimer_r11_value2enum_6[] = {
	{ 0,	4,	"min5" },
	{ 1,	5,	"min10" },
	{ 2,	5,	"min15" },
	{ 3,	5,	"min30" }
};
static const unsigned int asn_MAP_deprioritisationTimer_r11_enum2value_6[] = {
	1,	/* min10(1) */
	2,	/* min15(2) */
	3,	/* min30(3) */
	0	/* min5(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_deprioritisationTimer_r11_specs_6 = {
	asn_MAP_deprioritisationTimer_r11_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_deprioritisationTimer_r11_enum2value_6,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deprioritisationTimer_r11_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deprioritisationTimer_r11_6 = {
	"deprioritisationTimer-r11",
	"deprioritisationTimer-r11",
	deprioritisationTimer_r11_6_free,
	deprioritisationTimer_r11_6_print,
	deprioritisationTimer_r11_6_constraint,
	deprioritisationTimer_r11_6_decode_ber,
	deprioritisationTimer_r11_6_encode_der,
	deprioritisationTimer_r11_6_decode_xer,
	deprioritisationTimer_r11_6_encode_xer,
	deprioritisationTimer_r11_6_decode_uper,
	deprioritisationTimer_r11_6_encode_uper,
	deprioritisationTimer_r11_6_decode_aper,
	deprioritisationTimer_r11_6_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_deprioritisationTimer_r11_tags_6,
	sizeof(asn_DEF_deprioritisationTimer_r11_tags_6)
		/sizeof(asn_DEF_deprioritisationTimer_r11_tags_6[0]) - 1, /* 1 */
	asn_DEF_deprioritisationTimer_r11_tags_6,	/* Same as above */
	sizeof(asn_DEF_deprioritisationTimer_r11_tags_6)
		/sizeof(asn_DEF_deprioritisationTimer_r11_tags_6[0]), /* 2 */
	&asn_PER_type_deprioritisationTimer_r11_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deprioritisationTimer_r11_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_deprioritisationReq_r11_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReject_v1130_IEs__deprioritisationReq_r11, deprioritisationType_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deprioritisationType_r11_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deprioritisationType-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReject_v1130_IEs__deprioritisationReq_r11, deprioritisationTimer_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deprioritisationTimer_r11_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deprioritisationTimer-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_deprioritisationReq_r11_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_deprioritisationReq_r11_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deprioritisationType-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* deprioritisationTimer-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_deprioritisationReq_r11_specs_2 = {
	sizeof(struct RRCConnectionReject_v1130_IEs__deprioritisationReq_r11),
	offsetof(struct RRCConnectionReject_v1130_IEs__deprioritisationReq_r11, _asn_ctx),
	asn_MAP_deprioritisationReq_r11_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deprioritisationReq_r11_2 = {
	"deprioritisationReq-r11",
	"deprioritisationReq-r11",
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
	asn_DEF_deprioritisationReq_r11_tags_2,
	sizeof(asn_DEF_deprioritisationReq_r11_tags_2)
		/sizeof(asn_DEF_deprioritisationReq_r11_tags_2[0]) - 1, /* 1 */
	asn_DEF_deprioritisationReq_r11_tags_2,	/* Same as above */
	sizeof(asn_DEF_deprioritisationReq_r11_tags_2)
		/sizeof(asn_DEF_deprioritisationReq_r11_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_deprioritisationReq_r11_2,
	2,	/* Elements count */
	&asn_SPC_deprioritisationReq_r11_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRCConnectionReject_v1130_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionReject_v1130_IEs, deprioritisationReq_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_deprioritisationReq_r11_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deprioritisationReq-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReject_v1130_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReject_v1320_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCConnectionReject_v1130_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionReject_v1130_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionReject_v1130_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deprioritisationReq-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReject_v1130_IEs_specs_1 = {
	sizeof(struct RRCConnectionReject_v1130_IEs),
	offsetof(struct RRCConnectionReject_v1130_IEs, _asn_ctx),
	asn_MAP_RRCConnectionReject_v1130_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RRCConnectionReject_v1130_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject_v1130_IEs = {
	"RRCConnectionReject-v1130-IEs",
	"RRCConnectionReject-v1130-IEs",
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
	asn_DEF_RRCConnectionReject_v1130_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionReject_v1130_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReject_v1130_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionReject_v1130_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionReject_v1130_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReject_v1130_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCConnectionReject_v1130_IEs_1,
	2,	/* Elements count */
	&asn_SPC_RRCConnectionReject_v1130_IEs_specs_1	/* Additional specs */
};


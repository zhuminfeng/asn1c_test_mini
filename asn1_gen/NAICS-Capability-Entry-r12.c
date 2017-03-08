/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "NAICS-Capability-Entry-r12.h"

static int
numberOfAggregatedPRB_r12_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
numberOfAggregatedPRB_r12_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
numberOfAggregatedPRB_r12_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	numberOfAggregatedPRB_r12_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
numberOfAggregatedPRB_r12_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	numberOfAggregatedPRB_r12_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
numberOfAggregatedPRB_r12_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	numberOfAggregatedPRB_r12_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
numberOfAggregatedPRB_r12_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	numberOfAggregatedPRB_r12_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
numberOfAggregatedPRB_r12_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	numberOfAggregatedPRB_r12_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
numberOfAggregatedPRB_r12_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	numberOfAggregatedPRB_r12_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
numberOfAggregatedPRB_r12_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	numberOfAggregatedPRB_r12_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
numberOfAggregatedPRB_r12_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	numberOfAggregatedPRB_r12_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
numberOfAggregatedPRB_r12_3_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	numberOfAggregatedPRB_r12_3_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
numberOfAggregatedPRB_r12_3_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	numberOfAggregatedPRB_r12_3_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static int
memb_numberOfNAICS_CapableCC_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long long *)sptr;
	
	if((value >= 1LL && value <= 5LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_numberOfAggregatedPRB_r12_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_numberOfNAICS_CapableCC_r12_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (1..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_numberOfAggregatedPRB_r12_value2enum_3[] = {
	{ 0,	3,	"n50" },
	{ 1,	3,	"n75" },
	{ 2,	4,	"n100" },
	{ 3,	4,	"n125" },
	{ 4,	4,	"n150" },
	{ 5,	4,	"n175" },
	{ 6,	4,	"n200" },
	{ 7,	4,	"n225" },
	{ 8,	4,	"n250" },
	{ 9,	4,	"n275" },
	{ 10,	4,	"n300" },
	{ 11,	4,	"n350" },
	{ 12,	4,	"n400" },
	{ 13,	4,	"n450" },
	{ 14,	4,	"n500" },
	{ 15,	5,	"spare" }
};
static const unsigned int asn_MAP_numberOfAggregatedPRB_r12_enum2value_3[] = {
	2,	/* n100(2) */
	3,	/* n125(3) */
	4,	/* n150(4) */
	5,	/* n175(5) */
	6,	/* n200(6) */
	7,	/* n225(7) */
	8,	/* n250(8) */
	9,	/* n275(9) */
	10,	/* n300(10) */
	11,	/* n350(11) */
	12,	/* n400(12) */
	13,	/* n450(13) */
	0,	/* n50(0) */
	14,	/* n500(14) */
	1,	/* n75(1) */
	15	/* spare(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_numberOfAggregatedPRB_r12_specs_3 = {
	asn_MAP_numberOfAggregatedPRB_r12_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_numberOfAggregatedPRB_r12_enum2value_3,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_numberOfAggregatedPRB_r12_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numberOfAggregatedPRB_r12_3 = {
	"numberOfAggregatedPRB-r12",
	"numberOfAggregatedPRB-r12",
	numberOfAggregatedPRB_r12_3_free,
	numberOfAggregatedPRB_r12_3_print,
	numberOfAggregatedPRB_r12_3_constraint,
	numberOfAggregatedPRB_r12_3_decode_ber,
	numberOfAggregatedPRB_r12_3_encode_der,
	numberOfAggregatedPRB_r12_3_decode_xer,
	numberOfAggregatedPRB_r12_3_encode_xer,
	numberOfAggregatedPRB_r12_3_decode_uper,
	numberOfAggregatedPRB_r12_3_encode_uper,
	numberOfAggregatedPRB_r12_3_decode_aper,
	numberOfAggregatedPRB_r12_3_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_numberOfAggregatedPRB_r12_tags_3,
	sizeof(asn_DEF_numberOfAggregatedPRB_r12_tags_3)
		/sizeof(asn_DEF_numberOfAggregatedPRB_r12_tags_3[0]) - 1, /* 1 */
	asn_DEF_numberOfAggregatedPRB_r12_tags_3,	/* Same as above */
	sizeof(asn_DEF_numberOfAggregatedPRB_r12_tags_3)
		/sizeof(asn_DEF_numberOfAggregatedPRB_r12_tags_3[0]), /* 2 */
	&asn_PER_type_numberOfAggregatedPRB_r12_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numberOfAggregatedPRB_r12_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NAICS_Capability_Entry_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NAICS_Capability_Entry_r12, numberOfNAICS_CapableCC_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_numberOfNAICS_CapableCC_r12_constraint_1,
		&asn_PER_memb_numberOfNAICS_CapableCC_r12_constr_2,
		0,
		"numberOfNAICS-CapableCC-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NAICS_Capability_Entry_r12, numberOfAggregatedPRB_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numberOfAggregatedPRB_r12_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"numberOfAggregatedPRB-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_NAICS_Capability_Entry_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NAICS_Capability_Entry_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberOfNAICS-CapableCC-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* numberOfAggregatedPRB-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NAICS_Capability_Entry_r12_specs_1 = {
	sizeof(struct NAICS_Capability_Entry_r12),
	offsetof(struct NAICS_Capability_Entry_r12, _asn_ctx),
	asn_MAP_NAICS_Capability_Entry_r12_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NAICS_Capability_Entry_r12 = {
	"NAICS-Capability-Entry-r12",
	"NAICS-Capability-Entry-r12",
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
	asn_DEF_NAICS_Capability_Entry_r12_tags_1,
	sizeof(asn_DEF_NAICS_Capability_Entry_r12_tags_1)
		/sizeof(asn_DEF_NAICS_Capability_Entry_r12_tags_1[0]), /* 1 */
	asn_DEF_NAICS_Capability_Entry_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_NAICS_Capability_Entry_r12_tags_1)
		/sizeof(asn_DEF_NAICS_Capability_Entry_r12_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_NAICS_Capability_Entry_r12_1,
	2,	/* Elements count */
	&asn_SPC_NAICS_Capability_Entry_r12_specs_1	/* Additional specs */
};


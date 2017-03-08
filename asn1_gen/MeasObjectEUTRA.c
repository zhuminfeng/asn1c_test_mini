/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "MeasObjectEUTRA.h"

static int
setup_20_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
setup_20_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
setup_20_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	setup_20_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
setup_20_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	setup_20_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
setup_20_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	setup_20_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
setup_20_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	setup_20_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
setup_20_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	setup_20_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
setup_20_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	setup_20_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
setup_20_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	setup_20_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
setup_20_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	setup_20_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
setup_20_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	setup_20_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
setup_20_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	setup_20_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_setup_constr_20 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_t312_r12_constr_18 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_6_set_15(int set_value, void **sptr) {
	Q_OffsetRange_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 15 */
		*st = 15;
		return 0;
	} else {
		/* Test default value 15 */
		return (*st == 15);
	}
}
static const asn_INTEGER_enum_map_t asn_MAP_setup_value2enum_20[] = {
	{ 0,	3,	"ms0" },
	{ 1,	4,	"ms50" },
	{ 2,	5,	"ms100" },
	{ 3,	5,	"ms200" },
	{ 4,	5,	"ms300" },
	{ 5,	5,	"ms400" },
	{ 6,	5,	"ms500" },
	{ 7,	6,	"ms1000" }
};
static const unsigned int asn_MAP_setup_enum2value_20[] = {
	0,	/* ms0(0) */
	2,	/* ms100(2) */
	7,	/* ms1000(7) */
	3,	/* ms200(3) */
	4,	/* ms300(4) */
	5,	/* ms400(5) */
	1,	/* ms50(1) */
	6	/* ms500(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_setup_specs_20 = {
	asn_MAP_setup_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_setup_enum2value_20,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_setup_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_20 = {
	"setup",
	"setup",
	setup_20_free,
	setup_20_print,
	setup_20_constraint,
	setup_20_decode_ber,
	setup_20_encode_der,
	setup_20_decode_xer,
	setup_20_encode_xer,
	setup_20_decode_uper,
	setup_20_encode_uper,
	setup_20_decode_aper,
	setup_20_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_setup_tags_20,
	sizeof(asn_DEF_setup_tags_20)
		/sizeof(asn_DEF_setup_tags_20[0]) - 1, /* 1 */
	asn_DEF_setup_tags_20,	/* Same as above */
	sizeof(asn_DEF_setup_tags_20)
		/sizeof(asn_DEF_setup_tags_20[0]), /* 2 */
	&asn_PER_type_setup_constr_20,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_setup_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_t312_r12_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA__t312_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA__t312_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_setup_20,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_t312_r12_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_t312_r12_specs_18 = {
	sizeof(struct MeasObjectEUTRA__t312_r12),
	offsetof(struct MeasObjectEUTRA__t312_r12, _asn_ctx),
	offsetof(struct MeasObjectEUTRA__t312_r12, present),
	sizeof(((struct MeasObjectEUTRA__t312_r12 *)0)->present),
	asn_MAP_t312_r12_tag2el_18,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t312_r12_18 = {
	"t312-r12",
	"t312-r12",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_t312_r12_constr_18,
	asn_MBR_t312_r12_18,
	2,	/* Elements count */
	&asn_SPC_t312_r12_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MeasObjectEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, allowedMeasBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllowedMeasBandwidth,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"allowedMeasBandwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, presenceAntennaPort1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PresenceAntennaPort1,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"presenceAntennaPort1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, neighCellConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"neighCellConfig"
		},
	{ ATF_POINTER, 18, offsetof(struct MeasObjectEUTRA, offsetFreq),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetRange,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_6_set_15,	/* DEFAULT 15 */
		"offsetFreq"
		},
	{ ATF_POINTER, 17, offsetof(struct MeasObjectEUTRA, cellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellsToRemoveList"
		},
	{ ATF_POINTER, 16, offsetof(struct MeasObjectEUTRA, cellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellsToAddModList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellsToAddModList"
		},
	{ ATF_POINTER, 15, offsetof(struct MeasObjectEUTRA, blackCellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"blackCellsToRemoveList"
		},
	{ ATF_POINTER, 14, offsetof(struct MeasObjectEUTRA, blackCellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BlackCellsToAddModList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"blackCellsToAddModList"
		},
	{ ATF_POINTER, 13, offsetof(struct MeasObjectEUTRA, cellForWhichToReportCGI),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellForWhichToReportCGI"
		},
	{ ATF_POINTER, 12, offsetof(struct MeasObjectEUTRA, measCycleSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasCycleSCell_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measCycleSCell-r10"
		},
	{ ATF_POINTER, 11, offsetof(struct MeasObjectEUTRA, measSubframePatternConfigNeigh_r10),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasSubframePatternConfigNeigh_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measSubframePatternConfigNeigh-r10"
		},
	{ ATF_POINTER, 10, offsetof(struct MeasObjectEUTRA, widebandRSRQ_Meas_r11),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"widebandRSRQ-Meas-r11"
		},
	{ ATF_POINTER, 9, offsetof(struct MeasObjectEUTRA, altTTT_CellsToRemoveList_r12),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altTTT-CellsToRemoveList-r12"
		},
	{ ATF_POINTER, 8, offsetof(struct MeasObjectEUTRA, altTTT_CellsToAddModList_r12),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AltTTT_CellsToAddModList_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altTTT-CellsToAddModList-r12"
		},
	{ ATF_POINTER, 7, offsetof(struct MeasObjectEUTRA, t312_r12),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_t312_r12_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t312-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct MeasObjectEUTRA, reducedMeasPerformance_r12),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reducedMeasPerformance-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct MeasObjectEUTRA, measDS_Config_r12),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasDS_Config_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measDS-Config-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasObjectEUTRA, whiteCellsToRemoveList_r13),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"whiteCellsToRemoveList-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasObjectEUTRA, whiteCellsToAddModList_r13),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WhiteCellsToAddModList_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"whiteCellsToAddModList-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectEUTRA, rmtc_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RMTC_Config_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rmtc-Config-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA, carrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_v9e0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq-r13"
		},
};
static const int asn_MAP_MeasObjectEUTRA_oms_1[] = { 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 };
static const ber_tlv_tag_t asn_DEF_MeasObjectEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasObjectEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allowedMeasBandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* presenceAntennaPort1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* neighCellConfig */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* offsetFreq */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cellsToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cellsToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* blackCellsToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* blackCellsToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* cellForWhichToReportCGI */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* measCycleSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* measSubframePatternConfigNeigh-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* widebandRSRQ-Meas-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* altTTT-CellsToRemoveList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* altTTT-CellsToAddModList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* t312-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* reducedMeasPerformance-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* measDS-Config-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* whiteCellsToRemoveList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* whiteCellsToAddModList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* rmtc-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 } /* carrierFreq-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasObjectEUTRA_specs_1 = {
	sizeof(struct MeasObjectEUTRA),
	offsetof(struct MeasObjectEUTRA, _asn_ctx),
	asn_MAP_MeasObjectEUTRA_tag2el_1,
	22,	/* Count of tags in the map */
	asn_MAP_MeasObjectEUTRA_oms_1,	/* Optional members */
	6, 12,	/* Root/Additions */
	9,	/* Start extensions */
	23	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectEUTRA = {
	"MeasObjectEUTRA",
	"MeasObjectEUTRA",
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
	asn_DEF_MeasObjectEUTRA_tags_1,
	sizeof(asn_DEF_MeasObjectEUTRA_tags_1)
		/sizeof(asn_DEF_MeasObjectEUTRA_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectEUTRA_tags_1)
		/sizeof(asn_DEF_MeasObjectEUTRA_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasObjectEUTRA_1,
	22,	/* Elements count */
	&asn_SPC_MeasObjectEUTRA_specs_1	/* Additional specs */
};


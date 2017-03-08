/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "PhysicalConfigDedicatedSCell-r10.h"

static int
pucch_Cell_r13_31_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
pucch_Cell_r13_31_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
pucch_Cell_r13_31_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	pucch_Cell_r13_31_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
pucch_Cell_r13_31_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	pucch_Cell_r13_31_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
pucch_Cell_r13_31_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	pucch_Cell_r13_31_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
pucch_Cell_r13_31_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	pucch_Cell_r13_31_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
pucch_Cell_r13_31_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	pucch_Cell_r13_31_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
pucch_Cell_r13_31_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	pucch_Cell_r13_31_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
pucch_Cell_r13_31_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	pucch_Cell_r13_31_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
pucch_Cell_r13_31_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	pucch_Cell_r13_31_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
pucch_Cell_r13_31_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	pucch_Cell_r13_31_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
pucch_Cell_r13_31_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	pucch_Cell_r13_31_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_pucch_Cell_r13_constr_31 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_pucch_SCell_constr_33 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_nonUL_Configuration_r10_2[] = {
	{ ATF_POINTER, 4, offsetof(struct PhysicalConfigDedicatedSCell_r10__nonUL_Configuration_r10, antennaInfo_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoDedicated_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"antennaInfo-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct PhysicalConfigDedicatedSCell_r10__nonUL_Configuration_r10, crossCarrierSchedulingConfig_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CrossCarrierSchedulingConfig_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"crossCarrierSchedulingConfig-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalConfigDedicatedSCell_r10__nonUL_Configuration_r10, csi_RS_Config_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_Config_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-RS-Config-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalConfigDedicatedSCell_r10__nonUL_Configuration_r10, pdsch_ConfigDedicated_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigDedicated,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdsch-ConfigDedicated-r10"
		},
};
static const int asn_MAP_nonUL_Configuration_r10_oms_2[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_nonUL_Configuration_r10_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_nonUL_Configuration_r10_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* antennaInfo-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* crossCarrierSchedulingConfig-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* csi-RS-Config-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* pdsch-ConfigDedicated-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_nonUL_Configuration_r10_specs_2 = {
	sizeof(struct PhysicalConfigDedicatedSCell_r10__nonUL_Configuration_r10),
	offsetof(struct PhysicalConfigDedicatedSCell_r10__nonUL_Configuration_r10, _asn_ctx),
	asn_MAP_nonUL_Configuration_r10_tag2el_2,
	4,	/* Count of tags in the map */
	asn_MAP_nonUL_Configuration_r10_oms_2,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonUL_Configuration_r10_2 = {
	"nonUL-Configuration-r10",
	"nonUL-Configuration-r10",
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
	asn_DEF_nonUL_Configuration_r10_tags_2,
	sizeof(asn_DEF_nonUL_Configuration_r10_tags_2)
		/sizeof(asn_DEF_nonUL_Configuration_r10_tags_2[0]) - 1, /* 1 */
	asn_DEF_nonUL_Configuration_r10_tags_2,	/* Same as above */
	sizeof(asn_DEF_nonUL_Configuration_r10_tags_2)
		/sizeof(asn_DEF_nonUL_Configuration_r10_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_nonUL_Configuration_r10_2,
	4,	/* Elements count */
	&asn_SPC_nonUL_Configuration_r10_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_Configuration_r10_7[] = {
	{ ATF_POINTER, 7, offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, antennaInfoUL_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoUL_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"antennaInfoUL-r10"
		},
	{ ATF_POINTER, 6, offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, pusch_ConfigDedicatedSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigDedicatedSCell_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-ConfigDedicatedSCell-r10"
		},
	{ ATF_POINTER, 5, offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, uplinkPowerControlDedicatedSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlDedicatedSCell_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplinkPowerControlDedicatedSCell-r10"
		},
	{ ATF_POINTER, 4, offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, cqi_ReportConfigSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfigSCell_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cqi-ReportConfigSCell-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, soundingRS_UL_ConfigDedicated_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigDedicated,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"soundingRS-UL-ConfigDedicated-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, soundingRS_UL_ConfigDedicated_v1020),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigDedicated_v1020,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"soundingRS-UL-ConfigDedicated-v1020"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, soundingRS_UL_ConfigDedicatedAperiodic_r10),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigDedicatedAperiodic_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"soundingRS-UL-ConfigDedicatedAperiodic-r10"
		},
};
static const int asn_MAP_ul_Configuration_r10_oms_7[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_ul_Configuration_r10_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ul_Configuration_r10_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* antennaInfoUL-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pusch-ConfigDedicatedSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uplinkPowerControlDedicatedSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cqi-ReportConfigSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* soundingRS-UL-ConfigDedicated-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* soundingRS-UL-ConfigDedicated-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* soundingRS-UL-ConfigDedicatedAperiodic-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_Configuration_r10_specs_7 = {
	sizeof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10),
	offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, _asn_ctx),
	asn_MAP_ul_Configuration_r10_tag2el_7,
	7,	/* Count of tags in the map */
	asn_MAP_ul_Configuration_r10_oms_7,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_Configuration_r10_7 = {
	"ul-Configuration-r10",
	"ul-Configuration-r10",
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
	asn_DEF_ul_Configuration_r10_tags_7,
	sizeof(asn_DEF_ul_Configuration_r10_tags_7)
		/sizeof(asn_DEF_ul_Configuration_r10_tags_7[0]) - 1, /* 1 */
	asn_DEF_ul_Configuration_r10_tags_7,	/* Same as above */
	sizeof(asn_DEF_ul_Configuration_r10_tags_7)
		/sizeof(asn_DEF_ul_Configuration_r10_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ul_Configuration_r10_7,
	7,	/* Elements count */
	&asn_SPC_ul_Configuration_r10_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pucch_Cell_r13_value2enum_31[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_pucch_Cell_r13_enum2value_31[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pucch_Cell_r13_specs_31 = {
	asn_MAP_pucch_Cell_r13_value2enum_31,	/* "tag" => N; sorted by tag */
	asn_MAP_pucch_Cell_r13_enum2value_31,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pucch_Cell_r13_tags_31[] = {
	(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pucch_Cell_r13_31 = {
	"pucch-Cell-r13",
	"pucch-Cell-r13",
	pucch_Cell_r13_31_free,
	pucch_Cell_r13_31_print,
	pucch_Cell_r13_31_constraint,
	pucch_Cell_r13_31_decode_ber,
	pucch_Cell_r13_31_encode_der,
	pucch_Cell_r13_31_decode_xer,
	pucch_Cell_r13_31_encode_xer,
	pucch_Cell_r13_31_decode_uper,
	pucch_Cell_r13_31_encode_uper,
	pucch_Cell_r13_31_decode_aper,
	pucch_Cell_r13_31_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_pucch_Cell_r13_tags_31,
	sizeof(asn_DEF_pucch_Cell_r13_tags_31)
		/sizeof(asn_DEF_pucch_Cell_r13_tags_31[0]) - 1, /* 1 */
	asn_DEF_pucch_Cell_r13_tags_31,	/* Same as above */
	sizeof(asn_DEF_pucch_Cell_r13_tags_31)
		/sizeof(asn_DEF_pucch_Cell_r13_tags_31[0]), /* 2 */
	&asn_PER_type_pucch_Cell_r13_constr_31,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pucch_Cell_r13_specs_31	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_35[] = {
	{ ATF_POINTER, 5, offsetof(struct PhysicalConfigDedicatedSCell_r10__pucch_SCell__setup, pucch_ConfigDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigDedicated_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pucch-ConfigDedicated-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct PhysicalConfigDedicatedSCell_r10__pucch_SCell__setup, schedulingRequestConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SchedulingRequestConfigSCell_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"schedulingRequestConfig-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct PhysicalConfigDedicatedSCell_r10__pucch_SCell__setup, tpc_PDCCH_ConfigPUCCH_SCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TPC_PDCCH_ConfigSCell_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tpc-PDCCH-ConfigPUCCH-SCell-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalConfigDedicatedSCell_r10__pucch_SCell__setup, pusch_ConfigDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigDedicated_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-ConfigDedicated-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalConfigDedicatedSCell_r10__pucch_SCell__setup, uplinkPowerControlDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlDedicatedSCell_v1310,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplinkPowerControlDedicated-r13"
		},
};
static const int asn_MAP_setup_oms_35[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_setup_tags_35[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_35[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pucch-ConfigDedicated-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* schedulingRequestConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tpc-PDCCH-ConfigPUCCH-SCell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pusch-ConfigDedicated-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* uplinkPowerControlDedicated-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_35 = {
	sizeof(struct PhysicalConfigDedicatedSCell_r10__pucch_SCell__setup),
	offsetof(struct PhysicalConfigDedicatedSCell_r10__pucch_SCell__setup, _asn_ctx),
	asn_MAP_setup_tag2el_35,
	5,	/* Count of tags in the map */
	asn_MAP_setup_oms_35,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_35 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_35,
	sizeof(asn_DEF_setup_tags_35)
		/sizeof(asn_DEF_setup_tags_35[0]) - 1, /* 1 */
	asn_DEF_setup_tags_35,	/* Same as above */
	sizeof(asn_DEF_setup_tags_35)
		/sizeof(asn_DEF_setup_tags_35[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_35,
	5,	/* Elements count */
	&asn_SPC_setup_specs_35	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pucch_SCell_33[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalConfigDedicatedSCell_r10__pucch_SCell, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalConfigDedicatedSCell_r10__pucch_SCell, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_35,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_pucch_SCell_tag2el_33[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_pucch_SCell_specs_33 = {
	sizeof(struct PhysicalConfigDedicatedSCell_r10__pucch_SCell),
	offsetof(struct PhysicalConfigDedicatedSCell_r10__pucch_SCell, _asn_ctx),
	offsetof(struct PhysicalConfigDedicatedSCell_r10__pucch_SCell, present),
	sizeof(((struct PhysicalConfigDedicatedSCell_r10__pucch_SCell *)0)->present),
	asn_MAP_pucch_SCell_tag2el_33,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pucch_SCell_33 = {
	"pucch-SCell",
	"pucch-SCell",
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
	&asn_PER_type_pucch_SCell_constr_33,
	asn_MBR_pucch_SCell_33,
	2,	/* Elements count */
	&asn_SPC_pucch_SCell_specs_33	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PhysicalConfigDedicatedSCell_r10_1[] = {
	{ ATF_POINTER, 32, offsetof(struct PhysicalConfigDedicatedSCell_r10, nonUL_Configuration_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_nonUL_Configuration_r10_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonUL-Configuration-r10"
		},
	{ ATF_POINTER, 31, offsetof(struct PhysicalConfigDedicatedSCell_r10, ul_Configuration_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ul_Configuration_r10_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-Configuration-r10"
		},
	{ ATF_POINTER, 30, offsetof(struct PhysicalConfigDedicatedSCell_r10, csi_RS_ConfigNZPToReleaseList_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigNZPToReleaseList_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-RS-ConfigNZPToReleaseList-r11"
		},
	{ ATF_POINTER, 29, offsetof(struct PhysicalConfigDedicatedSCell_r10, csi_RS_ConfigNZPToAddModList_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigNZPToAddModList_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-RS-ConfigNZPToAddModList-r11"
		},
	{ ATF_POINTER, 28, offsetof(struct PhysicalConfigDedicatedSCell_r10, csi_RS_ConfigZPToReleaseList_r11),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigZPToReleaseList_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-RS-ConfigZPToReleaseList-r11"
		},
	{ ATF_POINTER, 27, offsetof(struct PhysicalConfigDedicatedSCell_r10, csi_RS_ConfigZPToAddModList_r11),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigZPToAddModList_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-RS-ConfigZPToAddModList-r11"
		},
	{ ATF_POINTER, 26, offsetof(struct PhysicalConfigDedicatedSCell_r10, epdcch_Config_r11),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EPDCCH_Config_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"epdcch-Config-r11"
		},
	{ ATF_POINTER, 25, offsetof(struct PhysicalConfigDedicatedSCell_r10, pdsch_ConfigDedicated_v1130),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigDedicated_v1130,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdsch-ConfigDedicated-v1130"
		},
	{ ATF_POINTER, 24, offsetof(struct PhysicalConfigDedicatedSCell_r10, cqi_ReportConfig_v1130),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_v1130,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cqi-ReportConfig-v1130"
		},
	{ ATF_POINTER, 23, offsetof(struct PhysicalConfigDedicatedSCell_r10, pusch_ConfigDedicated_v1130),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigDedicated_v1130,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-ConfigDedicated-v1130"
		},
	{ ATF_POINTER, 22, offsetof(struct PhysicalConfigDedicatedSCell_r10, uplinkPowerControlDedicatedSCell_v1130),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlDedicated_v1130,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplinkPowerControlDedicatedSCell-v1130"
		},
	{ ATF_POINTER, 21, offsetof(struct PhysicalConfigDedicatedSCell_r10, antennaInfo_v1250),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoDedicated_v1250,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"antennaInfo-v1250"
		},
	{ ATF_POINTER, 20, offsetof(struct PhysicalConfigDedicatedSCell_r10, eimta_MainConfigSCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_EIMTA_MainConfigServCell_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eimta-MainConfigSCell-r12"
		},
	{ ATF_POINTER, 19, offsetof(struct PhysicalConfigDedicatedSCell_r10, cqi_ReportConfigSCell_v1250),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_v1250,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cqi-ReportConfigSCell-v1250"
		},
	{ ATF_POINTER, 18, offsetof(struct PhysicalConfigDedicatedSCell_r10, uplinkPowerControlDedicatedSCell_v1250),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlDedicated_v1250,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplinkPowerControlDedicatedSCell-v1250"
		},
	{ ATF_POINTER, 17, offsetof(struct PhysicalConfigDedicatedSCell_r10, csi_RS_Config_v1250),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_Config_v1250,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-RS-Config-v1250"
		},
	{ ATF_POINTER, 16, offsetof(struct PhysicalConfigDedicatedSCell_r10, pdsch_ConfigDedicated_v1280),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigDedicated_v1280,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdsch-ConfigDedicated-v1280"
		},
	{ ATF_POINTER, 15, offsetof(struct PhysicalConfigDedicatedSCell_r10, pucch_Cell_r13),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pucch_Cell_r13_31,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pucch-Cell-r13"
		},
	{ ATF_POINTER, 14, offsetof(struct PhysicalConfigDedicatedSCell_r10, pucch_SCell),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_pucch_SCell_33,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pucch-SCell"
		},
	{ ATF_POINTER, 13, offsetof(struct PhysicalConfigDedicatedSCell_r10, crossCarrierSchedulingConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CrossCarrierSchedulingConfig_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"crossCarrierSchedulingConfig-r13"
		},
	{ ATF_POINTER, 12, offsetof(struct PhysicalConfigDedicatedSCell_r10, pdcch_ConfigSCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCCH_ConfigSCell_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcch-ConfigSCell-r13"
		},
	{ ATF_POINTER, 11, offsetof(struct PhysicalConfigDedicatedSCell_r10, cqi_ReportConfig_v1310),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_v1310,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cqi-ReportConfig-v1310"
		},
	{ ATF_POINTER, 10, offsetof(struct PhysicalConfigDedicatedSCell_r10, pdsch_ConfigDedicated_v1310),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigDedicated_v1310,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdsch-ConfigDedicated-v1310"
		},
	{ ATF_POINTER, 9, offsetof(struct PhysicalConfigDedicatedSCell_r10, soundingRS_UL_ConfigDedicated_v1310),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigDedicated_v1310,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"soundingRS-UL-ConfigDedicated-v1310"
		},
	{ ATF_POINTER, 8, offsetof(struct PhysicalConfigDedicatedSCell_r10, soundingRS_UL_ConfigDedicatedUpPTsExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"soundingRS-UL-ConfigDedicatedUpPTsExt-r13"
		},
	{ ATF_POINTER, 7, offsetof(struct PhysicalConfigDedicatedSCell_r10, soundingRS_UL_ConfigDedicatedAperiodic_v1310),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigDedicatedAperiodic_v1310,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"soundingRS-UL-ConfigDedicatedAperiodic-v1310"
		},
	{ ATF_POINTER, 6, offsetof(struct PhysicalConfigDedicatedSCell_r10, soundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (26 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"soundingRS-UL-ConfigDedicatedAperiodicUpPTsExt-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct PhysicalConfigDedicatedSCell_r10, csi_RS_Config_v1310),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_Config_v1310,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-RS-Config-v1310"
		},
	{ ATF_POINTER, 4, offsetof(struct PhysicalConfigDedicatedSCell_r10, laa_SCellConfiguration_r13),
		(ASN_TAG_CLASS_CONTEXT | (28 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LAA_SCellConfiguration_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"laa-SCellConfiguration-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct PhysicalConfigDedicatedSCell_r10, csi_RS_ConfigNZPToAddModListExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (29 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigNZPToAddModListExt_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-RS-ConfigNZPToAddModListExt-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalConfigDedicatedSCell_r10, csi_RS_ConfigNZPToReleaseListExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigNZPToReleaseListExt_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-RS-ConfigNZPToReleaseListExt-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalConfigDedicatedSCell_r10, cqi_ReportConfig_v1320),
		(ASN_TAG_CLASS_CONTEXT | (31 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_v1320,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cqi-ReportConfig-v1320"
		},
};
static const int asn_MAP_PhysicalConfigDedicatedSCell_r10_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };
static const ber_tlv_tag_t asn_DEF_PhysicalConfigDedicatedSCell_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhysicalConfigDedicatedSCell_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nonUL-Configuration-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-Configuration-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* csi-RS-ConfigNZPToReleaseList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* csi-RS-ConfigNZPToAddModList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* csi-RS-ConfigZPToReleaseList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* csi-RS-ConfigZPToAddModList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* epdcch-Config-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* pdsch-ConfigDedicated-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* cqi-ReportConfig-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* pusch-ConfigDedicated-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* uplinkPowerControlDedicatedSCell-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* antennaInfo-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* eimta-MainConfigSCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* cqi-ReportConfigSCell-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* uplinkPowerControlDedicatedSCell-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* csi-RS-Config-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* pdsch-ConfigDedicated-v1280 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* pucch-Cell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* pucch-SCell */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* crossCarrierSchedulingConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* pdcch-ConfigSCell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* cqi-ReportConfig-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* pdsch-ConfigDedicated-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* soundingRS-UL-ConfigDedicated-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* soundingRS-UL-ConfigDedicatedUpPTsExt-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 }, /* soundingRS-UL-ConfigDedicatedAperiodic-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 26, 0, 0 }, /* soundingRS-UL-ConfigDedicatedAperiodicUpPTsExt-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 27, 0, 0 }, /* csi-RS-Config-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 28, 0, 0 }, /* laa-SCellConfiguration-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 29, 0, 0 }, /* csi-RS-ConfigNZPToAddModListExt-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 30, 0, 0 }, /* csi-RS-ConfigNZPToReleaseListExt-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 31, 0, 0 } /* cqi-ReportConfig-v1320 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PhysicalConfigDedicatedSCell_r10_specs_1 = {
	sizeof(struct PhysicalConfigDedicatedSCell_r10),
	offsetof(struct PhysicalConfigDedicatedSCell_r10, _asn_ctx),
	asn_MAP_PhysicalConfigDedicatedSCell_r10_tag2el_1,
	32,	/* Count of tags in the map */
	asn_MAP_PhysicalConfigDedicatedSCell_r10_oms_1,	/* Optional members */
	2, 30,	/* Root/Additions */
	1,	/* Start extensions */
	33	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalConfigDedicatedSCell_r10 = {
	"PhysicalConfigDedicatedSCell-r10",
	"PhysicalConfigDedicatedSCell-r10",
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
	asn_DEF_PhysicalConfigDedicatedSCell_r10_tags_1,
	sizeof(asn_DEF_PhysicalConfigDedicatedSCell_r10_tags_1)
		/sizeof(asn_DEF_PhysicalConfigDedicatedSCell_r10_tags_1[0]), /* 1 */
	asn_DEF_PhysicalConfigDedicatedSCell_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalConfigDedicatedSCell_r10_tags_1)
		/sizeof(asn_DEF_PhysicalConfigDedicatedSCell_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PhysicalConfigDedicatedSCell_r10_1,
	32,	/* Elements count */
	&asn_SPC_PhysicalConfigDedicatedSCell_r10_specs_1	/* Additional specs */
};


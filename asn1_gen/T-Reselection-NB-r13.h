/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asn1_defs/NBIOT-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_T_Reselection_NB_r13_H_
#define	_T_Reselection_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_Reselection_NB_r13 {
	T_Reselection_NB_r13_s0	= 0,
	T_Reselection_NB_r13_s3	= 1,
	T_Reselection_NB_r13_s6	= 2,
	T_Reselection_NB_r13_s9	= 3,
	T_Reselection_NB_r13_s12	= 4,
	T_Reselection_NB_r13_s15	= 5,
	T_Reselection_NB_r13_s18	= 6,
	T_Reselection_NB_r13_s21	= 7
} e_T_Reselection_NB_r13;

/* T-Reselection-NB-r13 */
typedef long	 T_Reselection_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_T_Reselection_NB_r13;
asn_struct_free_f T_Reselection_NB_r13_free;
asn_struct_print_f T_Reselection_NB_r13_print;
asn_constr_check_f T_Reselection_NB_r13_constraint;
ber_type_decoder_f T_Reselection_NB_r13_decode_ber;
der_type_encoder_f T_Reselection_NB_r13_encode_der;
xer_type_decoder_f T_Reselection_NB_r13_decode_xer;
xer_type_encoder_f T_Reselection_NB_r13_encode_xer;
per_type_decoder_f T_Reselection_NB_r13_decode_uper;
per_type_encoder_f T_Reselection_NB_r13_encode_uper;
per_type_decoder_f T_Reselection_NB_r13_decode_aper;
per_type_encoder_f T_Reselection_NB_r13_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _T_Reselection_NB_r13_H_ */
#include <asn_internal.h>

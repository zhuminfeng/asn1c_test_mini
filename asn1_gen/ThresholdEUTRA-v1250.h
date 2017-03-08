/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_ThresholdEUTRA_v1250_H_
#define	_ThresholdEUTRA_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSI-RSRP-Range-r12.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ThresholdEUTRA-v1250 */
typedef CSI_RSRP_Range_r12_t	 ThresholdEUTRA_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ThresholdEUTRA_v1250;
asn_struct_free_f ThresholdEUTRA_v1250_free;
asn_struct_print_f ThresholdEUTRA_v1250_print;
asn_constr_check_f ThresholdEUTRA_v1250_constraint;
ber_type_decoder_f ThresholdEUTRA_v1250_decode_ber;
der_type_encoder_f ThresholdEUTRA_v1250_encode_der;
xer_type_decoder_f ThresholdEUTRA_v1250_decode_xer;
xer_type_encoder_f ThresholdEUTRA_v1250_encode_xer;
per_type_decoder_f ThresholdEUTRA_v1250_decode_uper;
per_type_encoder_f ThresholdEUTRA_v1250_encode_uper;
per_type_decoder_f ThresholdEUTRA_v1250_decode_aper;
per_type_encoder_f ThresholdEUTRA_v1250_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ThresholdEUTRA_v1250_H_ */
#include <asn_internal.h>

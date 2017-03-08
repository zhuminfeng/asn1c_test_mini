/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SupportedBandGERAN_H_
#define	_SupportedBandGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SupportedBandGERAN {
	SupportedBandGERAN_gsm450	= 0,
	SupportedBandGERAN_gsm480	= 1,
	SupportedBandGERAN_gsm710	= 2,
	SupportedBandGERAN_gsm750	= 3,
	SupportedBandGERAN_gsm810	= 4,
	SupportedBandGERAN_gsm850	= 5,
	SupportedBandGERAN_gsm900P	= 6,
	SupportedBandGERAN_gsm900E	= 7,
	SupportedBandGERAN_gsm900R	= 8,
	SupportedBandGERAN_gsm1800	= 9,
	SupportedBandGERAN_gsm1900	= 10,
	SupportedBandGERAN_spare5	= 11,
	SupportedBandGERAN_spare4	= 12,
	SupportedBandGERAN_spare3	= 13,
	SupportedBandGERAN_spare2	= 14,
	SupportedBandGERAN_spare1	= 15
	/*
	 * Enumeration is extensible
	 */
} e_SupportedBandGERAN;

/* SupportedBandGERAN */
typedef long	 SupportedBandGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandGERAN;
asn_struct_free_f SupportedBandGERAN_free;
asn_struct_print_f SupportedBandGERAN_print;
asn_constr_check_f SupportedBandGERAN_constraint;
ber_type_decoder_f SupportedBandGERAN_decode_ber;
der_type_encoder_f SupportedBandGERAN_encode_der;
xer_type_decoder_f SupportedBandGERAN_decode_xer;
xer_type_encoder_f SupportedBandGERAN_encode_xer;
per_type_decoder_f SupportedBandGERAN_decode_uper;
per_type_encoder_f SupportedBandGERAN_encode_uper;
per_type_decoder_f SupportedBandGERAN_decode_aper;
per_type_encoder_f SupportedBandGERAN_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandGERAN_H_ */
#include <asn_internal.h>

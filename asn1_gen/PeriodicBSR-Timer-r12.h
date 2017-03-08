/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PeriodicBSR_Timer_r12_H_
#define	_PeriodicBSR_Timer_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PeriodicBSR_Timer_r12 {
	PeriodicBSR_Timer_r12_sf5	= 0,
	PeriodicBSR_Timer_r12_sf10	= 1,
	PeriodicBSR_Timer_r12_sf16	= 2,
	PeriodicBSR_Timer_r12_sf20	= 3,
	PeriodicBSR_Timer_r12_sf32	= 4,
	PeriodicBSR_Timer_r12_sf40	= 5,
	PeriodicBSR_Timer_r12_sf64	= 6,
	PeriodicBSR_Timer_r12_sf80	= 7,
	PeriodicBSR_Timer_r12_sf128	= 8,
	PeriodicBSR_Timer_r12_sf160	= 9,
	PeriodicBSR_Timer_r12_sf320	= 10,
	PeriodicBSR_Timer_r12_sf640	= 11,
	PeriodicBSR_Timer_r12_sf1280	= 12,
	PeriodicBSR_Timer_r12_sf2560	= 13,
	PeriodicBSR_Timer_r12_infinity	= 14,
	PeriodicBSR_Timer_r12_spare1	= 15
} e_PeriodicBSR_Timer_r12;

/* PeriodicBSR-Timer-r12 */
typedef long	 PeriodicBSR_Timer_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PeriodicBSR_Timer_r12;
asn_struct_free_f PeriodicBSR_Timer_r12_free;
asn_struct_print_f PeriodicBSR_Timer_r12_print;
asn_constr_check_f PeriodicBSR_Timer_r12_constraint;
ber_type_decoder_f PeriodicBSR_Timer_r12_decode_ber;
der_type_encoder_f PeriodicBSR_Timer_r12_encode_der;
xer_type_decoder_f PeriodicBSR_Timer_r12_decode_xer;
xer_type_encoder_f PeriodicBSR_Timer_r12_encode_xer;
per_type_decoder_f PeriodicBSR_Timer_r12_decode_uper;
per_type_encoder_f PeriodicBSR_Timer_r12_encode_uper;
per_type_decoder_f PeriodicBSR_Timer_r12_decode_aper;
per_type_encoder_f PeriodicBSR_Timer_r12_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PeriodicBSR_Timer_r12_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_QuantityConfigCDMA2000_H_
#define	_QuantityConfigCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum QuantityConfigCDMA2000__measQuantityCDMA2000 {
	QuantityConfigCDMA2000__measQuantityCDMA2000_pilotStrength	= 0,
	QuantityConfigCDMA2000__measQuantityCDMA2000_pilotPnPhaseAndPilotStrength	= 1
} e_QuantityConfigCDMA2000__measQuantityCDMA2000;

/* QuantityConfigCDMA2000 */
typedef struct QuantityConfigCDMA2000 {
	long	 measQuantityCDMA2000;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QuantityConfigCDMA2000_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_measQuantityCDMA2000_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_QuantityConfigCDMA2000;

#ifdef __cplusplus
}
#endif

#endif	/* _QuantityConfigCDMA2000_H_ */
#include <asn_internal.h>

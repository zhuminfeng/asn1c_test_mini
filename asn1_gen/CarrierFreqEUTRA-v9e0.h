/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CarrierFreqEUTRA_v9e0_H_
#define	_CarrierFreqEUTRA_v9e0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CarrierFreqEUTRA-v9e0 */
typedef struct CarrierFreqEUTRA_v9e0 {
	ARFCN_ValueEUTRA_r9_t	 dl_CarrierFreq_v9e0;
	ARFCN_ValueEUTRA_r9_t	*ul_CarrierFreq_v9e0	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqEUTRA_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqEUTRA_v9e0;

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqEUTRA_v9e0_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasResultForRSSI_r13_H_
#define	_MeasResultForRSSI_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RSSI-Range-r13.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultForRSSI-r13 */
typedef struct MeasResultForRSSI_r13 {
	RSSI_Range_r13_t	 rssi_Result_r13;
	long	 channelOccupancy_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultForRSSI_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultForRSSI_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultForRSSI_r13_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CarrierFreqListUTRA_FDD_Ext_r12_H_
#define	_CarrierFreqListUTRA_FDD_Ext_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CarrierFreqUTRA_FDD_Ext_r12;

/* CarrierFreqListUTRA-FDD-Ext-r12 */
typedef struct CarrierFreqListUTRA_FDD_Ext_r12 {
	A_SEQUENCE_OF(struct CarrierFreqUTRA_FDD_Ext_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqListUTRA_FDD_Ext_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqListUTRA_FDD_Ext_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierFreqUTRA-FDD-Ext-r12.h"

#endif	/* _CarrierFreqListUTRA_FDD_Ext_r12_H_ */
#include <asn_internal.h>

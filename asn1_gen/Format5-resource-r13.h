/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_Format5_resource_r13_H_
#define	_Format5_resource_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Format5-resource-r13 */
typedef struct Format5_resource_r13 {
	long	 startingPRB_format5_r13;
	long	 cdm_index_format5_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Format5_resource_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Format5_resource_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _Format5_resource_r13_H_ */
#include <asn_internal.h>

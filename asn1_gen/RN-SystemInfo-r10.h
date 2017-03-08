/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RN_SystemInfo_r10_H_
#define	_RN_SystemInfo_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SystemInformationBlockType2;

/* RN-SystemInfo-r10 */
typedef struct RN_SystemInfo_r10 {
	OCTET_STRING_t	*systemInformationBlockType1_r10	/* OPTIONAL */;
	struct SystemInformationBlockType2	*systemInformationBlockType2_r10	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RN_SystemInfo_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RN_SystemInfo_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SystemInformationBlockType2.h"

#endif	/* _RN_SystemInfo_r10_H_ */
#include <asn_internal.h>

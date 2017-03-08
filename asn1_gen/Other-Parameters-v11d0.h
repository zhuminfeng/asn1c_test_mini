/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_Other_Parameters_v11d0_H_
#define	_Other_Parameters_v11d0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Other_Parameters_v11d0__inDeviceCoexInd_UL_CA_r11 {
	Other_Parameters_v11d0__inDeviceCoexInd_UL_CA_r11_supported	= 0
} e_Other_Parameters_v11d0__inDeviceCoexInd_UL_CA_r11;

/* Other-Parameters-v11d0 */
typedef struct Other_Parameters_v11d0 {
	long	*inDeviceCoexInd_UL_CA_r11	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Other_Parameters_v11d0_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_inDeviceCoexInd_UL_CA_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Other_Parameters_v11d0;

#ifdef __cplusplus
}
#endif

#endif	/* _Other_Parameters_v11d0_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_IP_Address_r13_H_
#define	_IP_Address_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IP_Address_r13_PR {
	IP_Address_r13_PR_NOTHING,	/* No components present */
	IP_Address_r13_PR_ipv4_r13,
	IP_Address_r13_PR_ipv6_r13
} IP_Address_r13_PR;

/* IP-Address-r13 */
typedef struct IP_Address_r13 {
	IP_Address_r13_PR present;
	union IP_Address_r13_u {
		BIT_STRING_t	 ipv4_r13;
		BIT_STRING_t	 ipv6_r13;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IP_Address_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IP_Address_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _IP_Address_r13_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SCellToAddModExt_r13_H_
#define	_SCellToAddModExt_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SCellIndex-r13.h"
#include "PhysCellId.h"
#include "ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RadioResourceConfigCommonSCell_r10;
struct RadioResourceConfigDedicatedSCell_r10;
struct AntennaInfoDedicated_v10i0;

/* SCellToAddModExt-r13 */
typedef struct SCellToAddModExt_r13 {
	SCellIndex_r13_t	 sCellIndex_r13;
	struct SCellToAddModExt_r13__cellIdentification_r13 {
		PhysCellId_t	 physCellId_r13;
		ARFCN_ValueEUTRA_r9_t	 dl_CarrierFreq_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellIdentification_r13;
	struct RadioResourceConfigCommonSCell_r10	*radioResourceConfigCommonSCell_r13	/* OPTIONAL */;
	struct RadioResourceConfigDedicatedSCell_r10	*radioResourceConfigDedicatedSCell_r13	/* OPTIONAL */;
	struct AntennaInfoDedicated_v10i0	*antennaInfoDedicatedSCell_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCellToAddModExt_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCellToAddModExt_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RadioResourceConfigCommonSCell-r10.h"
#include "RadioResourceConfigDedicatedSCell-r10.h"
#include "AntennaInfoDedicated-v10i0.h"

#endif	/* _SCellToAddModExt_r13_H_ */
#include <asn_internal.h>

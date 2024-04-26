/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_PRACH_Config_H_
#define	_PRACH_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PRACH_ConfigInfo;

/* PRACH-Config */
typedef struct PRACH_Config {
	long	 rootSequenceIndex;
	struct PRACH_ConfigInfo	*prach_ConfigInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_PRACH_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_PRACH_Config_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_Config_H_ */
#include <asn_internal.h>
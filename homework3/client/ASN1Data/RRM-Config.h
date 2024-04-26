/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RRM_Config_H_
#define	_RRM_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRM_Config__ue_InactiveTime {
	RRM_Config__ue_InactiveTime_s1	= 0,
	RRM_Config__ue_InactiveTime_s2	= 1,
	RRM_Config__ue_InactiveTime_s3	= 2,
	RRM_Config__ue_InactiveTime_s5	= 3,
	RRM_Config__ue_InactiveTime_s7	= 4,
	RRM_Config__ue_InactiveTime_s10	= 5,
	RRM_Config__ue_InactiveTime_s15	= 6,
	RRM_Config__ue_InactiveTime_s20	= 7,
	RRM_Config__ue_InactiveTime_s25	= 8,
	RRM_Config__ue_InactiveTime_s30	= 9,
	RRM_Config__ue_InactiveTime_s40	= 10,
	RRM_Config__ue_InactiveTime_s50	= 11,
	RRM_Config__ue_InactiveTime_min1	= 12,
	RRM_Config__ue_InactiveTime_min1s20c	= 13,
	RRM_Config__ue_InactiveTime_min1s40	= 14,
	RRM_Config__ue_InactiveTime_min2	= 15,
	RRM_Config__ue_InactiveTime_min2s30	= 16,
	RRM_Config__ue_InactiveTime_min3	= 17,
	RRM_Config__ue_InactiveTime_min3s30	= 18,
	RRM_Config__ue_InactiveTime_min4	= 19,
	RRM_Config__ue_InactiveTime_min5	= 20,
	RRM_Config__ue_InactiveTime_min6	= 21,
	RRM_Config__ue_InactiveTime_min7	= 22,
	RRM_Config__ue_InactiveTime_min8	= 23,
	RRM_Config__ue_InactiveTime_min9	= 24,
	RRM_Config__ue_InactiveTime_min10	= 25,
	RRM_Config__ue_InactiveTime_min12	= 26,
	RRM_Config__ue_InactiveTime_min14	= 27,
	RRM_Config__ue_InactiveTime_min17	= 28,
	RRM_Config__ue_InactiveTime_min20	= 29,
	RRM_Config__ue_InactiveTime_min24	= 30,
	RRM_Config__ue_InactiveTime_min28	= 31,
	RRM_Config__ue_InactiveTime_min33	= 32,
	RRM_Config__ue_InactiveTime_min38	= 33,
	RRM_Config__ue_InactiveTime_min44	= 34,
	RRM_Config__ue_InactiveTime_min50	= 35,
	RRM_Config__ue_InactiveTime_hr1	= 36,
	RRM_Config__ue_InactiveTime_hr1min30	= 37,
	RRM_Config__ue_InactiveTime_hr2	= 38,
	RRM_Config__ue_InactiveTime_hr2min30	= 39,
	RRM_Config__ue_InactiveTime_hr3	= 40,
	RRM_Config__ue_InactiveTime_hr3min30	= 41,
	RRM_Config__ue_InactiveTime_hr4	= 42,
	RRM_Config__ue_InactiveTime_hr5	= 43,
	RRM_Config__ue_InactiveTime_hr6	= 44,
	RRM_Config__ue_InactiveTime_hr8	= 45,
	RRM_Config__ue_InactiveTime_hr10	= 46,
	RRM_Config__ue_InactiveTime_hr13	= 47,
	RRM_Config__ue_InactiveTime_hr16	= 48,
	RRM_Config__ue_InactiveTime_hr20	= 49,
	RRM_Config__ue_InactiveTime_day1	= 50,
	RRM_Config__ue_InactiveTime_day1hr12	= 51,
	RRM_Config__ue_InactiveTime_day2	= 52,
	RRM_Config__ue_InactiveTime_day2hr12	= 53,
	RRM_Config__ue_InactiveTime_day3	= 54,
	RRM_Config__ue_InactiveTime_day4	= 55,
	RRM_Config__ue_InactiveTime_day5	= 56,
	RRM_Config__ue_InactiveTime_day7	= 57,
	RRM_Config__ue_InactiveTime_day10	= 58,
	RRM_Config__ue_InactiveTime_day14	= 59,
	RRM_Config__ue_InactiveTime_day19	= 60,
	RRM_Config__ue_InactiveTime_day24	= 61,
	RRM_Config__ue_InactiveTime_day30	= 62,
	RRM_Config__ue_InactiveTime_dayMoreThan30	= 63
} e_RRM_Config__ue_InactiveTime;

/* Forward declarations */
struct CandidateCellInfoList_r10;
struct MeasResultServFreqListNR_r15;

/* RRM-Config */
typedef struct RRM_Config {
	long	*ue_InactiveTime	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CandidateCellInfoList_r10	*candidateCellInfoList_r10	/* OPTIONAL */;
	struct MeasResultServFreqListNR_r15	*candidateCellInfoListNR_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRM_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_InactiveTime_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRM_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_RRM_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_RRM_Config_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRM_Config_H_ */
#include <asn_internal.h>
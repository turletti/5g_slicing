/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -gen-PER -D src`
 */

#include "Ngap_AreaOfInterest.h"

#include "Ngap_AreaOfInterestTAIList.h"
#include "Ngap_AreaOfInterestCellList.h"
#include "Ngap_AreaOfInterestRANNodeList.h"
#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_AreaOfInterest_1[] = {
    {ATF_POINTER,
     4,
     offsetof(struct Ngap_AreaOfInterest, areaOfInterestTAIList),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_AreaOfInterestTAIList,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "areaOfInterestTAIList"},
    {ATF_POINTER,
     3,
     offsetof(struct Ngap_AreaOfInterest, areaOfInterestCellList),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_AreaOfInterestCellList,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "areaOfInterestCellList"},
    {ATF_POINTER,
     2,
     offsetof(struct Ngap_AreaOfInterest, areaOfInterestRANNodeList),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_AreaOfInterestRANNodeList,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "areaOfInterestRANNodeList"},
    {ATF_POINTER,
     1,
     offsetof(struct Ngap_AreaOfInterest, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ProtocolExtensionContainer_175P7,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "iE-Extensions"},
};
static const int asn_MAP_Ngap_AreaOfInterest_oms_1[]            = {0, 1, 2, 3};
static const ber_tlv_tag_t asn_DEF_Ngap_AreaOfInterest_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_AreaOfInterest_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* areaOfInterestTAIList */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* areaOfInterestCellList */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
     0}, /* areaOfInterestRANNodeList */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0} /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_AreaOfInterest_specs_1 = {
    sizeof(struct Ngap_AreaOfInterest),
    offsetof(struct Ngap_AreaOfInterest, _asn_ctx),
    asn_MAP_Ngap_AreaOfInterest_tag2el_1,
    4,                                 /* Count of tags in the map */
    asn_MAP_Ngap_AreaOfInterest_oms_1, /* Optional members */
    4,
    0, /* Root/Additions */
    4, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_AreaOfInterest = {
    "AreaOfInterest",
    "AreaOfInterest",
    &asn_OP_SEQUENCE,
    asn_DEF_Ngap_AreaOfInterest_tags_1,
    sizeof(asn_DEF_Ngap_AreaOfInterest_tags_1) /
        sizeof(asn_DEF_Ngap_AreaOfInterest_tags_1[0]), /* 1 */
    asn_DEF_Ngap_AreaOfInterest_tags_1,                /* Same as above */
    sizeof(asn_DEF_Ngap_AreaOfInterest_tags_1) /
        sizeof(asn_DEF_Ngap_AreaOfInterest_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_Ngap_AreaOfInterest_1,
    4,                                   /* Elements count */
    &asn_SPC_Ngap_AreaOfInterest_specs_1 /* Additional specs */
};
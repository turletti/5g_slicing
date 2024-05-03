/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#include "Ngap_NPN-Support.h"

#include "Ngap_ProtocolIE-SingleContainer.h"
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_Ngap_NPN_Support_constr_1
    CC_NOTUSED = {{0, 0}, -1};
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_Ngap_NPN_Support_constr_1 CC_NOTUSED = {
    {APC_CONSTRAINED, 1, 1, 0, 1} /* (0..1) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_Ngap_NPN_Support_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct Ngap_NPN_Support, choice.sNPN),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_NID,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "sNPN"},
    {ATF_POINTER,
     0,
     offsetof(struct Ngap_NPN_Support, choice.choice_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ProtocolIE_SingleContainer_9618P31,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "choice-Extensions"},
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_NPN_Support_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* sNPN */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_Ngap_NPN_Support_specs_1 = {
    sizeof(struct Ngap_NPN_Support),
    offsetof(struct Ngap_NPN_Support, _asn_ctx),
    offsetof(struct Ngap_NPN_Support, present),
    sizeof(((struct Ngap_NPN_Support*) 0)->present),
    asn_MAP_Ngap_NPN_Support_tag2el_1,
    2, /* Count of tags in the map */
    0,
    0,
    -1 /* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_NPN_Support = {
    "NPN-Support",
    "NPN-Support",
    &asn_OP_CHOICE,
    0, /* No effective tags (pointer) */
    0, /* No effective tags (count) */
    0, /* No tags (pointer) */
    0, /* No tags (count) */
    {
#if !defined(ASN_DISABLE_OER_SUPPORT)
        &asn_OER_type_Ngap_NPN_Support_constr_1,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
        &asn_PER_type_Ngap_NPN_Support_constr_1,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
        CHOICE_constraint},
    asn_MBR_Ngap_NPN_Support_1,
    2,                                /* Elements count */
    &asn_SPC_Ngap_NPN_Support_specs_1 /* Additional specs */
};
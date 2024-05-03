/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * EbiArpMapping.h
 *
 *
 */

#ifndef EbiArpMapping_H_
#define EbiArpMapping_H_

#include "Arp.h"
#include <nlohmann/json.hpp>

namespace oai {
namespace smf_server {
namespace model {

/// <summary>
///
/// </summary>
class EbiArpMapping {
 public:
  EbiArpMapping();
  virtual ~EbiArpMapping();

  void validate();

  /////////////////////////////////////////////
  /// EbiArpMapping members

  /// <summary>
  ///
  /// </summary>
  int32_t getEpsBearerId() const;
  void setEpsBearerId(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Arp getArp() const;
  void setArp(oai::model::common::Arp const& value);

  friend void to_json(nlohmann::json& j, const EbiArpMapping& o);
  friend void from_json(const nlohmann::json& j, EbiArpMapping& o);

 protected:
  int32_t m_EpsBearerId;

  oai::model::common::Arp m_Arp;
};

}  // namespace model
}  // namespace smf_server
}  // namespace oai

#endif /* EbiArpMapping_H_ */
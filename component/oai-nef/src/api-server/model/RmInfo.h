/**
 * Nnef_EventExposure
 * NEF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * RmInfo.h
 *
 *
 */

#ifndef RmInfo_H_
#define RmInfo_H_

#include <nlohmann/json.hpp>

#include "AccessType.h"
#include "RmState.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class RmInfo {
 public:
  RmInfo();
  virtual ~RmInfo() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const RmInfo& rhs) const;
  bool operator!=(const RmInfo& rhs) const;

  /////////////////////////////////////////////
  /// RmInfo members

  /// <summary>
  ///
  /// </summary>
  RmState getRmState() const;
  void setRmState(RmState const& value);
  /// <summary>
  ///
  /// </summary>
  AccessType getAccessType() const;
  void setAccessType(AccessType const& value);

  friend void to_json(nlohmann::json& j, const RmInfo& o);
  friend void from_json(const nlohmann::json& j, RmInfo& o);

 protected:
  RmState m_RmState;

  AccessType m_AccessType;
};

}  // namespace oai::nef::model

#endif /* RmInfo_H_ */
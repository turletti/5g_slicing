/**
 * 3gpp-5glan-pp
 * API for 5G LAN Parameter Provision. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * 5GLanParametersProvisionPatch.h
 *
 *
 */

#ifndef _5GLanParametersProvisionPatch_H_
#define _5GLanParametersProvisionPatch_H_

#include <nlohmann/json.hpp>

#include "5GLanParametersPatch.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class _5GLanParametersProvisionPatch {
 public:
  _5GLanParametersProvisionPatch();
  virtual ~_5GLanParametersProvisionPatch() = default;

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

  bool operator==(const _5GLanParametersProvisionPatch& rhs) const;
  bool operator!=(const _5GLanParametersProvisionPatch& rhs) const;

  /////////////////////////////////////////////
  /// _5GLanParametersProvisionPatch members

  /// <summary>
  ///
  /// </summary>
  _5GLanParametersPatch getR5gLanParamsPatch() const;
  void setR5gLanParamsPatch(_5GLanParametersPatch const& value);
  bool r5gLanParamsPatchIsSet() const;
  void unsetr_5gLanParamsPatch();

  friend void to_json(
      nlohmann::json& j, const _5GLanParametersProvisionPatch& o);
  friend void from_json(
      const nlohmann::json& j, _5GLanParametersProvisionPatch& o);

 protected:
  _5GLanParametersPatch m_r_5gLanParamsPatch;
  bool m_r_5gLanParamsPatchIsSet;
};

}  // namespace oai::nef::model

#endif /* _5GLanParametersProvisionPatch_H_ */
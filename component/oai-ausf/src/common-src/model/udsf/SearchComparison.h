/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service.   © 2022, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SearchComparison.h
 *
 * A comparison to apply on tag/values pairs.
 */

#ifndef SearchComparison_H_
#define SearchComparison_H_

#include <string>
#include "ComparisonOperator.h"
#include <nlohmann/json.hpp>

namespace oai::model::udsf {

/// <summary>
/// A comparison to apply on tag/values pairs.
/// </summary>
class SearchComparison {
 public:
  SearchComparison();
  virtual ~SearchComparison() = default;

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

  bool operator==(const SearchComparison& rhs) const;
  bool operator!=(const SearchComparison& rhs) const;

  /////////////////////////////////////////////
  /// SearchComparison members

  /// <summary>
  ///
  /// </summary>
  oai::model::udsf::ComparisonOperator getOp() const;
  void setOp(oai::model::udsf::ComparisonOperator const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getTag() const;
  void setTag(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getValue() const;
  void setValue(std::string const& value);

  friend void to_json(nlohmann::json& j, const SearchComparison& o);
  friend void from_json(const nlohmann::json& j, SearchComparison& o);

 protected:
  oai::model::udsf::ComparisonOperator m_Op;

  std::string m_Tag;

  std::string m_Value;
};

}  // namespace oai::model::udsf

#endif /* SearchComparison_H_ */
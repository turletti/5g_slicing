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

#include "RecordOperation.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::udsf {

RecordOperation::RecordOperation() {}

void RecordOperation::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool RecordOperation::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool RecordOperation::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "RecordOperation" : pathPrefix;

  return success;
}

bool RecordOperation::operator==(const RecordOperation& rhs) const {
  return (*this == rhs);
}

bool RecordOperation::operator!=(const RecordOperation& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const RecordOperation& o) {
  j = nlohmann::json();
}

void from_json(const nlohmann::json& j, RecordOperation& o) {}

}  // namespace oai::model::udsf
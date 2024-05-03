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

#include "Record.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::udsf {

Record::Record() {
  m_BlocksIsSet = false;
}

void Record::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool Record::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool Record::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "Record" : pathPrefix;

  if (blocksIsSet()) {
    const std::vector<nlohmann::json>& value = m_Blocks;
    const std::string currentValuePath       = _pathPrefix + ".blocks";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const nlohmann::json& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        i++;
      }
    }
  }

  return success;
}

bool Record::operator==(const Record& rhs) const {
  return

      (getMeta() == rhs.getMeta()) &&

      ((!blocksIsSet() && !rhs.blocksIsSet()) ||
       (blocksIsSet() && rhs.blocksIsSet() && getBlocks() == rhs.getBlocks()))

          ;
}

bool Record::operator!=(const Record& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Record& o) {
  j         = nlohmann::json();
  j["meta"] = o.m_Meta;
  if (o.blocksIsSet() || !o.m_Blocks.empty()) j["blocks"] = o.m_Blocks;
}

void from_json(const nlohmann::json& j, Record& o) {
  j.at("meta").get_to(o.m_Meta);
  if (j.find("blocks") != j.end()) {
    j.at("blocks").get_to(o.m_Blocks);
    o.m_BlocksIsSet = true;
  }
}

oai::model::udsf::RecordMeta Record::getMeta() const {
  return m_Meta;
}
void Record::setMeta(oai::model::udsf::RecordMeta const& value) {
  m_Meta = value;
}
std::vector<nlohmann::json> Record::getBlocks() const {
  return m_Blocks;
}
void Record::setBlocks(std::vector<nlohmann::json> const& value) {
  m_Blocks      = value;
  m_BlocksIsSet = true;
}
bool Record::blocksIsSet() const {
  return m_BlocksIsSet;
}
void Record::unsetBlocks() {
  m_BlocksIsSet = false;
}

}  // namespace oai::model::udsf
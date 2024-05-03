/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AppDetectionInfo.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::pcf {

AppDetectionInfo::AppDetectionInfo() {
  m_AppId                = "";
  m_InstanceId           = "";
  m_InstanceIdIsSet      = false;
  m_SdfDescriptionsIsSet = false;
}

void AppDetectionInfo::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool AppDetectionInfo::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool AppDetectionInfo::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "AppDetectionInfo" : pathPrefix;

  if (sdfDescriptionsIsSet()) {
    const std::vector<oai::model::pcf::FlowInformation>& value =
        m_SdfDescriptions;
    const std::string currentValuePath = _pathPrefix + ".sdfDescriptions";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::pcf::FlowInformation& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".sdfDescriptions") &&
                  success;

        i++;
      }
    }
  }

  return success;
}

bool AppDetectionInfo::operator==(const AppDetectionInfo& rhs) const {
  return

      (getAppId() == rhs.getAppId()) &&

      ((!instanceIdIsSet() && !rhs.instanceIdIsSet()) ||
       (instanceIdIsSet() && rhs.instanceIdIsSet() &&
        getInstanceId() == rhs.getInstanceId())) &&

      ((!sdfDescriptionsIsSet() && !rhs.sdfDescriptionsIsSet()) ||
       (sdfDescriptionsIsSet() && rhs.sdfDescriptionsIsSet() &&
        getSdfDescriptions() == rhs.getSdfDescriptions()))

          ;
}

bool AppDetectionInfo::operator!=(const AppDetectionInfo& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AppDetectionInfo& o) {
  j          = nlohmann::json();
  j["appId"] = o.m_AppId;
  if (o.instanceIdIsSet()) j["instanceId"] = o.m_InstanceId;
  if (o.sdfDescriptionsIsSet() || !o.m_SdfDescriptions.empty())
    j["sdfDescriptions"] = o.m_SdfDescriptions;
}

void from_json(const nlohmann::json& j, AppDetectionInfo& o) {
  j.at("appId").get_to(o.m_AppId);
  if (j.find("instanceId") != j.end()) {
    j.at("instanceId").get_to(o.m_InstanceId);
    o.m_InstanceIdIsSet = true;
  }
  if (j.find("sdfDescriptions") != j.end()) {
    j.at("sdfDescriptions").get_to(o.m_SdfDescriptions);
    o.m_SdfDescriptionsIsSet = true;
  }
}

std::string AppDetectionInfo::getAppId() const {
  return m_AppId;
}
void AppDetectionInfo::setAppId(std::string const& value) {
  m_AppId = value;
}
std::string AppDetectionInfo::getInstanceId() const {
  return m_InstanceId;
}
void AppDetectionInfo::setInstanceId(std::string const& value) {
  m_InstanceId      = value;
  m_InstanceIdIsSet = true;
}
bool AppDetectionInfo::instanceIdIsSet() const {
  return m_InstanceIdIsSet;
}
void AppDetectionInfo::unsetInstanceId() {
  m_InstanceIdIsSet = false;
}
std::vector<oai::model::pcf::FlowInformation>
AppDetectionInfo::getSdfDescriptions() const {
  return m_SdfDescriptions;
}
void AppDetectionInfo::setSdfDescriptions(
    std::vector<oai::model::pcf::FlowInformation> const& value) {
  m_SdfDescriptions      = value;
  m_SdfDescriptionsIsSet = true;
}
bool AppDetectionInfo::sdfDescriptionsIsSet() const {
  return m_SdfDescriptionsIsSet;
}
void AppDetectionInfo::unsetSdfDescriptions() {
  m_SdfDescriptionsIsSet = false;
}

}  // namespace oai::model::pcf
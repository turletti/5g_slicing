/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. � 2019, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SmsfInfo.h"

namespace oai::model::udm {

SmsfInfo::SmsfInfo() {
  m_SmsfInstanceId = "";
}

SmsfInfo::~SmsfInfo() {}

void SmsfInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const SmsfInfo& o) {
  j                   = nlohmann::json();
  j["smsfInstanceId"] = o.m_SmsfInstanceId;
  j["plmnId"]         = o.m_PlmnId;
}

void from_json(const nlohmann::json& j, SmsfInfo& o) {
  j.at("smsfInstanceId").get_to(o.m_SmsfInstanceId);
  j.at("plmnId").get_to(o.m_PlmnId);
}

std::string SmsfInfo::getSmsfInstanceId() const {
  return m_SmsfInstanceId;
}
void SmsfInfo::setSmsfInstanceId(std::string const& value) {
  m_SmsfInstanceId = value;
}
oai::model::common::PlmnId SmsfInfo::getPlmnId() const {
  return m_PlmnId;
}
void SmsfInfo::setPlmnId(oai::model::common::PlmnId const& value) {
  m_PlmnId = value;
}

}  // namespace oai::model::udm

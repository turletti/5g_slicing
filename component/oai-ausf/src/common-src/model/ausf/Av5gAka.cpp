/**
 * AUSF API
 * AUSF UE Authentication Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 *file except in compliance with the License. You may obtain a copy of the
 *License at
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

#include "Av5gAka.h"

namespace oai::model::ausf {

Av5gAka::Av5gAka() {
  m_Rand      = "";
  m_HxresStar = "";
  m_Autn      = "";
}

Av5gAka::~Av5gAka() {}

void Av5gAka::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const Av5gAka& o) {
  j              = nlohmann::json();
  j["rand"]      = o.m_Rand;
  j["hxresStar"] = o.m_HxresStar;
  j["autn"]      = o.m_Autn;
}

void from_json(const nlohmann::json& j, Av5gAka& o) {
  j.at("rand").get_to(o.m_Rand);
  j.at("hxresStar").get_to(o.m_HxresStar);
  j.at("autn").get_to(o.m_Autn);
}

std::string Av5gAka::getRand() const {
  return m_Rand;
}
void Av5gAka::setRand(std::string const& value) {
  m_Rand = value;
}
std::string Av5gAka::getHxresStar() const {
  return m_HxresStar;
}
void Av5gAka::setHxresStar(std::string const& value) {
  m_HxresStar = value;
}
std::string Av5gAka::getAutn() const {
  return m_Autn;
}
void Av5gAka::setAutn(std::string const& value) {
  m_Autn = value;
}

}  // namespace oai::model::ausf

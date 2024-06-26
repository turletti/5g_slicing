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
 * Nudm_UEAU
 * UDM UE Authentication Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AuthenticationVector.h"

namespace oai::model::udm {

AuthenticationVector::AuthenticationVector() {
  m_Rand     = "";
  m_Xres     = "";
  m_Autn     = "";
  m_CkPrime  = "";
  m_IkPrime  = "";
  m_XresStar = "";
  m_Kausf    = "";
}

AuthenticationVector::~AuthenticationVector() {}

void AuthenticationVector::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const AuthenticationVector& o) {
  j             = nlohmann::json();
  j["avType"]   = o.m_AvType;
  j["rand"]     = o.m_Rand;
  j["xres"]     = o.m_Xres;
  j["autn"]     = o.m_Autn;
  j["ckPrime"]  = o.m_CkPrime;
  j["ikPrime"]  = o.m_IkPrime;
  j["xresStar"] = o.m_XresStar;
  j["kausf"]    = o.m_Kausf;
}

void from_json(const nlohmann::json& j, AuthenticationVector& o) {
  j.at("avType").get_to(o.m_AvType);
  j.at("rand").get_to(o.m_Rand);
  j.at("xres").get_to(o.m_Xres);
  j.at("autn").get_to(o.m_Autn);
  j.at("ckPrime").get_to(o.m_CkPrime);
  j.at("ikPrime").get_to(o.m_IkPrime);
  j.at("xresStar").get_to(o.m_XresStar);
  j.at("kausf").get_to(o.m_Kausf);
}

AvType AuthenticationVector::getAvType() const {
  return m_AvType;
}
void AuthenticationVector::setAvType(AvType const& value) {
  m_AvType = value;
}
std::string AuthenticationVector::getRand() const {
  return m_Rand;
}
void AuthenticationVector::setRand(std::string const& value) {
  m_Rand = value;
}
std::string AuthenticationVector::getXres() const {
  return m_Xres;
}
void AuthenticationVector::setXres(std::string const& value) {
  m_Xres = value;
}
std::string AuthenticationVector::getAutn() const {
  return m_Autn;
}
void AuthenticationVector::setAutn(std::string const& value) {
  m_Autn = value;
}
std::string AuthenticationVector::getCkPrime() const {
  return m_CkPrime;
}
void AuthenticationVector::setCkPrime(std::string const& value) {
  m_CkPrime = value;
}
std::string AuthenticationVector::getIkPrime() const {
  return m_IkPrime;
}
void AuthenticationVector::setIkPrime(std::string const& value) {
  m_IkPrime = value;
}
std::string AuthenticationVector::getXresStar() const {
  return m_XresStar;
}
void AuthenticationVector::setXresStar(std::string const& value) {
  m_XresStar = value;
}
std::string AuthenticationVector::getKausf() const {
  return m_Kausf;
}
void AuthenticationVector::setKausf(std::string const& value) {
  m_Kausf = value;
}

}  // namespace oai::model::udm

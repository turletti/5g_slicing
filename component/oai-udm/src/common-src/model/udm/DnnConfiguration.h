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
/*
 * DnnConfiguration.h
 *
 *
 */

#ifndef DnnConfiguration_H_
#define DnnConfiguration_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "Ambr.h"
#include "IpAddress.h"
#include "NiddInformation.h"
#include "PduSessionContinuityInd.h"
#include "PduSessionTypes.h"
#include "SscModes.h"
#include "SubscribedDefaultQos.h"
#include "UpSecurity.h"

namespace oai::model::udm {

/// <summary>
///
/// </summary>
class DnnConfiguration {
 public:
  DnnConfiguration();
  virtual ~DnnConfiguration();

  void validate();

  /////////////////////////////////////////////
  /// DnnConfiguration members

  /// <summary>
  ///
  /// </summary>
  PduSessionTypes getPduSessionTypes() const;
  void setPduSessionTypes(PduSessionTypes const& value);
  /// <summary>
  ///
  /// </summary>
  SscModes getSscModes() const;
  void setSscModes(SscModes const& value);
  /// <summary>
  ///
  /// </summary>
  bool isIwkEpsInd() const;
  void setIwkEpsInd(bool const value);
  bool iwkEpsIndIsSet() const;
  void unsetIwkEpsInd();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::SubscribedDefaultQos get5gQosProfile() const;
  void set5gQosProfile(oai::model::common::SubscribedDefaultQos const& value);
  bool _5gQosProfileIsSet() const;
  void unset_5gQosProfile();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Ambr getSessionAmbr() const;
  void setSessionAmbr(oai::model::common::Ambr const& value);
  bool sessionAmbrIsSet() const;
  void unsetSessionAmbr();
  /// <summary>
  ///
  /// </summary>
  std::string get3gppChargingCharacteristics() const;
  void set3gppChargingCharacteristics(std::string const& value);
  bool _3gppChargingCharacteristicsIsSet() const;
  void unset_3gppChargingCharacteristics();
  /// <summary>
  ///
  /// </summary>
  std::vector<IpAddress>& getStaticIpAddress();
  bool staticIpAddressIsSet() const;
  void unsetStaticIpAddress();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::UpSecurity getUpSecurity() const;
  void setUpSecurity(oai::model::common::UpSecurity const& value);
  bool upSecurityIsSet() const;
  void unsetUpSecurity();
  /// <summary>
  ///
  /// </summary>
  PduSessionContinuityInd getPduSessionContinuityInd() const;
  void setPduSessionContinuityInd(PduSessionContinuityInd const& value);
  bool pduSessionContinuityIndIsSet() const;
  void unsetPduSessionContinuityInd();
  /// <summary>
  ///
  /// </summary>
  bool isInvokeNefSelection() const;
  void setInvokeNefSelection(bool const value);
  bool invokeNefSelectionIsSet() const;
  void unsetInvokeNefSelection();
  /// <summary>
  ///
  /// </summary>
  std::string getNiddNefId() const;
  void setNiddNefId(std::string const& value);
  bool niddNefIdIsSet() const;
  void unsetNiddNefId();
  /// <summary>
  ///
  /// </summary>
  NiddInformation getNiddInfo() const;
  void setNiddInfo(NiddInformation const& value);
  bool niddInfoIsSet() const;
  void unsetNiddInfo();

  friend void to_json(nlohmann::json& j, const DnnConfiguration& o);
  friend void from_json(const nlohmann::json& j, DnnConfiguration& o);

 protected:
  PduSessionTypes m_PduSessionTypes;

  SscModes m_SscModes;

  bool m_IwkEpsInd;
  bool m_IwkEpsIndIsSet;
  oai::model::common::SubscribedDefaultQos m__5gQosProfile;
  bool m__5gQosProfileIsSet;
  oai::model::common::Ambr m_SessionAmbr;
  bool m_SessionAmbrIsSet;
  std::string m__3gppChargingCharacteristics;
  bool m__3gppChargingCharacteristicsIsSet;
  std::vector<IpAddress> m_StaticIpAddress;
  bool m_StaticIpAddressIsSet;
  oai::model::common::UpSecurity m_UpSecurity;
  bool m_UpSecurityIsSet;
  PduSessionContinuityInd m_PduSessionContinuityInd;
  bool m_PduSessionContinuityIndIsSet;
  bool m_InvokeNefSelection;
  bool m_InvokeNefSelectionIsSet;
  std::string m_NiddNefId;
  bool m_NiddNefIdIsSet;
  NiddInformation m_NiddInfo;
  bool m_NiddInfoIsSet;
};

}  // namespace oai::model::udm

#endif /* DnnConfiguration_H_ */
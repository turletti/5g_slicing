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
 * Nudm_EE
 * Nudm Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * Report.h
 *
 *
 */

#ifndef Report_H_
#define Report_H_

#include "ChangeOfSupiPeiAssociationReport.h"
#include "CnType.h"
#include "CmInfoReport.h"
#include "RoamingStatusReport.h"
#include <string>
#include "PlmnId.h"
#include "CnTypeChangeReport.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace oai::model::udm {

/// <summary>
///
/// </summary>
class Report {
 public:
  Report();
  virtual ~Report() = default;

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

  bool operator==(const Report& rhs) const;
  bool operator!=(const Report& rhs) const;

  /////////////////////////////////////////////
  /// Report members

  /// <summary>
  ///
  /// </summary>
  std::string getNewPei() const;
  void setNewPei(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  bool isRoaming() const;
  void setRoaming(bool const value);
  /// <summary>
  ///
  /// </summary>
  oai::model::common::PlmnId getNewServingPlmn() const;
  void setNewServingPlmn(oai::model::common::PlmnId const& value);
  /// <summary>
  ///
  /// </summary>
  CnType getNewCnType() const;
  void setNewCnType(CnType const& value);
  /// <summary>
  ///
  /// </summary>
  CnType getOldCnType() const;
  void setOldCnType(CnType const& value);
  bool oldCnTypeIsSet() const;
  void unsetOldCnType();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> getOldCmInfoList() const;
  void setOldCmInfoList(std::vector<std::string> const& value);
  bool oldCmInfoListIsSet() const;
  void unsetOldCmInfoList();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> getNewCmInfoList() const;
  void setNewCmInfoList(std::vector<std::string> const& value);

  friend void to_json(nlohmann::json& j, const Report& o);
  friend void from_json(const nlohmann::json& j, Report& o);

 protected:
  std::string m_NewPei;

  bool m_Roaming;

  oai::model::common::PlmnId m_NewServingPlmn;

  CnType m_NewCnType;

  CnType m_OldCnType;
  bool m_OldCnTypeIsSet;
  std::vector<std::string> m_OldCmInfoList;
  bool m_OldCmInfoListIsSet;
  std::vector<std::string> m_NewCmInfoList;

  // Helper overload for validate. Used when one model stores another model and
  // calls it's validate.
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;
};

}  // namespace oai::model::udm

#endif /* Report_H_ */

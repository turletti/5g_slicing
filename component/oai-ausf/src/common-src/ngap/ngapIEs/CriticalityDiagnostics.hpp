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

#ifndef _CRITICALITY_DIAGNOSTICS_H_
#define _CRITICALITY_DIAGNOSTICS_H_

#include <vector>

#include "IesCriticalityDiagnostics.hpp"

extern "C" {
#include "Ngap_CriticalityDiagnostics-IE-List.h"
#include "Ngap_CriticalityDiagnostics.h"
#include "Ngap_NGSetupFailure.h"
#include "Ngap_ProtocolIE-Field.h"
}

constexpr uint16_t kCriticalityDiagnosticsMaxNoOfErrors = 256;

namespace oai::ngap {

class CriticalityDiagnostics {
 public:
  CriticalityDiagnostics();
  virtual ~CriticalityDiagnostics();

  void setProcedureCodeValue(const Ngap_ProcedureCode_t&);
  bool getProcedureCodeValue(Ngap_ProcedureCode_t&) const;

  void setTriggeringMessageValue(const Ngap_TriggeringMessage_t&);
  bool getTriggeringMessageValue(Ngap_TriggeringMessage_t&) const;

  void setCriticalityValue(const Ngap_Criticality_t&);
  bool getCriticalityValue(Ngap_Criticality_t&) const;

  void setIesCriticalityDiagnosticsList(
      const std::vector<IesCriticalityDiagnostics>& iEsCriticalityDiagnostics);
  void getIesCriticalityDiagnosticsList(
      std::vector<IesCriticalityDiagnostics>& iEsCriticalityDiagnostics) const;

  int encode(Ngap_NGSetupFailure_t&) const;
  bool decode(const Ngap_CriticalityDiagnostics_t&);

 private:
  Ngap_ProcedureCode_t m_ProcedureCode;          // TODO: Optional
  Ngap_TriggeringMessage_t m_TriggeringMessage;  // TODO: Optional
  Ngap_Criticality_t m_ProcedureCriticality;     // TODO: Optional
  // Ngap_CriticalityDiagnostics_IE_List_t iEsCriticalityDiagnostics;	/*
  // TODO: Optional
  std::vector<IesCriticalityDiagnostics> m_IEsCriticalityDiagnostics;

  bool m_ProcedureCodeIsSet;
  bool m_TriggeringMessageIsSet;
  bool m_ProcedureCriticalityIsSet;
  int m_NumberOfIEsCriticalityDiagnostics;
};
}  // namespace oai::ngap

#endif

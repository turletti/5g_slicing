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

/*! \file supi_policy_decision.cpp
 \brief
 \author  Stefan Spettel
 \company Openairinterface Software Allianse
 \date 2022
 \email: stefan.spettel@eurecom.fr
 */

#include "supi_policy_decision.hpp"
#include <sstream>

using namespace oai::model::pcf;
using namespace oai::pcf::app::sm_policy;
using namespace oai::pcf::app;

status_code supi_policy_decision::decide(
    const SmPolicyContextData& context, SmPolicyDecision& decision) const {
  if (context.getSupi() != m_supi) {
    return status_code::CONTEXT_DENIED;
  }

  decision = m_decision;
  return status_code::CREATED;
}

std::string supi_policy_decision::get_supi() const {
  return m_supi;
}

std::string supi_policy_decision::to_string() const {
  std::stringstream ss;
  ss << "SUPI: " << m_supi << "\n";
  ss << " -- " << m_decision;
  return ss.str();
}

std::ostream& operator<<(
    std::ostream& os,
    const oai::pcf::app::sm_policy::supi_policy_decision& storage) {
  return (os << storage.to_string());
}

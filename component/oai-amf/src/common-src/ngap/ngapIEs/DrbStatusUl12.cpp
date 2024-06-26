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

#include "DrbStatusUl12.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
DrbStatusUl12::DrbStatusUl12() {}

//------------------------------------------------------------------------------
DrbStatusUl12::~DrbStatusUl12() {}

//------------------------------------------------------------------------------
void DrbStatusUl12::get(CountValueForPdcpSn12& countValue) const {
  countValue = m_PdcpValue;
}

//------------------------------------------------------------------------------
void DrbStatusUl12::set(const CountValueForPdcpSn12& countValue) {
  m_PdcpValue = countValue;
}

//------------------------------------------------------------------------------
bool DrbStatusUl12::encode(Ngap_DRBStatusUL12_t& ul12) const {
  if (!m_PdcpValue.encode(ul12.uL_COUNTValue)) {
    return false;
  }
  return true;
}

//------------------------------------------------------------------------------
bool DrbStatusUl12::decode(const Ngap_DRBStatusUL12_t& ul12) {
  if (!m_PdcpValue.decode(ul12.uL_COUNTValue)) {
    return false;
  }
  return true;
}
}  // namespace oai::ngap

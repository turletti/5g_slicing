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

#include "PduSessionResourceSetupListHoReq.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
PduSessionResourceSetupListHoReq::PduSessionResourceSetupListHoReq() {}

//------------------------------------------------------------------------------
PduSessionResourceSetupListHoReq::~PduSessionResourceSetupListHoReq() {}

//------------------------------------------------------------------------------
void PduSessionResourceSetupListHoReq::set(
    const std::vector<PduSessionResourceSetupItemHoReq>& list) {
  m_ItemList = list;
}

//------------------------------------------------------------------------------
void PduSessionResourceSetupListHoReq::get(
    std::vector<PduSessionResourceSetupItemHoReq>& list) const {
  list = m_ItemList;
}

//------------------------------------------------------------------------------
bool PduSessionResourceSetupListHoReq::encode(
    Ngap_PDUSessionResourceSetupListHOReq_t& resourceList) const {
  for (auto item : m_ItemList) {
    Ngap_PDUSessionResourceSetupItemHOReq_t* request =
        (Ngap_PDUSessionResourceSetupItemHOReq_t*) calloc(
            1, sizeof(Ngap_PDUSessionResourceSetupItemHOReq_t));
    if (!request) return false;
    if (!item.encode(*request)) return false;
    if (ASN_SEQUENCE_ADD(&resourceList.list, request) != 0) return false;
  }
  return true;
}

//------------------------------------------------------------------------------
bool PduSessionResourceSetupListHoReq::decode(
    const Ngap_PDUSessionResourceSetupListHOReq_t& resourceList) {
  for (int i = 0; i < resourceList.list.count; i++) {
    PduSessionResourceSetupItemHoReq item = {};
    if (!item.decode(*resourceList.list.array[i])) return false;
    m_ItemList.push_back(item);
  }
  return true;
}

}  // namespace oai::ngap

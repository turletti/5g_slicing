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

#include "QosFlowToBeForwardedList.hpp"

#include "logger.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
QosFlowToBeForwardedList::QosFlowToBeForwardedList() {}

//------------------------------------------------------------------------------
void QosFlowToBeForwardedList::set(
    const std::vector<QosFlowToBeForwardedItem>& qosList) {
  uint8_t number_items =
      (qosList.size() > kMaxNoOfQosFlows) ? kMaxNoOfQosFlows : qosList.size();
  m_ItemList.insert(
      m_ItemList.begin(), qosList.begin(), qosList.begin() + number_items);
}

//------------------------------------------------------------------------------
bool QosFlowToBeForwardedList::encode(
    Ngap_QosFlowToBeForwardedList*& qosList) const {
  qosList = (Ngap_QosFlowToBeForwardedList_t*) calloc(
      1, sizeof(Ngap_QosFlowToBeForwardedList_t));
  for (int i = 0; i < m_ItemList.size(); i++) {
    Ngap_QosFlowToBeForwardedItem_t* response =
        (Ngap_QosFlowToBeForwardedItem_t*) calloc(
            1, sizeof(Ngap_QosFlowToBeForwardedItem_t));
    if (!response) return false;
    if (!m_ItemList[i].encode(*response)) {
      Logger::ngap().debug("Encode QosFlowTowardedItem error");
      return false;
    }
    Logger::ngap().debug("QFI %d", response->qosFlowIdentifier);

    if (ASN_SEQUENCE_ADD(&qosList->list, response) != 0) {
      Logger::ngap().debug("Encode QosFlowTowardedList error");
      return false;
    }
  }
  return true;
}
}  // namespace oai::ngap

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

#include "QosFlowToBeForwardedItem.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
QosFlowToBeForwardedItem::QosFlowToBeForwardedItem() {}

//------------------------------------------------------------------------------
QosFlowToBeForwardedItem::~QosFlowToBeForwardedItem() {}

//------------------------------------------------------------------------------
void QosFlowToBeForwardedItem::set(const QosFlowIdentifier& qfi) {
  m_Qfi = qfi;
}

//------------------------------------------------------------------------------
bool QosFlowToBeForwardedItem::encode(
    Ngap_QosFlowToBeForwardedItem_t& qosFlowItem) const {
  if (!m_Qfi.encode(qosFlowItem.qosFlowIdentifier)) {
    return false;
  }
  return true;
}
}  // namespace oai::ngap

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

#ifndef _UNAVAILABLE_GUAMI_LIST_H_
#define _UNAVAILABLE_GUAMI_LIST_H_

#include <vector>

#include "UnavailableGuamiItem.hpp"

extern "C" {
#include "Ngap_UnavailableGUAMIList.h"
}

constexpr uint16_t kMaxNoOfServedGuami = 256;

namespace oai::ngap {

class UnavailableGuamiList {
 public:
  UnavailableGuamiList();
  virtual ~UnavailableGuamiList();

  void set(const std::vector<UnavailableGuamiItem>& list);
  void get(std::vector<UnavailableGuamiItem>& list) const;

  void addItem(const UnavailableGuamiItem& item);

  bool encode(Ngap_UnavailableGUAMIList_t&) const;
  bool decode(const Ngap_UnavailableGUAMIList_t&);

 private:
  std::vector<UnavailableGuamiItem> m_ItemList;
};

}  // namespace oai::ngap

#endif

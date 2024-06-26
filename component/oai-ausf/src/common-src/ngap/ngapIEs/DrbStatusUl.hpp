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

#ifndef _DRB_STATUS_UL_H_
#define _DRB_STATUS_UL_H_

#include <optional>

#include "DrbStatusUl12.hpp"
#include "DrbStatusUl18.hpp"

extern "C" {
#include "Ngap_DRBStatusUL.h"
}

namespace oai::ngap {
class DrbStatusUl {
 public:
  DrbStatusUl();
  virtual ~DrbStatusUl();

  void setDrbStatusUl(const DrbStatusUl18& ul18);
  void getDrbStatusUl(std::optional<DrbStatusUl18>& ul18) const;

  void setDrbStatusUl(const DrbStatusUl12& ul12);
  void getDrbStatusUl(std::optional<DrbStatusUl12>& ul12) const;

  bool encode(Ngap_DRBStatusUL_t& ul) const;
  bool decode(const Ngap_DRBStatusUL_t& ul);

 private:
  std::optional<DrbStatusUl18> m_Ul18;
  std::optional<DrbStatusUl12> m_Ul12;
};
}  // namespace oai::ngap
#endif

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

#ifndef _DRB_STATUS_UL18_H_
#define _DRB_STATUS_UL18_H_

#include "CountValueForPdcpSn18.hpp"

extern "C" {
#include "Ngap_DRBStatusUL18.h"
}

namespace oai::ngap {

class DrbStatusUl18 {
 public:
  DrbStatusUl18();
  virtual ~DrbStatusUl18();

  void get(CountValueForPdcpSn18& countValue) const;
  void set(const CountValueForPdcpSn18& countValue);

  bool encode(Ngap_DRBStatusUL18_t& ul18) const;
  bool decode(const Ngap_DRBStatusUL18_t& ul18);

 private:
  CountValueForPdcpSn18 m_PdcpValue;  // Mandatory
  // TODO: Receive Status of UL PDCP SDUs //Optional
};

}  // namespace oai::ngap
#endif

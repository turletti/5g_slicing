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
#ifndef _AMF_SET_ID_H_
#define _AMF_SET_ID_H_

#include <string>
constexpr uint16_t kAmfSetIdMaxValue = 1023;

extern "C" {
#include "Ngap_AMFSetID.h"
}

namespace oai::ngap {

class AmfSetId {
 public:
  AmfSetId();
  virtual ~AmfSetId();

  bool set(const std::string&);
  bool set(const uint16_t&);

  void get(std::string&) const;
  void get(uint16_t&) const;

  bool encode(Ngap_AMFSetID_t&) const;
  bool decode(const Ngap_AMFSetID_t&);

 private:
  uint16_t m_Id;
};

}  // namespace oai::ngap

#endif

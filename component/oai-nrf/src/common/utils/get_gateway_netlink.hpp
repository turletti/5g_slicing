/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the Apache License, Version 2.0  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
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

#ifndef FILE_GET_GATEWAY_NETLINK_HPP_SEEN
#define FILE_GET_GATEWAY_NETLINK_HPP_SEEN

#include <string>

namespace util {
bool get_iface_l2_addr(const std::string& iface, std::string& mac);
bool get_gateway_and_iface(std::string& gw, std::string& iface);
}  // namespace util
#endif /* FILE_GET_GATEWAY_NETLINK_HPP_SEEN */

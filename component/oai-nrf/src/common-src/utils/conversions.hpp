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

#ifndef FILE_CONVERSIONS_HPP_SEEN
#define FILE_CONVERSIONS_HPP_SEEN

#include <netinet/in.h>
#include <stdint.h>
#include <stdlib.h>

#include <string>

/* Used to format an uint32_t containing an ipv4 address */
#define IN_ADDR_FMT "%u.%u.%u.%u"
#define PRI_IN_ADDR(aDDRESS)                                                   \
  (uint8_t)((aDDRESS.s_addr) & 0x000000ff),                                    \
      (uint8_t) (((aDDRESS.s_addr) & 0x0000ff00) >> 8),                        \
      (uint8_t) (((aDDRESS.s_addr) & 0x00ff0000) >> 16),                       \
      (uint8_t) (((aDDRESS.s_addr) & 0xff000000) >> 24)

#define IPV4_ADDR_DISPLAY_8(aDDRESS)                                           \
  (aDDRESS)[0], (aDDRESS)[1], (aDDRESS)[2], (aDDRESS)[3]

class conv {
 public:
  static void hexa_to_ascii(uint8_t* from, char* to, size_t length);
  static int ascii_to_hex(uint8_t* dst, const char* h);
  static struct in_addr fromString(const std::string addr4);
  static struct in6_addr fromStringV6(const std::string& addr6);
  static std::string toString(const struct in_addr& inaddr);
  static std::string toString(const struct in6_addr& in6addr);
  static std::string mccToString(
      const uint8_t digit1, const uint8_t digit2, const uint8_t digit3);
  static std::string mncToString(
      const uint8_t digit1, const uint8_t digit2, const uint8_t digit3);
  // from /tags/ueId to .tags.ueId for MongoDB
  static void to_mongodb_path(std::string& input);
  static std::string uint8_to_hex_string(const uint8_t* v, const size_t s);
  static void hex_str_to_uint8(const char* string, uint8_t* des);
  static std::string url_decode(std::string& value);

  static bool string_to_int8(const std::string& str, uint8_t& value);
  static bool string_to_int32(const std::string& str, uint32_t& value);
  static bool string_to_int(
      const std::string& str, uint32_t& value, const uint8_t& base);
  static bool string_hex_to_int(const std::string& value_str, uint32_t& value);
  static uint32_t string_hex_to_int(const std::string& value_str);
  static void int_to_string_hex(
      uint32_t value, std::string& value_str, uint8_t length = 0);
  static std::string uint32_to_hex_string(uint32_t value);
  static std::string tmsi_to_string(const uint32_t tmsi);
};
#endif /* FILE_CONVERSIONS_HPP_SEEN */

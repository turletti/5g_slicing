/**
 * 3gpp-monitoring-event
 * API for Monitoring Event. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DddTrafficDescriptor.h
 *
 * Contains a Traffic Descriptor.
 */

#ifndef DddTrafficDescriptor_H_
#define DddTrafficDescriptor_H_

#include <nlohmann/json.hpp>
#include <string>

#include "Ipv6Addr.h"

namespace oai::nef::model {

/// <summary>
/// Contains a Traffic Descriptor.
/// </summary>
class DddTrafficDescriptor {
 public:
  DddTrafficDescriptor();
  virtual ~DddTrafficDescriptor() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const DddTrafficDescriptor& rhs) const;
  bool operator!=(const DddTrafficDescriptor& rhs) const;

  /////////////////////////////////////////////
  /// DddTrafficDescriptor members

  /// <summary>
  /// String identifying a IPv4 address formatted in the \&quot;dotted
  /// decimal\&quot; notation as defined in RFC 1166.
  /// </summary>
  std::string getIpv4Addr() const;
  void setIpv4Addr(std::string const& value);
  bool ipv4AddrIsSet() const;
  void unsetIpv4Addr();
  /// <summary>
  ///
  /// </summary>
  Ipv6Addr getIpv6Addr() const;
  void setIpv6Addr(Ipv6Addr const& value);
  bool ipv6AddrIsSet() const;
  void unsetIpv6Addr();
  /// <summary>
  /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
  /// </summary>
  int32_t getPortNumber() const;
  void setPortNumber(int32_t const value);
  bool portNumberIsSet() const;
  void unsetPortNumber();
  /// <summary>
  /// String identifying a MAC address formatted in the hexadecimal notation
  /// according to clause 1.1 and clause 2.1 of RFC 7042
  /// </summary>
  std::string getMacAddr() const;
  void setMacAddr(std::string const& value);
  bool macAddrIsSet() const;
  void unsetMacAddr();

  friend void to_json(nlohmann::json& j, const DddTrafficDescriptor& o);
  friend void from_json(const nlohmann::json& j, DddTrafficDescriptor& o);

 protected:
  std::string m_Ipv4Addr;
  bool m_Ipv4AddrIsSet;
  Ipv6Addr m_Ipv6Addr;
  bool m_Ipv6AddrIsSet;
  int32_t m_PortNumber;
  bool m_PortNumberIsSet;
  std::string m_MacAddr;
  bool m_MacAddrIsSet;
};

}  // namespace oai::nef::model

#endif /* DddTrafficDescriptor_H_ */
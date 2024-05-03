/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DefaultNotificationSubscription.h
 *
 *
 */

#ifndef DefaultNotificationSubscription_H_
#define DefaultNotificationSubscription_H_

#include "N1MessageClass.h"
#include "N2InformationClass.h"
#include <string>
#include "NotificationType.h"
#include <nlohmann/json.hpp>

namespace oai::model::nrf {

/// <summary>
///
/// </summary>
class DefaultNotificationSubscription {
 public:
  DefaultNotificationSubscription();
  virtual ~DefaultNotificationSubscription();

  void validate();

  /////////////////////////////////////////////
  /// DefaultNotificationSubscription members

  /// <summary>
  ///
  /// </summary>
  NotificationType getNotificationType() const;
  void setNotificationType(NotificationType const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getCallbackUri() const;
  void setCallbackUri(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  N1MessageClass getN1MessageClass() const;
  void setN1MessageClass(N1MessageClass const& value);
  bool n1MessageClassIsSet() const;
  void unsetN1MessageClass();
  /// <summary>
  ///
  /// </summary>
  N2InformationClass getN2InformationClass() const;
  void setN2InformationClass(N2InformationClass const& value);
  bool n2InformationClassIsSet() const;
  void unsetN2InformationClass();

  friend void to_json(
      nlohmann::json& j, const DefaultNotificationSubscription& o);
  friend void from_json(
      const nlohmann::json& j, DefaultNotificationSubscription& o);

 protected:
  NotificationType m_NotificationType;

  std::string m_CallbackUri;

  N1MessageClass m_N1MessageClass;
  bool m_N1MessageClassIsSet;
  N2InformationClass m_N2InformationClass;
  bool m_N2InformationClassIsSet;
};

}  // namespace oai::model::nrf

#endif /* DefaultNotificationSubscription_H_ */
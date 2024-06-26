/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NonUEN2MessageNotificationIndividualSubscriptionDocumentApi.h"

#include "Helpers.h"
#include "amf_config.hpp"

extern oai::config::amf_config amf_cfg;

namespace oai {
namespace amf {
namespace api {

using namespace oai::model::common::helpers;

NonUEN2MessageNotificationIndividualSubscriptionDocumentApi::
    NonUEN2MessageNotificationIndividualSubscriptionDocumentApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void NonUEN2MessageNotificationIndividualSubscriptionDocumentApi::init() {
  setupRoutes();
}

void NonUEN2MessageNotificationIndividualSubscriptionDocumentApi::
    setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Delete(
      *router,
      base + amf_sbi_helper::
                 AmfCommPathNonUeN1N2MessageSubscriptionsn2NotifySubscriptionId,
      Routes::bind(
          &NonUEN2MessageNotificationIndividualSubscriptionDocumentApi::
              non_ue_n2_info_un_subscribe_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &NonUEN2MessageNotificationIndividualSubscriptionDocumentApi::
          non_uen2_message_notification_individual_subscription_document_api_default_handler,
      this));
}

void NonUEN2MessageNotificationIndividualSubscriptionDocumentApi::
    non_ue_n2_info_un_subscribe_handler(
        const Pistache::Rest::Request& request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto n2NotifySubscriptionId =
      request.param(":n2NotifySubscriptionId").as<std::string>();

  try {
    this->non_ue_n2_info_un_subscribe(n2NotifySubscriptionId, response);
  } catch (nlohmann::detail::exception& e) {
    // send a 400 error
    response.send(Pistache::Http::Code::Bad_Request, e.what());
    return;
  } catch (std::exception& e) {
    // send a 500 error
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    return;
  }
}

void NonUEN2MessageNotificationIndividualSubscriptionDocumentApi::
    non_uen2_message_notification_individual_subscription_document_api_default_handler(
        const Pistache::Rest::Request&,
        Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace api
}  // namespace amf
}  // namespace oai

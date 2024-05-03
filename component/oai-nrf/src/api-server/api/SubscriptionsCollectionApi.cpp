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

#include "SubscriptionsCollectionApi.h"
#include "Helpers.h"
#include "nrf_config.hpp"

extern std::unique_ptr<oai::config::nrf::nrf_config> nrf_cfg;

namespace oai {
namespace nrf {
namespace api {

using namespace oai::model::common::helpers;
using namespace oai::model::nrf;

SubscriptionsCollectionApi::SubscriptionsCollectionApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void SubscriptionsCollectionApi::init() {
  setupRoutes();
}

void SubscriptionsCollectionApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(
      *router,
      base + nrf_cfg->local().get_sbi().get_api_version() + "/subscriptions",
      Routes::bind(
          &SubscriptionsCollectionApi::create_subscription_handler, this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &SubscriptionsCollectionApi::subscriptions_collection_api_default_handler,
      this));
}

void SubscriptionsCollectionApi::create_subscription_handler(
    const Pistache::Rest::Request& request,
    Pistache::Http::ResponseWriter response) {
  // Getting the body param

  SubscriptionData subscriptionData;

  try {
    nlohmann::json::parse(request.body()).get_to(subscriptionData);
    this->create_subscription(subscriptionData, response);
  } catch (nlohmann::detail::exception& e) {
    // send a 400 error
    response.send(Pistache::Http::Code::Bad_Request, e.what());
    return;
  } catch (Pistache::Http::HttpError& e) {
    response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
    return;
  } catch (std::exception& e) {
    // send a 500 error
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    return;
  }
}

void SubscriptionsCollectionApi::subscriptions_collection_api_default_handler(
    const Pistache::Rest::Request&, Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace api
}  // namespace nrf
}  // namespace oai
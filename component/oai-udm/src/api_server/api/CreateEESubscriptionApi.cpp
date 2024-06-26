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
/**
 * Nudm_EE
 * Nudm Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "CreateEESubscriptionApi.h"

#include "Helpers.h"
#include "udm_sbi_helper.hpp"
#include "udm_config.hpp"

extern oai::udm::config::udm_config udm_cfg;

namespace oai::udm::api {

using namespace oai::udm::config;
using namespace oai::model::common::helpers;
using namespace oai::model::udm;

CreateEESubscriptionApi::CreateEESubscriptionApi(
    const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr) {}

void CreateEESubscriptionApi::init() {
  setupRoutes();
}

void CreateEESubscriptionApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(
      *router,
      udm_sbi_helper::EventExposureServiceBase +
          udm_sbi_helper::UdmEePathEeSubscription,
      Routes::bind(
          &CreateEESubscriptionApi::create_ee_subscription_handler, this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &CreateEESubscriptionApi::create_ee_subscription_api_default_handler,
      this));
}

std::pair<Pistache::Http::Code, std::string>
CreateEESubscriptionApi::handleParsingException(
    const std::exception& ex) const noexcept {
  try {
    throw;
  } catch (nlohmann::detail::exception& e) {
    return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
  } catch (ValidationException& e) {
    return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
  } catch (std::exception& e) {
    return std::make_pair(
        Pistache::Http::Code::Internal_Server_Error, e.what());
  }
}

std::pair<Pistache::Http::Code, std::string>
CreateEESubscriptionApi::handleOperationException(
    const std::exception& ex) const noexcept {
  return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void CreateEESubscriptionApi::create_ee_subscription_handler(
    const Pistache::Rest::Request& request,
    Pistache::Http::ResponseWriter response) {
  try {
    // Getting the path params
    auto ueIdentity = request.param(":ueIdentity").as<std::string>();

    // Getting the body param

    EeSubscription eeSubscription;

    try {
      nlohmann::json::parse(request.body()).get_to(eeSubscription);
      eeSubscription.validate();
    } catch (std::exception& e) {
      const std::pair<Pistache::Http::Code, std::string> errorInfo =
          this->handleParsingException(e);
      response.send(errorInfo.first, errorInfo.second);
      return;
    }

    try {
      this->create_ee_subscription(ueIdentity, eeSubscription, response);
    } catch (Pistache::Http::HttpError& e) {
      response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
      return;
    } catch (std::exception& e) {
      const std::pair<Pistache::Http::Code, std::string> errorInfo =
          this->handleOperationException(e);
      response.send(errorInfo.first, errorInfo.second);
      return;
    }

  } catch (std::exception& e) {
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
  }
}

void CreateEESubscriptionApi::create_ee_subscription_api_default_handler(
    const Pistache::Rest::Request&, Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace oai::udm::api

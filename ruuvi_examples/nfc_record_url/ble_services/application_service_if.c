#include "application_service_if.h"
#include <stdint.h>

#include "app_scheduler.h"
#include "nrf_error.h"

#define NRF_LOG_MODULE_NAME "SERVICE"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"


/**
 * @brief Function for initializing the Application Services.
 *
 * @return NRF_SUCCESS on successful initialization of services, otherwise an error code.
 */
uint32_t application_services_init(void)
{
  return NRF_SUCCESS;
}

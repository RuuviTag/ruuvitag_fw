/* Copyright (c) 2015 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

#ifndef APPLICATION_SERVICE_IF_H
#define APPLICATION_SERVICE_IF_H

#include <stdint.h>

/**
 * @brief Function for initializing the Application Services.
 *
 * @return NRF_SUCCESS on successful initialization of services, otherwise an error code.
 */
uint32_t application_services_init(void);

#endif

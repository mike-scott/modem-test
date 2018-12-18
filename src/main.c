/*
 * Copyright (c) 2018 Foundries.io
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <misc/printk.h>
#include <device.h>
#include <gpio.h>
#include <uart.h>

void main(void)
{
	while (1) {
		printk("[%llu]\n", k_uptime_get());

		k_sleep(K_SECONDS(5));
	}
}

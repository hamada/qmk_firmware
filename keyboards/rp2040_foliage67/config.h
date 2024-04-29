// Copyright 2023 hamada (@hamada)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


/* This seems default. But set explicitly. */
/* firmware without setting theese explicitly doesn't work as split keyboard. */
#define MASTER_RIGHT

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define DEBOUNCE 5

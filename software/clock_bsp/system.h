/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'CPU' in SOPC Builder design 'clock'
 * SOPC Builder design path: ../../clock.sopcinfo
 *
 * Generated: Sun Oct 03 10:03:36 CST 2021
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00002820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0xe
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00001020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0xe
#define ALT_CPU_NAME "CPU"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00001000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00002820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0xe
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00001020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0xe
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00001000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_UART
#define __ALTERA_NIOS2_GEN2


/*
 * RAM configuration
 *
 */

#define ALT_MODULE_CLASS_RAM altera_avalon_onchip_memory2
#define RAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_BASE 0x1000
#define RAM_CONTENTS_INFO ""
#define RAM_DUAL_PORT 0
#define RAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM_INIT_CONTENTS_FILE "clock_RAM"
#define RAM_INIT_MEM_CONTENT 1
#define RAM_INSTANCE_ID "NONE"
#define RAM_IRQ -1
#define RAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM_NAME "/dev/RAM"
#define RAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM_RAM_BLOCK_TYPE "AUTO"
#define RAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM_SINGLE_CLOCK_OP 0
#define RAM_SIZE_MULTIPLE 1
#define RAM_SIZE_VALUE 4096
#define RAM_SPAN 4096
#define RAM_TYPE "altera_avalon_onchip_memory2"
#define RAM_WRITABLE 1


/*
 * REG_Bd configuration
 *
 */

#define ALT_MODULE_CLASS_REG_Bd altera_avalon_pio
#define REG_BD_BASE 0x3180
#define REG_BD_BIT_CLEARING_EDGE_REGISTER 0
#define REG_BD_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REG_BD_CAPTURE 0
#define REG_BD_DATA_WIDTH 8
#define REG_BD_DO_TEST_BENCH_WIRING 0
#define REG_BD_DRIVEN_SIM_VALUE 0
#define REG_BD_EDGE_TYPE "NONE"
#define REG_BD_FREQ 50000000
#define REG_BD_HAS_IN 1
#define REG_BD_HAS_OUT 0
#define REG_BD_HAS_TRI 0
#define REG_BD_IRQ 2
#define REG_BD_IRQ_INTERRUPT_CONTROLLER_ID 0
#define REG_BD_IRQ_TYPE "LEVEL"
#define REG_BD_NAME "/dev/REG_Bd"
#define REG_BD_RESET_VALUE 0
#define REG_BD_SPAN 16
#define REG_BD_TYPE "altera_avalon_pio"


/*
 * REG_Bn configuration
 *
 */

#define ALT_MODULE_CLASS_REG_Bn altera_avalon_pio
#define REG_BN_BASE 0x3170
#define REG_BN_BIT_CLEARING_EDGE_REGISTER 0
#define REG_BN_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REG_BN_CAPTURE 0
#define REG_BN_DATA_WIDTH 8
#define REG_BN_DO_TEST_BENCH_WIRING 0
#define REG_BN_DRIVEN_SIM_VALUE 0
#define REG_BN_EDGE_TYPE "NONE"
#define REG_BN_FREQ 50000000
#define REG_BN_HAS_IN 1
#define REG_BN_HAS_OUT 0
#define REG_BN_HAS_TRI 0
#define REG_BN_IRQ 3
#define REG_BN_IRQ_INTERRUPT_CONTROLLER_ID 0
#define REG_BN_IRQ_TYPE "LEVEL"
#define REG_BN_NAME "/dev/REG_Bn"
#define REG_BN_RESET_VALUE 0
#define REG_BN_SPAN 16
#define REG_BN_TYPE "altera_avalon_pio"


/*
 * REG_Bs configuration
 *
 */

#define ALT_MODULE_CLASS_REG_Bs altera_avalon_pio
#define REG_BS_BASE 0x3160
#define REG_BS_BIT_CLEARING_EDGE_REGISTER 0
#define REG_BS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REG_BS_CAPTURE 0
#define REG_BS_DATA_WIDTH 8
#define REG_BS_DO_TEST_BENCH_WIRING 0
#define REG_BS_DRIVEN_SIM_VALUE 0
#define REG_BS_EDGE_TYPE "NONE"
#define REG_BS_FREQ 50000000
#define REG_BS_HAS_IN 1
#define REG_BS_HAS_OUT 0
#define REG_BS_HAS_TRI 0
#define REG_BS_IRQ 4
#define REG_BS_IRQ_INTERRUPT_CONTROLLER_ID 0
#define REG_BS_IRQ_TYPE "LEVEL"
#define REG_BS_NAME "/dev/REG_Bs"
#define REG_BS_RESET_VALUE 0
#define REG_BS_SPAN 16
#define REG_BS_TYPE "altera_avalon_pio"


/*
 * REG_Bu configuration
 *
 */

#define ALT_MODULE_CLASS_REG_Bu altera_avalon_pio
#define REG_BU_BASE 0x3190
#define REG_BU_BIT_CLEARING_EDGE_REGISTER 0
#define REG_BU_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REG_BU_CAPTURE 0
#define REG_BU_DATA_WIDTH 8
#define REG_BU_DO_TEST_BENCH_WIRING 0
#define REG_BU_DRIVEN_SIM_VALUE 0
#define REG_BU_EDGE_TYPE "NONE"
#define REG_BU_FREQ 50000000
#define REG_BU_HAS_IN 1
#define REG_BU_HAS_OUT 0
#define REG_BU_HAS_TRI 0
#define REG_BU_IRQ 1
#define REG_BU_IRQ_INTERRUPT_CONTROLLER_ID 0
#define REG_BU_IRQ_TYPE "LEVEL"
#define REG_BU_NAME "/dev/REG_Bu"
#define REG_BU_RESET_VALUE 0
#define REG_BU_SPAN 16
#define REG_BU_TYPE "altera_avalon_pio"


/*
 * REG_H1 configuration
 *
 */

#define ALT_MODULE_CLASS_REG_H1 altera_avalon_pio
#define REG_H1_BASE 0x3150
#define REG_H1_BIT_CLEARING_EDGE_REGISTER 0
#define REG_H1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REG_H1_CAPTURE 0
#define REG_H1_DATA_WIDTH 8
#define REG_H1_DO_TEST_BENCH_WIRING 0
#define REG_H1_DRIVEN_SIM_VALUE 0
#define REG_H1_EDGE_TYPE "NONE"
#define REG_H1_FREQ 50000000
#define REG_H1_HAS_IN 0
#define REG_H1_HAS_OUT 1
#define REG_H1_HAS_TRI 0
#define REG_H1_IRQ -1
#define REG_H1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define REG_H1_IRQ_TYPE "NONE"
#define REG_H1_NAME "/dev/REG_H1"
#define REG_H1_RESET_VALUE 0
#define REG_H1_SPAN 16
#define REG_H1_TYPE "altera_avalon_pio"


/*
 * REG_H2 configuration
 *
 */

#define ALT_MODULE_CLASS_REG_H2 altera_avalon_pio
#define REG_H2_BASE 0x3140
#define REG_H2_BIT_CLEARING_EDGE_REGISTER 0
#define REG_H2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REG_H2_CAPTURE 0
#define REG_H2_DATA_WIDTH 8
#define REG_H2_DO_TEST_BENCH_WIRING 0
#define REG_H2_DRIVEN_SIM_VALUE 0
#define REG_H2_EDGE_TYPE "NONE"
#define REG_H2_FREQ 50000000
#define REG_H2_HAS_IN 0
#define REG_H2_HAS_OUT 1
#define REG_H2_HAS_TRI 0
#define REG_H2_IRQ -1
#define REG_H2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define REG_H2_IRQ_TYPE "NONE"
#define REG_H2_NAME "/dev/REG_H2"
#define REG_H2_RESET_VALUE 0
#define REG_H2_SPAN 16
#define REG_H2_TYPE "altera_avalon_pio"


/*
 * REG_LED configuration
 *
 */

#define ALT_MODULE_CLASS_REG_LED altera_avalon_pio
#define REG_LED_BASE 0x30f0
#define REG_LED_BIT_CLEARING_EDGE_REGISTER 0
#define REG_LED_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REG_LED_CAPTURE 0
#define REG_LED_DATA_WIDTH 8
#define REG_LED_DO_TEST_BENCH_WIRING 0
#define REG_LED_DRIVEN_SIM_VALUE 0
#define REG_LED_EDGE_TYPE "NONE"
#define REG_LED_FREQ 50000000
#define REG_LED_HAS_IN 0
#define REG_LED_HAS_OUT 1
#define REG_LED_HAS_TRI 0
#define REG_LED_IRQ -1
#define REG_LED_IRQ_INTERRUPT_CONTROLLER_ID -1
#define REG_LED_IRQ_TYPE "NONE"
#define REG_LED_NAME "/dev/REG_LED"
#define REG_LED_RESET_VALUE 0
#define REG_LED_SPAN 16
#define REG_LED_TYPE "altera_avalon_pio"


/*
 * REG_M1 configuration
 *
 */

#define ALT_MODULE_CLASS_REG_M1 altera_avalon_pio
#define REG_M1_BASE 0x3130
#define REG_M1_BIT_CLEARING_EDGE_REGISTER 0
#define REG_M1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REG_M1_CAPTURE 0
#define REG_M1_DATA_WIDTH 8
#define REG_M1_DO_TEST_BENCH_WIRING 0
#define REG_M1_DRIVEN_SIM_VALUE 0
#define REG_M1_EDGE_TYPE "NONE"
#define REG_M1_FREQ 50000000
#define REG_M1_HAS_IN 0
#define REG_M1_HAS_OUT 1
#define REG_M1_HAS_TRI 0
#define REG_M1_IRQ -1
#define REG_M1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define REG_M1_IRQ_TYPE "NONE"
#define REG_M1_NAME "/dev/REG_M1"
#define REG_M1_RESET_VALUE 0
#define REG_M1_SPAN 16
#define REG_M1_TYPE "altera_avalon_pio"


/*
 * REG_M2 configuration
 *
 */

#define ALT_MODULE_CLASS_REG_M2 altera_avalon_pio
#define REG_M2_BASE 0x3120
#define REG_M2_BIT_CLEARING_EDGE_REGISTER 0
#define REG_M2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REG_M2_CAPTURE 0
#define REG_M2_DATA_WIDTH 8
#define REG_M2_DO_TEST_BENCH_WIRING 0
#define REG_M2_DRIVEN_SIM_VALUE 0
#define REG_M2_EDGE_TYPE "NONE"
#define REG_M2_FREQ 50000000
#define REG_M2_HAS_IN 0
#define REG_M2_HAS_OUT 1
#define REG_M2_HAS_TRI 0
#define REG_M2_IRQ -1
#define REG_M2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define REG_M2_IRQ_TYPE "NONE"
#define REG_M2_NAME "/dev/REG_M2"
#define REG_M2_RESET_VALUE 0
#define REG_M2_SPAN 16
#define REG_M2_TYPE "altera_avalon_pio"


/*
 * REG_S1 configuration
 *
 */

#define ALT_MODULE_CLASS_REG_S1 altera_avalon_pio
#define REG_S1_BASE 0x3110
#define REG_S1_BIT_CLEARING_EDGE_REGISTER 0
#define REG_S1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REG_S1_CAPTURE 0
#define REG_S1_DATA_WIDTH 8
#define REG_S1_DO_TEST_BENCH_WIRING 0
#define REG_S1_DRIVEN_SIM_VALUE 0
#define REG_S1_EDGE_TYPE "NONE"
#define REG_S1_FREQ 50000000
#define REG_S1_HAS_IN 0
#define REG_S1_HAS_OUT 1
#define REG_S1_HAS_TRI 0
#define REG_S1_IRQ -1
#define REG_S1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define REG_S1_IRQ_TYPE "NONE"
#define REG_S1_NAME "/dev/REG_S1"
#define REG_S1_RESET_VALUE 0
#define REG_S1_SPAN 16
#define REG_S1_TYPE "altera_avalon_pio"


/*
 * REG_S2 configuration
 *
 */

#define ALT_MODULE_CLASS_REG_S2 altera_avalon_pio
#define REG_S2_BASE 0x3100
#define REG_S2_BIT_CLEARING_EDGE_REGISTER 0
#define REG_S2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REG_S2_CAPTURE 0
#define REG_S2_DATA_WIDTH 8
#define REG_S2_DO_TEST_BENCH_WIRING 0
#define REG_S2_DRIVEN_SIM_VALUE 0
#define REG_S2_EDGE_TYPE "NONE"
#define REG_S2_FREQ 50000000
#define REG_S2_HAS_IN 0
#define REG_S2_HAS_OUT 1
#define REG_S2_HAS_TRI 0
#define REG_S2_IRQ -1
#define REG_S2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define REG_S2_IRQ_TYPE "NONE"
#define REG_S2_NAME "/dev/REG_S2"
#define REG_S2_RESET_VALUE 0
#define REG_S2_SPAN 16
#define REG_S2_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/UART"
#define ALT_STDERR_BASE 0x3020
#define ALT_STDERR_DEV UART
#define ALT_STDERR_IS_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_uart"
#define ALT_STDIN "/dev/UART"
#define ALT_STDIN_BASE 0x3020
#define ALT_STDIN_DEV UART
#define ALT_STDIN_IS_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_uart"
#define ALT_STDOUT "/dev/UART"
#define ALT_STDOUT_BASE 0x3020
#define ALT_STDOUT_DEV UART
#define ALT_STDOUT_IS_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_uart"
#define ALT_SYSTEM_NAME "clock"


/*
 * TIMER configuration
 *
 */

#define ALT_MODULE_CLASS_TIMER altera_avalon_timer
#define TIMER_ALWAYS_RUN 0
#define TIMER_BASE 0x3000
#define TIMER_COUNTER_SIZE 32
#define TIMER_FIXED_PERIOD 0
#define TIMER_FREQ 50000000
#define TIMER_IRQ 5
#define TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_LOAD_VALUE 49999999
#define TIMER_MULT 1.0
#define TIMER_NAME "/dev/TIMER"
#define TIMER_PERIOD 1
#define TIMER_PERIOD_UNITS "s"
#define TIMER_RESET_OUTPUT 0
#define TIMER_SNAPSHOT 1
#define TIMER_SPAN 32
#define TIMER_TICKS_PER_SEC 1
#define TIMER_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_TYPE "altera_avalon_timer"


/*
 * UART configuration
 *
 */

#define ALT_MODULE_CLASS_UART altera_avalon_uart
#define UART_BASE 0x3020
#define UART_BAUD 115200
#define UART_DATA_BITS 8
#define UART_FIXED_BAUD 1
#define UART_FREQ 50000000
#define UART_IRQ 0
#define UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_NAME "/dev/UART"
#define UART_PARITY 'N'
#define UART_SIM_CHAR_STREAM ""
#define UART_SIM_TRUE_BAUD 0
#define UART_SPAN 32
#define UART_STOP_BITS 1
#define UART_SYNC_REG_DEPTH 2
#define UART_TYPE "altera_avalon_uart"
#define UART_USE_CTS_RTS 0
#define UART_USE_EOP_REGISTER 0


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none

#endif /* __SYSTEM_H_ */

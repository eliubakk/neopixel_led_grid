/****************************
 * Written by Erik Liubakka *
 ****************************/

/********************************************************************
 *                                                                  *
 * For use with the BCM2836 Broadcom chip on the Raspberry Pi 2     *
 *                                                                  *
 * Registers and functions for the following Peripherals            *
 *      - PWM                                                       *
 *                                                                  *
 ********************************************************************/

/********************************************************************
 *                          UPDATE HISTORY                          *
 ********************************************************************
 *     DATE     |                   WHAT CHANGED                    *
 ********************************************************************
 *  2019-06-18  | Initial Revision                                  *
 *  2019-12-10  | Moved PWM definitions from BCM2836_HW.*           *
 ********************************************************************/

#ifndef __PWM_H__
#define __PWM_H__

/*************************************************************************************
 *    INCLUDES                                                                       *
 *************************************************************************************/

#include "BCM2836_HW.h"

/*************************************************************************************
 *    DEFINES                                                                        *
 *************************************************************************************/
/* Base Address */
#define PWM_BASE	(P_BASE + 0x20C000)

#define PWM_FIF1	HW_IO(PWM_BASE + 0x18)	/* PWM FIFO Input */

/*************************************************************************************
 *    MACROS                                                                         *
 *************************************************************************************/


/*************************************************************************************
 *    TYPE/ENUM DEFINITIONS                                                          *
 *************************************************************************************/

typedef uint8_t		PWM_channel_t;
typedef uint8_t		PWM_port_t;
typedef float		PWM_period_t;

typedef struct pwm_config
{
	PWM_channel_t 	channel;
	PWM_port_t    	port;
	PWM_period_t    period;
} PWM_config_t;

/*************************************************************************************
 *    GLOBAL VARIABLES                                                               *
 *************************************************************************************/


/*************************************************************************************
 *    GLOBAL FUNCTION PROTOTYPES                                                     *
 *************************************************************************************/

uint8_t PWM_init(PWM_config_t cfg);

void PWM_deinit(void);

/*************************************************************************************/

#endif
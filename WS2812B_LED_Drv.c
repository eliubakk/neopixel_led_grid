/*
 * Driver for WS2812B LEDs on the Raspberry Pi 2
 *
 * Written by Erik Liubakka
 * Initial Revision: 2019-06-10
 *
 */

#include "WS2812B_LED_Drv.h"

void send_data(uint8_t pin, uint32_t data) {
	//uint8_t bit_count;
	uint32_t pin_mask;
	//volatile uint32_t timer_count;

	if(pin < 32) {
		pin_mask = (1 << pin);

		//
		LOW_PIN_SEND_ZERO(pin_mask);
		LOW_PIN_SEND_ZERO(pin_mask);
		LOW_PIN_SEND_ZERO(pin_mask);
		LOW_PIN_SEND_ZERO(pin_mask);

		//
		LOW_PIN_SEND_ZERO(pin_mask);
		LOW_PIN_SEND_ZERO(pin_mask);
		LOW_PIN_SEND_ZERO(pin_mask);
		LOW_PIN_SEND_ZERO(pin_mask);

		//
		LOW_PIN_SEND_ZERO(pin_mask);
		LOW_PIN_SEND_ZERO(pin_mask);
		LOW_PIN_SEND_ZERO(pin_mask);
		LOW_PIN_SEND_ONE(pin_mask);

		//
		LOW_PIN_SEND_ONE(pin_mask);
		LOW_PIN_SEND_ONE(pin_mask);
		LOW_PIN_SEND_ONE(pin_mask);
		LOW_PIN_SEND_ONE(pin_mask);

		//
		LOW_PIN_SEND_ONE(pin_mask);
		LOW_PIN_SEND_ONE(pin_mask);
		LOW_PIN_SEND_ZERO(pin_mask);
		LOW_PIN_SEND_ZERO(pin_mask);

		//
		LOW_PIN_SEND_ZERO(pin_mask);
		LOW_PIN_SEND_ZERO(pin_mask);
		LOW_PIN_SEND_ZERO(pin_mask);
		LOW_PIN_SEND_ZERO(pin_mask);

	// 	if(data & DATA_MASK_B0){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B1){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B2){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B3){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B4){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B5){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B6){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B7){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B8){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B9){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B10){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B11){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B12){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B13){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B14){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B15){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B16){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B17){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B18){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B19){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B20){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B21){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B22){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B23){
	// 		LOW_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		LOW_PIN_SEND_ZERO(pin_mask);
	// 	}
	// } else {
	// 	pin_mask = (1 << (pin - 32));
	// 	if(data & DATA_MASK_B0){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B1){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B2){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B3){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B4){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B5){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B6){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B7){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B8){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B9){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B10){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B11){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B12){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B13){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B14){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B15){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B16){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B17){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B18){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B19){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B20){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B21){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B22){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	// 	if(data & DATA_MASK_B23){
	// 		HIGH_PIN_SEND_ONE(pin_mask);
	// 	} else {
	// 		HIGH_PIN_SEND_ZERO(pin_mask);
	// 	}
	}
	
	// for(bit_count = 0; bit_count < 24; ++bit_count) {
	// 	if(data & 1) {
	// 		//Set value to be loaded into timer after time high is finished
	// 		//PUT32(ARM_TIMER_RLD, LED_ONE_LOW);

	// 		//Set pin

	// 		GPIO_set(pin);
			
	// 		//Clear interrupt and start timer
	// 		PUT32(ARM_TIMER_CLI, 0);
	// 		PUT32(ARM_TIMER_LOD, LED_ONE_HIGH-1);
	// 		//timer_count = SYSTIMER_COUNT;
	// 		//SYSTIMER_C_SET(0, timer_count + LED_ONE_HIGH);
	// 		//SYSTIMER_MATCH_CLR(0);

	// 		//Waiting for timer to finish
	// 		while(1) if(GET32(ARM_TIMER_RIS)) break;
	// 		//while(1) if(SYSTIMER_MATCH(0)) break;

	// 		//Clear pin
	// 		GPIO_clear(pin);

	// 		//Clear interrupt and start timer
	// 		PUT32(ARM_TIMER_CLI, 0);
	// 		PUT32(ARM_TIMER_LOD, LED_ONE_LOW-1);
	// 		//timer_count = SYSTIMER_COUNT;
	// 		//SYSTIMER_C_SET(0, timer_count + LED_ONE_LOW);
	// 		//SYSTIMER_MATCH_CLR(0);

	// 		//Waiting for timer to finish
	// 		while(1) if(GET32(ARM_TIMER_RIS)) break;
	// 		//while(1) if(SYSTIMER_MATCH(0)) break;
	// 	} else {
	// 		//Set value to be loaded into timer after time high is finished
	// 		//PUT32(ARM_TIMER_RLD, LED_ZERO_LOW);

	// 		//Set pin
	// 		GPIO_set(pin);

	// 		//Clear interrupt and start timer
	// 		PUT32(ARM_TIMER_CLI, 0);
	// 		PUT32(ARM_TIMER_LOD, LED_ZERO_HIGH-1);
	// 		//timer_count = SYSTIMER_COUNT;
	// 		//SYSTIMER_C_SET(0, timer_count + LED_ZERO_HIGH);
	// 		//SYSTIMER_MATCH_CLR(0);

	// 		//Waiting for timer to finish
	// 		while(1) if(GET32(ARM_TIMER_RIS)) break;
	// 		//while(1) if(SYSTIMER_MATCH(0)) break;

	// 		//Clear pin
	// 		GPIO_clear(pin);

	// 		//Clear interrupt and start timer
	// 		PUT32(ARM_TIMER_CLI, 0);
	// 		PUT32(ARM_TIMER_LOD, LED_ZERO_LOW-1);
	// 		//timer_count = SYSTIMER_COUNT;
	// 		//SYSTIMER_C_SET(0, timer_count + LED_ZERO_LOW);
	// 		//SYSTIMER_MATCH_CLR(0);

	// 		//Waiting for timer to finish
	// 		while(1) if(GET32(ARM_TIMER_RIS)) break;
	// 		//while(1) if(SYSTIMER_MATCH(0)) break;
	// 	}
	// 	data = data >> 1;
	// }
}
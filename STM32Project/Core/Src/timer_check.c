/*
 * timer_check.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Hy
 */

#include "timer_check.h"

int switch_7seg=0;

void timer_check(){
	if(timer_flag[0] == 1){
		HAL_GPIO_TogglePin(GPIOA, PA4_Pin);
			update_7seg_A();
			update_7seg_B();
			if(switch_7seg == 3) switch_7seg = 0;
			switch_7seg++;
			setTimer(0,250);
	}
}

/*
 * fsm_setting.c
 *
 *  Created on: Oct 27, 2024
 *      Author: Hy
 */

#include "fsm_setting.h"
#include "fsm_manual.h"
#include "software_timer.h"
#include "update_status_traffic.h"
#include "timer_check.h"
#include "fsm_7seg.h"
#include "control_traffic.h"
#include "control_7seg.h"
#include "fsm_automatic.h"

int countTemp = 0 ;

void countPressButton1(){
	if(isButtonPress(1) == 1){
		status_mode++;
	}
	if(status_mode == MODE4 + 1){
		status_mode = MODE0;
	}
}

void fsm_mode(){
	countPressButton1();
	switch(status_mode){
	case MODE0:
		status_mode = MODE1;
		status_A = INIT;
		status_B = INIT;
		countDownA=count_RED;
		countDownB=count_GREEN;
		break;
	case MODE1:
		if(isButtonPress(1) == 1){
			status_mode = MODE2;
		}
		break;
	case MODE2:
		status_A = MAN_RED;
		status_B = MAN_RED;
		if(isButtonPress(1) == 1){
			status_mode = MODE3;
		}
		if(isButtonPress(2) == 1){
			// add value
			countTemp+=2;
		}
		if(isButtonPress(3) == 1){
			//set value
			RED_Timer = RED_Timer + countTemp*1000;
			count_RED += countTemp;
			countTemp=0;
		}
		break;
	case MODE3:
		status_A = MAN_YELLOW;
		status_B = MAN_YELLOW;
		if(isButtonPress(1) == 1){
			status_mode = MODE4;
		}
		if(isButtonPress(2) == 1){
			// add value
			countTemp+=2;
		}
		if(isButtonPress(3) == 1){
			//set value
			YELLOW_Timer = YELLOW_Timer + countTemp*1000;
			count_YELLOW += countTemp;
			countTemp=0;
		}
		break;
	case MODE4:
		status_A = MAN_GREEN;
		status_B = MAN_GREEN;
		if(isButtonPress(1) == 1){
			status_mode = MODE0;
		}
		if(isButtonPress(2) == 1){
			// add value
			countTemp+=2;
		}
		if(isButtonPress(3) == 1){
			//set value
			GREEN_Timer = GREEN_Timer + countTemp*1000;
			count_GREEN += countTemp;
			countTemp=0;
		}
		break;
	default:
		break;
	}
}

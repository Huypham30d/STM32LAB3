/*
 * update_status_traffic.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Hy
 */

#include "update_status_traffic.h"
#include "fsm_setting.h"
#include "fsm_manual.h"
#include "software_timer.h"
#include "timer_check.h"
#include "fsm_7seg.h"
#include "control_traffic.h"
#include "control_7seg.h"
#include "fsm_automatic.h"

void status_LED_A() {
	switch (status_A) {
	case AUTO_RED:
		status_RED_A = 1;
		status_GREEN_A = 0;
		status_YELLOW_A = 0;
		break;
	case MAN_RED:
		status_RED_A = 1;
		status_GREEN_A = 0;
		status_YELLOW_A = 0;
		break;
	case AUTO_GREEN:
		status_RED_A = 0;
		status_GREEN_A = 1;
		status_YELLOW_A = 0;
		break;
	case MAN_GREEN:
		status_RED_A = 0;
		status_GREEN_A = 1;
		status_YELLOW_A = 0;
		break;
	case AUTO_YELLOW:
		status_RED_A = 0;
		status_GREEN_A = 0;
		status_YELLOW_A = 1;
		break;
	case MAN_YELLOW:
		status_RED_A = 0;
		status_GREEN_A = 0;
		status_YELLOW_A = 1;
		break;
	default:
		break;
	}
}

void status_LED_B(){
	switch (status_B) {
	case AUTO_RED:
		status_RED_B = 1;
		status_GREEN_B = 0;
		status_YELLOW_B = 0;
		break;
	case AUTO_GREEN:
		status_RED_B = 0;
		status_GREEN_B = 1;
		status_YELLOW_B = 0;
		break;
	case AUTO_YELLOW:
		status_RED_B = 0;
		status_GREEN_B = 0;
		status_YELLOW_B = 1;
		break;
	case MAN_RED:
		status_RED_B = 1;
		status_GREEN_B = 0;
		status_YELLOW_B = 0;
		break;
	case MAN_GREEN:
		status_RED_B = 0;
		status_GREEN_B = 1;
		status_YELLOW_B = 0;
		break;
	case MAN_YELLOW:
		status_RED_B = 0;
		status_GREEN_B = 0;
		status_YELLOW_B = 1;
		break;
	default:
		break;
	}
}



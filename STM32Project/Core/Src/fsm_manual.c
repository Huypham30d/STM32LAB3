/*
 * fsm_manual.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Hy
 */

#include "fsm_manual.h"
#include "software_timer.h"
#include "update_status_traffic.h"
#include "timer_check.h"
#include "fsm_7seg.h"
#include "control_traffic.h"
#include "control_7seg.h"
void fsm_manual_run_A() {
	status_LED_A();
	switch (status_A) {
	case MAN_RED:
		displayTraffic();
		update_indexA(count_RED);
		break;
	case MAN_GREEN:
		displayTraffic();
		update_indexA(count_GREEN);
		break;
	case MAN_YELLOW:
		displayTraffic();
		update_indexA(count_YELLOW);
		break;
	default:
		break;
	}
}
void fsm_manual_run_B() {
	status_LED_B();
	switch (status_B) {
	case MAN_RED:
		displayTraffic();
		update_indexB(MODE2);
		break;
	case MAN_GREEN:
		displayTraffic();
		update_indexB(MODE4);
		break;
	case MAN_YELLOW:
		displayTraffic();
		update_indexB(MODE3);
		break;
	default:
		break;
	}
}

void fsm_manual_run() {
fsm_manual_run_A();
fsm_manual_run_B();
}

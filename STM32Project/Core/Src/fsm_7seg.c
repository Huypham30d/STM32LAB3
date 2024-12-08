/*
 * fsm_7seg.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Hy
 */
#include "fsm_7seg.h"
#include "main.h"
#include "software_timer.h"

int countDownA;
int countDownB;

int count_RED = 5 ;
int count_GREEN = 3 ;
int count_YELLOW = 2 ;


void fsm_7segA() {
	switch (status_A) {
	case INIT:
		status_A = AUTO_RED;
		setTimer(5, 1000);
		break;
	case AUTO_RED:
		if (countDownA <= 0) {
			countDownA = count_GREEN;
		}
		if (timer_flag[5] == 1) {
			update_indexA(countDownA);
			countDownA--;
			setTimer(5, 1000);
		}
		break;
	case AUTO_GREEN:
		if (countDownA <= 0) {
			countDownA = count_YELLOW;
		}
		if (timer_flag[5] == 1) {
			update_indexA(countDownA);
			countDownA--;
			setTimer(5, 1000);
		}
		break;
	case AUTO_YELLOW:
		if (countDownA <= 0) {
			countDownA = count_RED;
		}
		if (timer_flag[5] == 1) {
			update_indexA(countDownA);
			countDownA--;
			setTimer(5, 1000);
		}
		break;

	default:
		break;
	}

}

void fsm_7segB() {
	switch (status_B) {
	case INIT:
		status_B = AUTO_GREEN;
		setTimer(6, 1000);
		break;
	case AUTO_GREEN:
		if (countDownB <= 0) {
			countDownB = count_YELLOW;
		}
		if (timer_flag[6] == 1) {
			update_indexB(countDownB);
			countDownB--;
			setTimer(6, 1000);
		}
		break;
	case AUTO_YELLOW:
		if (countDownB <= 0) {
			countDownB = count_RED;
		}
		if (timer_flag[6] == 1) {
			update_indexB(countDownB);
			countDownB--;
			setTimer(6, 1000);
		}
		break;
	case AUTO_RED:
		if (countDownB <= 0) {
			countDownB = count_GREEN;
		}
		if (timer_flag[6] == 1) {
			update_indexB(countDownB);
			countDownB--;
			setTimer(6, 1000);
		}
		break;
	default:
		break;
	}
}

void fsm_7seg_run() {
	fsm_7segA();
	fsm_7segB();
}

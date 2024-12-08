/*
 * fsm_man.c
 *
 *  Created on: Oct 29, 2024
 *      Author: Admin
 */
#include "fsm_man.h"

void fsm_man_run(){
	switch(status){
	case MAN_RED:
		UpdateBuffer(mode, timeRed);
		if(IsModeButtonPressed(0) == 1){
			status = MAN_AMBER;
			mode = 3;
			UpdateBuffer(mode, TIME_AMBER);
			setTimer3(250);
			setTimer1(500);
			setTimer2(7000);
		}
		if(IsModeButtonPressed(1) == 1){
			if(timeRed < 99 && timeRed < 99 && timeGreen < 99){
			   timeRed++;
			   timeGreen++;
			   count = timeRed;
			   setTimer2(7000);
			}
		}
		if(IsModeButtonPressed(2) == 1){
			status = RED1_GREEN2;
			UpdateBuffer(mode, count);
			setTimer2(7000);
			setTimer1(timeGreen*1000);
		}
		if(timer1_flag == 1){
			BlinkRED();
			setTimer1(500);
		}
		if(timer2_flag == 1){
			status = INIT;
			count = 1;
			mode = 1;
//			setTimer3(250);
		}
		if(timer3_flag == 1){
				if(index == 4) index = 0;
				setTimer3(250);
				Update7SEG(index++);
			}
		break;

	case MAN_AMBER:
		UpdateBuffer(mode, timeAmber);
		if(IsModeButtonPressed(0) == 1){
			status = MAN_GREEN;
			mode = 4;
			UpdateBuffer(mode, TIME_GREEN);
			setTimer3(250);
			setTimer1(500);
			setTimer2(7000);
		}
		if(IsModeButtonPressed(1) == 1){
			if(timeRed < 99 && timeRed < 99 && timeGreen < 99){
			   timeAmber++;
			   timeRed++;
			   count = timeRed;
//			   timeGreen++;
			   setTimer2(7000);
			}
		}
		if(timer3_flag == 1){
				if(index == 4) index = 0;
				setTimer3(250);
				Update7SEG(index++);
			}
		if(IsModeButtonPressed(2) == 1){
			status = RED1_GREEN2;

			UpdateBuffer(mode, count);
			setTimer2(7000);
			setTimer1(timeGreen*1000);
		}
		if(timer2_flag == 1){
			status = MAN_RED;
			setTimer2(7000);
			mode = 2;
		}
		if(timer1_flag == 1){
			BlinkAMBER();
			setTimer1(500);
		}
		break;

	case MAN_GREEN:
		UpdateBuffer(mode, timeGreen);
		if(timer1_flag == 1){
			BlinkGREEN();
			setTimer1(500);
		}
		if(IsModeButtonPressed(1) == 1){
			if(timeRed < 99 && timeRed < 99 && timeGreen < 99){
			   timeGreen++;
			   timeRed++;
			   count = timeRed;
			   setTimer2(7000);
//			   UpdateBuffer(mode, timeGreen);
			}
		}
		if(timer3_flag == 1){
				if(index == 4) index = 0;
				setTimer3(250);
				Update7SEG(index++);
			}
		if(timer2_flag == 1){
			status = MAN_AMBER;
			mode = 3;
			setTimer2(7000);
		}
		if(IsModeButtonPressed(2) == 1){
			status = RED1_GREEN2;
//			setTimer3(250);
			UpdateBuffer(mode, count);
			setTimer1(timeGreen*1000);
			setTimer2(7000);
		}
		if(IsModeButtonPressed(0) == 1){
			status = INIT;
			count = 1;
			mode = 1;
			UpdateBuffer(mode, TIME_RED);
			setTimer3(250);
			setTimer2(7000);
			setTimer1(500);
		}
		break;
	default:
		break;
	}
//	if(timer3_flag == 1){
//		if(index == 4) index = 0;
//		setTimer3(250);
//		Update7SEG(index++);
//	}
}


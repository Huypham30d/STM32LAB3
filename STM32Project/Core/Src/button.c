/*
 * button.c
 *
 *  Created on: Dec 3, 2024
 *      Author: Admin
 */
#include "main.h"
#include "button.h"

int keyReg0[3] = {NORMAL_STATE};
int keyReg1[3] = {NORMAL_STATE};
int keyReg2[3] = {NORMAL_STATE};
int keyReg3[3] = {NORMAL_STATE};

int Time = 200;
int ButtonFlag[3] = {0};

int IsModeButtonPressed(int idx){
	if (ButtonFlag[idx] == 1){
		ButtonFlag[idx] = 0;
		return 1;
	}
	return 0;
}

void MODEProcess(int cnt){
	ButtonFlag[cnt] = 1;
}
void getKeyInput1(){
	for (int i =0; i<3; i++){
		keyReg0[i] = keyReg1[i];
		keyReg1[i] = keyReg2[i];
		keyReg2[i] = (i == 0)? HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_7):
					 (i == 1)? HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_8):
					 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_9);
		if ((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i])){
			if (keyReg3[i] != keyReg2[i]){
				keyReg3[i] = keyReg2[i];
				if (keyReg2[i] == PRESSED_STATE){
					MODEProcess(i);
					Time = 200;
				}
			}
			else{
				Time--;
				if (Time == 0){
					keyReg3[i] = NORMAL_STATE;
				}
			}
		}

	}
}

/*
 * button.h
 *
 *  Created on: Dec 3, 2024
 *      Author: Admin
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESS_STATE GPIO_PIN_RESET

extern int button_flag[5];
extern int isButtonPress (int index);
extern void subKeyProcess(int index);
int getIndex(int index);

extern void getKeyInput();

#endif /* INC_BUTTON_H_ */

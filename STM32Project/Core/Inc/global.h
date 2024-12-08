/*
 * global.h
 *
 *  Created on: Dec 3, 2024
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "traffic_light.h"
#include "button.h"
#include "led7_segment.h"
#include "software_timer.h"

#define INIT 1
#define RED1_GREEN2 2
#define RED1_AMBER2 3
#define GREEN1_RED2 4
#define AMBER1_RED2 5

#define MAN_RED 12
#define MAN_AMBER 13
#define MAN_GREEN 14

extern int status;
extern int mode;
extern int led_buffer[4];
extern int index;
extern int count;
extern int timeRed;
extern int timeAmber;
extern int timeGreen;
#define TIME_RED 5
#define TIME_GREEN 3
#define TIME_AMBER 2

#endif /* INC_GLOBAL_H_ */

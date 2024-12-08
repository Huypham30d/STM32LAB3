/*
 * global.h
 *
 *  Created on: Oct 29, 2024
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "button.h"
#include "main.h"

#define MODE0 0
#define MODE1 1
#define MODE2 2
#define MODE3 3
#define MODE4 4

#define INIT 11
#define AUTO_RED 12
#define AUTO_YELLOW 13
#define AUTO_GREEN 14

#define MAN_RED 22
#define MAN_YELLOW 23
#define MAN_GREEN 24

extern int status_A;
extern int status_B;
extern int status_mode;

#endif /* INC_GLOBAL_H_ */

/*
 * led7_segment.c
 *
 *  Created on: Dec 3, 2024
 *      Author: Admin
 */

#include "main.h"
#include "led7_segment.h"

void display7SEG(int num){
		switch(num){
		case 0:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  	  	  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  	  	  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	  	  	  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	  	  	  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	  	  	  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
	  	  	  	  break;

		case 2:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  	  	  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
	  	  	  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	  	  	  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	  	  	  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	  	  	  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	  	  	  	  break;

		case 3:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  	  	  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  	  	  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	  	  	  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	  	  	  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	  	  	  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	  	  	  	  break;

	    case 4:
	    	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	    	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
  		  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
  		  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
  		  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
  		  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
  		  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
  		  	  break;

	    case 5:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	  		  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  		  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	  		  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	  		  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	  		  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	  		  	  break;

		case 6:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
  		  	  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
  		  	  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
  		  	  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
  		  	  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
  		  	  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
  		  	  break;

		case 7:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
				  			  		  	  break;
		case 8:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
				break;
		case 9:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
				break;
		default:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
				break;
		}
}

void Update7SEG(int cnt){
	switch(cnt){
	case 0:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
		display7SEG(led_buffer[cnt]);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
		display7SEG(led_buffer[cnt]);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
		display7SEG(led_buffer[cnt]);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		display7SEG(led_buffer[cnt]);
	break;

	default:
		break;
	}
}

void UpdateBuffer(int m, int time){
	led_buffer[0] = m/10;
	led_buffer[1] = m%10;
	led_buffer[2] = time/10;
	led_buffer[3] = time%10;
}

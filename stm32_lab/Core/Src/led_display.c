/*
 * led_display.c
 *
 *  Created on: Dec 8, 2024
 *      Author: TOSHIBA
 */

#include "led_display.h"

enum LEDState {RED, YELLOW, GREEN};

void clear7SEG() {
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
}


static void display7SEG(int num) {
	  switch (num) {
		case 0:
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			break;
		  default:
			  break;
	}
}

void initState() {
	display7SEG(8);
	HAL_Delay(1000);
	clear7SEG();
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_All, GPIO_PIN_SET);
	HAL_Delay(1000);
}

int count1 = RED_INIT;
int count2 = GREEN_INIT;
enum LEDState state1 = RED;
enum LEDState state2 = GREEN;

void resetCountValue() {
	count1 = red_value;
	count2 = green_value;
	state1 = RED;
	state2 = GREEN;
}

void NormalMode() {
	count1--;
	count2--;
	switch (state1) {
		case RED:
			HAL_GPIO_WritePin(Red_1_GPIO_Port, Red_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(Yel_1_GPIO_Port, Yel_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(Gre_1_GPIO_Port, Gre_1_Pin, GPIO_PIN_SET);
			if (count1 < 0) {
				count1 = green_value - 1;
				state1 = GREEN;
				HAL_GPIO_WritePin(Red_1_GPIO_Port, Red_1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Yel_1_GPIO_Port, Yel_1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Gre_1_GPIO_Port, Gre_1_Pin, GPIO_PIN_RESET);
			}
			break;
		case YELLOW:
			HAL_GPIO_WritePin(Red_1_GPIO_Port, Red_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(Yel_1_GPIO_Port, Yel_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(Gre_1_GPIO_Port, Gre_1_Pin, GPIO_PIN_SET);
			if (count1 < 0) {
				count1 = red_value - 1;
				state1 = RED;
				HAL_GPIO_WritePin(Red_1_GPIO_Port, Red_1_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(Yel_1_GPIO_Port, Yel_1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Gre_1_GPIO_Port, Gre_1_Pin, GPIO_PIN_SET);
			}
			break;
		case GREEN:
			HAL_GPIO_WritePin(Red_1_GPIO_Port, Red_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(Yel_1_GPIO_Port, Yel_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(Gre_1_GPIO_Port, Gre_1_Pin, GPIO_PIN_RESET);
			if (count1 < 0) {
				count1 = yellow_value - 1;
				state1 = YELLOW;
				HAL_GPIO_WritePin(Red_1_GPIO_Port, Red_1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Yel_1_GPIO_Port, Yel_1_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(Gre_1_GPIO_Port, Gre_1_Pin, GPIO_PIN_SET);
			}
			break;
		default:
			break;
	}
	switch (state2) {
		case RED:
			HAL_GPIO_WritePin(Red_2_GPIO_Port, Red_2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(Yel_2_GPIO_Port, Yel_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(Gre_2_GPIO_Port, Gre_2_Pin, GPIO_PIN_SET);
			if (count2 < 0) {
				count2 = green_value - 1;
				state2 = GREEN;
				HAL_GPIO_WritePin(Red_2_GPIO_Port, Red_2_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Yel_2_GPIO_Port, Yel_2_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Gre_2_GPIO_Port, Gre_2_Pin, GPIO_PIN_RESET);
			}
			break;
		case YELLOW:
			HAL_GPIO_WritePin(Red_2_GPIO_Port, Red_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(Yel_2_GPIO_Port, Yel_2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(Gre_2_GPIO_Port, Gre_2_Pin, GPIO_PIN_SET);
			if (count2 < 0) {
				count2 = red_value - 1;
				state2 = RED;
				HAL_GPIO_WritePin(Red_2_GPIO_Port, Red_2_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(Yel_2_GPIO_Port, Yel_2_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Gre_2_GPIO_Port, Gre_2_Pin, GPIO_PIN_SET);
			}
			break;
		case GREEN:
			HAL_GPIO_WritePin(Red_2_GPIO_Port, Red_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(Yel_2_GPIO_Port, Yel_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(Gre_2_GPIO_Port, Gre_2_Pin, GPIO_PIN_RESET);
			if (count2 < 0) {
				count2 = yellow_value - 1;
				state2 = YELLOW;
				HAL_GPIO_WritePin(Red_2_GPIO_Port, Red_2_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Yel_2_GPIO_Port, Yel_2_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(Gre_2_GPIO_Port, Gre_2_Pin, GPIO_PIN_SET);
			}
			break;
		default:
			break;
	}
}


static int get7SEG1Value() {
	switch (mode) {
		case 1:
			return count1;
		case 2:
			return red_draft;
		case 3:
			return yellow_draft;
		case 4:
			return green_draft;
		default:
			break;
	}
	return 0;
}
static int get7SEG2Value() {
	switch (mode) {
		case 1:
			return count2;
		case 2:
			return red_draft;
		case 3:
			return yellow_draft;
		case 4:
			return green_draft;
		default:
			break;
	}
	return 0;
}


void LedDispMode() {
	switch (mode) {
		case 1:
			if (get_timer0_flag()) {
				setTimer0(250);
				NormalMode();
			}
			break;
		case 2:
			if (get_timer0_flag()) {
				setTimer0(200);
				HAL_GPIO_TogglePin(Red_1_GPIO_Port, Red_1_Pin);
				HAL_GPIO_TogglePin(Red_2_GPIO_Port, Red_2_Pin);
				HAL_GPIO_WritePin(Yel_1_GPIO_Port, Yel_1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Gre_1_GPIO_Port, Gre_1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Yel_2_GPIO_Port, Yel_2_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Gre_2_GPIO_Port, Gre_2_Pin, GPIO_PIN_SET);
			}
			break;
		case 3:
			if (get_timer0_flag()) {
				setTimer0(200);
				HAL_GPIO_TogglePin(Yel_1_GPIO_Port, Yel_1_Pin);
				HAL_GPIO_TogglePin(Yel_2_GPIO_Port, Yel_2_Pin);
				HAL_GPIO_WritePin(Red_1_GPIO_Port, Red_1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Gre_1_GPIO_Port, Gre_1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Red_2_GPIO_Port, Red_2_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Gre_2_GPIO_Port, Gre_2_Pin, GPIO_PIN_SET);
			}
			break;
		case 4:
			if (get_timer0_flag()) {
				setTimer0(200);
				HAL_GPIO_TogglePin(Gre_1_GPIO_Port, Gre_1_Pin);
				HAL_GPIO_TogglePin(Gre_2_GPIO_Port, Gre_2_Pin);
				HAL_GPIO_WritePin(Yel_1_GPIO_Port, Yel_1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Red_1_GPIO_Port, Red_1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Yel_2_GPIO_Port, Yel_2_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(Red_2_GPIO_Port, Red_2_Pin, GPIO_PIN_SET);
			}
			break;
		default:
			break;
	}
}



void LEDScanning() {
	static int scan_index = 0;
	switch (scan_index) {
		case 0:
			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
			display7SEG(get7SEG1Value() / 10);
			scan_index = 1;
			break;
		case 1:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
			display7SEG(get7SEG1Value() % 10);
			scan_index = 2;
			break;
		case 2:
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
			display7SEG(get7SEG2Value() / 10);
			scan_index = 3;
			break;
		case 3:
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
			display7SEG(get7SEG2Value() % 10);
			scan_index = 4;
			break;
		case 4:
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, GPIO_PIN_SET);
			display7SEG(mode);
			scan_index = 0;
			break;
		default:
			break;
	}
}

/*
 * software_timer.h
 *
 *  Created on: Dec 5, 2024
 *      Author: TOSHIBA
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

void setTimer0 (int duration);
void setTimer1 (int duration);
void setTimer2 (int duration);
void setTimer3 (int duration);
void timer_run();
int getTimer0Flag();
int getTimer1Flag();
int getTimer2Flag();
int getTimer3Flag();

#endif /* INC_SOFTWARE_TIMER_H_ */

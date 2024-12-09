/*
 * global.h
 *
 *  Created on: Dec 8, 2024
 *      Author: TOSHIBA
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define RED_INIT		15
#define YELLOW_INIT		4
#define GREEN_INIT		12

void LedTimeDurationInit();
extern int mode;
extern int red_value, yellow_value, green_value;
extern int red_draft, yellow_draft, green_draft;


#endif /* INC_GLOBAL_H_ */

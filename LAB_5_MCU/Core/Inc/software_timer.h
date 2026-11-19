/*
 * software_timer.h
 *
 *  Created on: Nov 19, 2026
 *      Author: ADMIN
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"


extern int timer_flag;
extern int timer_counter;

void setTimer(int duration);
void TimerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */

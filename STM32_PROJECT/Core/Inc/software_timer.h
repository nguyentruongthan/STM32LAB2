/*
 * software_timer.h
 *
 *  Created on: Sep 19, 2023
 *      Author: than
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
void timerRun();
void setTimer1(int duration);
void setTimer2(int duration);

#endif /* INC_SOFTWARE_TIMER_H_ */

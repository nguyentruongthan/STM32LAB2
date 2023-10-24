/*
 * software_timer.h
 *
 *  Created on: Sep 19, 2023
 *      Author: than
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_dot_flag;	//flag use for update LED_DOT
void timer_run();	//	decrease timer_count by 1 for timer_dot_count
					//and set timer_dot_flag if timer_dot_count <= 0

//function set_timer_dot():
//	- reset timer_dot_flag
//	- set timer_counter for its object with duration
void set_timer_dot(int duration);

#endif /* INC_SOFTWARE_TIMER_H_ */

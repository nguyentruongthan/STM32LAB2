/*
 * software_timer.c
 *
 *  Created on: Sep 19, 2023
 *      Author: than
 */

#include "software_timer.h"

int timer_dot_count;
int timer_dot_flag;

void timer_run(){
	if(timer_dot_count > 0){
		timer_dot_count--;
		if(timer_dot_count <= 0){
			timer_dot_flag = 1;
		}
	}
}

void set_timer_dot(int duration){
	timer_dot_count = duration;
	timer_dot_flag = 0;
}

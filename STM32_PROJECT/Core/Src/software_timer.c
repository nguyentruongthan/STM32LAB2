/*
 * software_timer.c
 *
 *  Created on: Sep 19, 2023
 *      Author: than
 */

#include "software_timer.h"

int timer1_count;
int timer1_flag;
void timerRun(){
	if(timer1_count > 0){
		timer1_count--;
		if(timer1_count <= 0){
			timer1_flag = 1;
		}
	}
}
void setTimer1(int duration){
	timer1_count = duration;
	timer1_flag = 0;
}

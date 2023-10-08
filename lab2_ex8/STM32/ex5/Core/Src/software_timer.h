/*
 * software_timer.c
 *
 *  Created on: Oct 8, 2023
 *      Author: Bao Hinh
 */
int timer_counter[10]={0};
int timer_flag[10]={0};
void setTimer(int duration, int timenum){
	timer_counter[timenum]= duration;
	timer_flag[timenum]= 0;
}

void timer_run(int timenum){
	if(timer_counter[timenum]>0){
		timer_counter[timenum]--;
		if(timer_counter[timenum]<=0){
			timer_flag[timenum]=1;
		}
	}
}



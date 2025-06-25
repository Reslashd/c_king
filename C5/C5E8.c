/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 5 Excercises by Reslashd (c)2025
 *
 * Version 2 of this project; the first version was not working properly (and a mess).
 */
 
#include <stdio.h>

int main(void){
	int hours = 0;
	int minutes = 0;
	int cv_time = 0;
	int c1osest = 0;
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);	
	cv_time = (hours * 60) + minutes;

	if(cv_time <= 480){
		//closest departure 08:00
		c1osest = 480; 
	} else if (cv_time >= 1222){
		//closest departure 21:45
		c1osest = 1305; 
	} else if (cv_time > 480 && cv_time <= 531){ 
		//closest departure 08:00
		c1osest = 480; 
	} else if (cv_time > 531 && cv_time <= 631){ 
		//closest departure 9:43		
		c1osest = 583; 
	} else if (cv_time > 631 && cv_time <= 723){ 
		//closest departure 11:19	
		c1osest = 679; 
	} else if (cv_time > 723 && cv_time <= 803){	
		//closest departure 12:47	
		c1osest = 767; 
	} else if (cv_time > 803 && cv_time <= 897){	
		//closest departure 14:00	
		c1osest = 840; 
	} else if (cv_time > 897 && cv_time <= 1042){	
		//closest departure 15:45		
		c1osest = 945; 
	} else if (cv_time > 1042 && cv_time <= 1222){	
		//closest departure 19:00		
		c1osest = 1140; 
	} 
	
	switch(c1osest){
		case(480): printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
		break;
		case(583): printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
		break;
		case(679): printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
		break;		
		case(767): printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m");
		break;		
		case(840): printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m");
		break;
		case(945): printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m");
		break;		
		case(1140): printf("Closest departure time is 7.00 p.m., arriving at 9:20 p.m");
		break;		
		case(1305): printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m");
		break;				
	}
	printf("\n");

	return 0;
}

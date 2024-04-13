/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 5 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int hours = 0;
	int minutes = 0;
	int cv_time = 0;
	int dif1 = 0;
	int dif2 = 0;
	int dif3 = 0;
	int dif4 = 0;
	int dif5 = 0;
	int dif6 = 0;
	int dif7 = 0;
	int dif8 = 0;	
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int a4 = 0;
	int b1 = 0;
	int b2 = 0;
	int c1osest = 0;
	

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);
	
	cv_time = (hours * 60) + minutes;
	dif1 = cv_time - 480; 
	if(dif1 < 0){
		dif1 = 480 - cv_time;
	}
	dif2 = cv_time - 583;
	if(dif2 < 0){
		dif2 = 583 - cv_time;
	}
	dif3 = cv_time - 679;
	if(dif3 < 0){
		dif3 = 679 - cv_time;
	}
	dif4 = cv_time - 767;
	if(dif4 < 0){
		dif4 = 767 - cv_time;
	}
	dif5 = cv_time - 840;
	if(dif5 < 0){
		dif5 = 840 - cv_time;
	}
	dif6 = cv_time - 945;
	if(dif6 < 0){
		dif6 = 945 - cv_time;
	}
	dif7 = cv_time - 1140;
	if(dif7 < 0){
		dif7 = 1140 - cv_time;
	}
	dif8 = cv_time - 1305;
	if(dif8 < 0){
		dif8 = 1305 - cv_time;
	}
	
	//First round of checks
	if(dif1 > dif2){
		a1 = dif2;
	} else{
		a1 = dif1;
	}
	
	if(dif3 > dif4){
		a2 = dif4;
	} else{
		a2 = dif3;
	}
	
	if(dif5 > dif6){
		a3 = dif6;
	} else{
		a3 = dif5;
	}
	
	if(dif7 > dif8){
		a4 = dif8;
	} else{
		a4 = dif7;
	}
	
	//Second round of checks
	if(a1 > a2){
		b1 = a2;
	} else{
		b1 = a1;
	}
	
	if(a3 > a4){
		b2 = a4;
	} else{
		b2 = a3;
	}
	
	//Last round closest number
	if(b1 > b2){
		c1osest = b2;
	} else{
		c1osest = b1;
	}
	
	if((c1osest +  cv_time) > cv_time){
		c1osest = cv_time - c1osest;
	} else {
		c1osest = c1osest + cv_time;
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

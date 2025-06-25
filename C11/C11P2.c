/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 11 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time, int *deperature_time, int *arrival_time);

int main(void){
	int hours = 0;
	int minutes = 0;
	int desired_time = 0;
	int departure_time = 0;
	int arrival_time = 0;
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);
	desired_time = (hours * 60) + minutes;
	find_closest_flight(desired_time, &departure_time, &arrival_time);
	
	// 720 = 12:00	
	if(departure_time < 720){
		printf("Closest departure time is %d:%.2d a.m.,", (departure_time / 60), (departure_time % 60));
	} else if(departure_time >= 720 && (departure_time / 60) != 12){
		printf("Closest departure time is %d:%.2d p.m.,", ((departure_time - 720) / 60), ((departure_time - 720) % 60));
	} else if(departure_time >= 720 && (departure_time / 60) == 12){
		printf("Closest departure time is %d:%.2d p.m.,", (departure_time / 60), (departure_time % 60));
	} 		
		
	if(arrival_time < 720){
		printf(" arriving at %d:%.2d a.m.", (arrival_time / 60), (arrival_time % 60));
	} else if(arrival_time >= 720 && (arrival_time / 60) != 12){
		printf(" arriving at %d:%.2d p.m.", ((arrival_time - 720)/ 60), ((arrival_time - 720) % 60));
	} else if(arrival_time >= 720 && (arrival_time / 60) == 12){
		printf(" arriving at %d:%.2d p.m.", (arrival_time / 60), (arrival_time % 60));
	}			
	printf("\n");
	return EXIT_SUCCESS;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){	
	if(desired_time <= 480){
		//closest departure 08:00
		*departure_time = 480; 
		*arrival_time = 616;
	} else if (desired_time >= 1222){
		//closest departure 21:45
		*departure_time = 1305; 
		*arrival_time = 1438;	
	} else if (desired_time > 480 && desired_time <= 531){ 
		//closest departure 08:00
		*departure_time = 480; 
		*arrival_time = 616;	
	} else if (desired_time > 531 && desired_time <= 631){ 
		//closest departure 9:43		
		*departure_time = 583; 
		*arrival_time = 712;
	} else if (desired_time > 631 && desired_time <= 723){ 
		//closest departure 11:19	
		*departure_time = 679; 
		*arrival_time = 811;			
	} else if (desired_time > 723 && desired_time <= 803){	
		//closest departure 12:47	
		*departure_time = 767; 
		*arrival_time = 900;	
	} else if (desired_time > 803 && desired_time <= 897){	
		//closest departure 14:00	
		*departure_time = 840; 
		*arrival_time = 968;	
	} else if (desired_time > 897 && desired_time <= 1042){	
		//closest departure 15:45		
		*departure_time = 945; 
		*arrival_time = 1075;
	} else if (desired_time > 1042 && desired_time <= 1222){	
		//closest departure 19:00		
		*departure_time = 1140; 
		*arrival_time = 1280;
	} 
}

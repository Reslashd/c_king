/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	
	int departure_times[8] = { 480, 583, 679, 767, 840, 945, 1140, 1305 };
	int arrival_times[8] = { 616, 712, 811, 900, 968, 1075, 1280, 1438 };
	int i = 0;
	int hours = 0;
	int minutes = 0;
	int cv_time = 0; //converted time to integer
	int found_closest = 0;	
	int dif1 = 0;
	int dif2 = 0;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);
	
	cv_time = (hours * 60) + minutes;
	
	while(found_closest != 1 && i < 8){
		if(cv_time <= departure_times[i]){
			found_closest = 1;
		} else if (i == 7){		
			found_closest = 1;
		} else {
			if(cv_time < departure_times[i+1]){			
				dif1 = (0 - (cv_time - departure_times[i]));
				dif2 = (0 - (cv_time - departure_times[i+1]));
								
				if (dif1 < 0 && dif2 > 0){
				// convert negative number to positive if needed for comparison	
				dif1 = dif1 * -1;					
				} else {
					found_closest = 1;
					break;
				}						
				
				if (dif1 < dif2){
					found_closest = 1;				
				} else{
					found_closest = 1;		
					i = i+1; // for printing the correct arrival time
				}				
			} else {
				i++;
			}
		}	
		
	}	
	
	hours = departure_times[i] / 60;
	minutes = (departure_times[i] - (hours * 60));
	if (hours > 12){
	hours = hours - 12;		
	}
	printf("Closest departure time is %d:%.2d ", hours, minutes);
	
	hours = arrival_times[i] / 60;
	if (hours < 12){
		printf("a.m.");
	} else {
		printf("p.m.");
	}
	
	hours = arrival_times[i] / 60;		
	minutes = (arrival_times[i] - (hours * 60));
	if (hours > 12){
		hours = hours - 12;		
	}
	printf(", arriving at %d:%.2d ", hours, minutes);
	
	hours = arrival_times[i] / 60;
	if (hours < 12){ 
		printf("a.m.");
	} else {
		printf("p.m.");
	}
		
	printf("\n");

	return 0;
}

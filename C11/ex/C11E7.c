/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 11 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

void split_date(int day_of_year, int year, int *month, int *day);
int main(void){
	int day_of_year = 33;
	int year = 2025;
	int month = 1;	
	int day = 0;	
	split_date(day_of_year, year, &month, &day);	
	printf("Month/day = %.2d/%.2d\n", month, day);
	return EXIT_SUCCESS;
}

void split_date(int day_of_year, int year, int *month, int *day){
	int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	//if leap year february = 29 days.
	if(year % 400 == 0){
		month_days[1] = 29;
	} else if (year % 4 == 0 && year % 100 != 0) {
		month_days[1] = 29;
	}
	while(day_of_year > month_days[*month - 1]){
		day_of_year -= month_days[*month - 1];
		(*month)++;
	}
	*day = day_of_year; //remaining day(s)
}

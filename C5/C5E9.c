/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 5 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int month1 = 0;
	int month2 = 0;
	int day1 = 0;
	int day2 = 0;
	int year1 = 0;
	int year2 = 0;
	
	printf("Enter first date (mm//dd/yy): ");
	scanf("%d/%d/%d", &month1, &day1, &year1);
	printf("Enter second date (mm//dd/yy): ");
	scanf("%d/%d/%d", &month2, &day2, &year2);	

	if(year1 != year2){
		if(year1 > year2){
			printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
		}
		else{
			printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
		}
	} else if(month1 != month2){
		if(month1 > month2){
			printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
		}
		else{
			printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
		}
	} else{
		if(day1 == day2){
			printf("%d/%d/%.2d is the same date as %d/%d/%.2d!\n", month1, day1, year1, month2, day2, year2);
		}
		else{
			if(day1 > day2){
				printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
			}
			else{
				printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
			}
		}
	}			
			
	return 0;
}

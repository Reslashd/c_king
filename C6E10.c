/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 6 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int month1 = 0;
	int month2 = 1;
	int day1 = 0;
	int day2 = 1;
	int year1 = 0;
	int year2 = 1;
	int earliest_month = 0;
	int earliest_day = 0;
	int earliest_year = 0;
	bool end_input = 0;
	
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month1, &day1, &year1);	

	while(end_input != 1){
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &month2, &day2, &year2);	
		if(month2 == 0 && day2 == 00 && year2 == 0){
			end_input = 1;
			break;
		}
		else{		
			if(year1 != year2){
				if(year1 > year2){
					earliest_month = month2;
					earliest_day = day2;
					earliest_year = year2;			
				}
				else{
					earliest_month = month1;
					earliest_day = day1;
					earliest_year = year1;	
				}
			} else if(month1 != month2){
				if(month1 > month2){
					earliest_month = month2;
					earliest_day = day2;
					earliest_year = year2;	
				}
				else{
					earliest_month = month1;
					earliest_day = day1;
					earliest_year = year1;
				}
			} else{
				if(day1 == day2){
				}
				else{
					if(day1 > day2){
						earliest_month = month2;
						earliest_day = day2;
						earliest_year = year2;	
					}
					else{
						earliest_month = month1;
						earliest_day = day1;
						earliest_year = year1;
					}
				}
			}
		} 
		// For next iteration of comparing with next date 
		year1 = earliest_year;
		month1 = earliest_month;
		day1 = earliest_day;
	} 
	
	printf("%d/%d/%.2d is the earliest date\n", earliest_month, earliest_day, earliest_year);		
			
	return 0;
}

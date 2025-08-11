/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define PARSE_SUCCESS 0
#define PARSE_ERROR -1

int parse_date(char *date, int *day, int *month, int *year);

int main(void){	
	const char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	char date[11];
	int day = 0;
	int month = 0;
	int year = 0;
	int input = 0;
	int i = 0;
	
	printf("Enter a date (mm/dd/yyyy) : ");	
		
	while((input = getchar()) != '\n' && input != EOF && i < 10){
		if((input >= '0' && input <= '9') || input == '/'){
			date[i++] = (char)input;
		} else {
			puts("Invalid character detected");
			return EXIT_FAILURE;
		}
		date[i] = '\0';
	}
	if(parse_date(date , &day, &month, &year) != PARSE_ERROR){	
		if(month >= 1 && month <= 12){
			printf("You entered the date %s %d, %d\n", months[month - 1], day, year);
		} 
	} else{
		puts("You've entered an invalid date");
	}
	return EXIT_SUCCESS;
	
}
int parse_date(char *date, int *day, int *month, int *year){
	int i = 0;
	
	//parse month
	while(date[i] != '/'){
		*month = *month * 10 + (date[i] - '0');
		i++;
	}
	
	if(*month < 1 || *month > 12){
		return PARSE_ERROR;
	}
	
	i++;
	
	//parse day
	while(date[i] != '/'){
		*day = *day * 10 + (date[i] - '0');
		i++;
	}
	
	if(*day < 1 || *day > 31){
		return PARSE_ERROR;
	}
	
	i++;
	
	//parse year
	while(date[i] != '\0'){
		if(date[i + 2] == '\0'){
			// in case of 2 digits for the year
			if(date[i] != '0' && date[i] > '2'){
				*year = 1900 + ((date[i] - '0') * 10) + (date[i + 1] - '0');
				break;		
			} else if(date[i] != '0' && date[i] == '2'){
				*year = 2000 + ((date[i] - '0') * 10) + (date[i + 1] - '0');
				break;		
			} else if(date[i] != '0' && date[i] < '2'){
				*year = 2000 + ((date[i] - '0') * 10) + (date[i + 1] - '0');
				break;		
			} else if(date[i] == '0'){
				*year = 2000 + ((date[i] - '0') * 10) + (date[i + 1] - '0');			
				break;					
			}
			// in case of 4 digits for the year 			
		} else {
				*year = *year + (date[i] - '0') * 1000;
				*year = *year + (date[i + 1] - '0') * 100;
				*year = *year + (date[i + 2] - '0') * 10;
				*year = *year + (date[i + 3] - '0');
				break;
		}				
		i++;					
	}
	
	return PARSE_SUCCESS;
}

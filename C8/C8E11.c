/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

int main(void){
	int input = 0;
	int end = 0;
	int phone_number[15] = { 0 };
	int char_counter = 0;
	
	printf("Enter phone number: ");	
		
	while (end != 1){	
		if(char_counter <= 15){
			input = getchar();
			
			if (input == '\n' ){	
				phone_number[char_counter] = input;					
				end = 1;
			} else if ((input >= 'A' && input <= 'Z') || (input >= '0' && input <= '9') || (input == '-')){			
				phone_number[char_counter] = input;			
			} 		
			char_counter++;
		} else {
			phone_number[char_counter-1] = '\n';
			end = 1;
			}
	}

	char_counter = 0;
	printf("In numeric form: ");
	while (phone_number[char_counter] != '\n'){
		switch(phone_number[char_counter]){
				case 'A': 
				case 'B':
				case 'C': 	printf("2");
				break;
				case 'D':
				case 'E':
				case 'F': printf("3");
				break;
				case 'G':
				case 'H':
				case 'I': printf("4");
				break;
				case 'J':
				case 'K':
				case 'L': printf("5");
				break;
				case 'M':
				case 'N':
				case 'O': printf("6");
				break;
				case 'P':
				case 'R':
				case 'S': printf("7");
				break;
				case 'T':
				case 'U':
				case 'V': printf("8");
				break;
				case 'W':
				case 'X':
				case 'Y': printf("9");
				break;	
				default:
				printf("%c", phone_number[char_counter]);
				break;
			}				
		char_counter++;
	}
	
	printf("\n");
	return 0;
}

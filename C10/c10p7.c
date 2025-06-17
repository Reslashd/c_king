/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 10 Excercises by Reslashd (c)2025
 * 
 */ 
#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 10

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

//external variables
int digits[4][4 * MAX_DIGITS] = { 0 };
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, // 0
							{0, 1, 1, 0, 0, 0, 0},  // 1
							{1, 1, 0, 1, 1, 0, 1},  // 2
							{1, 1, 1, 1, 0, 0, 1},  // 3
							{0, 1, 1, 0, 0, 1, 1},  // 4
							{1, 0, 1, 1, 0, 1, 1},  // 5
							{1, 0, 1, 1, 1, 1, 1},  // 6
							{1, 1, 1, 0, 0, 0, 0},  // 7
							{1, 1, 1, 1, 1, 1, 1},  // 8
							{1, 1, 1, 1, 0, 1, 1}}; // 9		

int main(void){
	int input = 0;
	int count = 0;
	int digit = 0;
	int position = 0;
	clear_digits_array();
	printf("Enter a number: ");
	while((input = getchar()) != '\n' && count!= MAX_DIGITS){
		if(input >= '0' && input <= '9'){
				digit = input - '0';
				process_digit(digit, position);
				position = position + 4; //set cursor to next number onscreen position
				count++;
		}		
	}

	print_digits_array();
	return EXIT_SUCCESS;
}

void clear_digits_array(void){
	for(int i = 0 ; i < 4 ; i++){
		for(int j = 0 ; j < (4 * MAX_DIGITS) ; j++){
			//initialize with spaces so the numbers will be seperated
			digits[i][j] = ' ';
		}		
	}	
}
//does segment have to be on for this number?
//then set corresponding segment character in digits array
void process_digit(int digit, int position){
	for(int i = 0 ; i < 7 ; i++){		
		if(segments[digit][i] == 1){			
			switch(i){
				case 0:
				digits[0][1 + position] = '_';
				break;
				case 1:
				digits[1][2 + position] = '|';
				break;
				case 2:
				digits[2][2 + position] = '|';
				break;		
				case 3:
				digits[2][1 + position] = '_';
				break;
				case 4:
				digits[2][0 + position] = '|';
				break;
				case 5:
				digits[1 ][0 + position] = '|';
				break;
				case 6:
				digits[1][1 + position] = '_';	
			}
		}
	}
}

void print_digits_array(void){
for(int i = 0 ; i < 4 ; i++){
	printf("\n");
	for(int j = 0 ; j < (4 * MAX_DIGITS) ; j++){
		printf("%c", digits[i][j]);
	}		
	}	
}

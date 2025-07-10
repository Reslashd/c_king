/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define MESSAGE_LENGTH 50

void readMessage(int message[MESSAGE_LENGTH]);
void reverseMessage(int message[MESSAGE_LENGTH]);

int main(void){
	int message[MESSAGE_LENGTH];
	int *p;
	
	for(p = message ; p < (message + MESSAGE_LENGTH) ; p++){
		*p = 0;
	}
				
	printf("Enter a message: ");
	readMessage(message);
	reverseMessage(message);
	
	return EXIT_SUCCESS;
}

void readMessage(int message[MESSAGE_LENGTH]){
	int input = 0;
	int *p;
	p = message;
	
	while((input = getchar()) != '\n' && p < (message + MESSAGE_LENGTH)){
		*p = input;
		p++;		
	}	
}

void reverseMessage(int message[MESSAGE_LENGTH]){
	int *p;
		
	printf("Reversal is: ");
	for(p = message + (MESSAGE_LENGTH-1); p >= message ; p--){		
		printf("%c", *p);
	}	
}

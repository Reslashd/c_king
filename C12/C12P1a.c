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
	
	for(int i = 0 ; i < MESSAGE_LENGTH ; i++){
		message[i] = 0;
	}
				
	printf("Enter a message: ");
	readMessage(message);
	reverseMessage(message);
	
	return EXIT_SUCCESS;
}

void readMessage(int message[MESSAGE_LENGTH]){
	int input = 0;
	int i = 0;
	
	while((input = getchar()) != '\n' && i < MESSAGE_LENGTH){
		message[i] = input;
		i++;		
	}	
}

void reverseMessage(int message[MESSAGE_LENGTH]){
	printf("Reversal is: ");
	for(int i = MESSAGE_LENGTH-1 ; i >= 0 ; i--){		
		printf("%c", message[i]);
	}
}

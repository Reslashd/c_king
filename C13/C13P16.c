/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define MESSAGE_LENGTH 50

void readMessage(char message[MESSAGE_LENGTH]);
void reverse(char *message);

int main(void){
	char message[MESSAGE_LENGTH];
	
	for(int i = 0 ; i < MESSAGE_LENGTH ; i++){
		message[i] = 0;
	}
				
	printf("Enter a message: ");
	readMessage(message);
	reverse(message);
	printf("Reversal is: ");
	puts(message);
	
	return EXIT_SUCCESS;
}

void readMessage(char message[MESSAGE_LENGTH]){
	int input = 0;
	int i = 0;
	
	while((input = getchar()) != '\n' && input != EOF && i < MESSAGE_LENGTH){
		message[i] = (char)input;
		i++;		
	}	
	message[i] = '\0';
}

void reverse(char *message){
	char temp = 0;
	int i = 0;
	char *p1;
	char *p2;
	p1 = &message[0];
	p2 = &message[0]; //initialize to a valid address

	
	//find last character of message
	while(message[i] != '\0'){
		i++;
	}
	p2 = &message[i - 1];
	
	//swap characters
	while(p1 < p2){
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2--;
	}
}

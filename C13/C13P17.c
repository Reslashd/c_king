/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define MESSAGE_LENGTH 50

void readMessage(char *message);
bool is_palindrome(const char *message);

int main(void){
	char message[MESSAGE_LENGTH];
	char *p;
	
	for(p = message ; p < (message + MESSAGE_LENGTH) ; p++){
		*p = 0;
	}
				
	printf("Enter a message: ");
	readMessage(message);
	
	if(is_palindrome(message)){
		printf("Palindrome\n");
	} else {
		printf("Not a palindrome\n");
	}
	
	return EXIT_SUCCESS;
}

void readMessage(char *message){
	int input = 0;
	char *p;
	p = message;
	
	while((input = getchar()) != '\n' && p < (message + MESSAGE_LENGTH)){
		if ((input >= 'A' && input <= 'Z')|| (input >= 'a' && input <= 'z')){
			*p = (char)tolower(input);
			p++;	
		}
	}	
	*p = '\0';
}

bool is_palindrome(const char *message){
	const char *p;
	const char *p2;
	p = message;
	p2 = message; // initialize to a valid adress
	
	//find last char of array
	while(*p != '\0'){
		p++;
	}
	
	if (p == message) {
		return true; // in case of empty string
	}
	
	p2 = p - 1; //p2 = last char of array
	p = message;
	
	while(p < p2){
		if(*p != *p2){
			return false;
		} 
		p++;
		p2--;
	}
	return true;
}

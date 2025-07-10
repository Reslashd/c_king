/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define MESSAGE_LENGTH 50

int readMessage(int message[MESSAGE_LENGTH]);
void checkPalindrome(int message[MESSAGE_LENGTH], int numChars);

int main(void){
	int message[MESSAGE_LENGTH];
	int numChars = 0;
	int *p;
	
	for(p = message ; p < (message + MESSAGE_LENGTH) ; p++){
		*p = 0;
	}
				
	printf("Enter a message: ");
	numChars = readMessage(message);
	checkPalindrome(message, numChars);
	
	return EXIT_SUCCESS;
}

int readMessage(int message[MESSAGE_LENGTH]){
	int input = 0;
	int *p;
	int char_count = 0;
	p = message;
	
	while((input = getchar()) != '\n' && p < (message + MESSAGE_LENGTH)){
		if ((input >= 'A' && input <= 'Z')|| (input >= 'a' && input <= 'z')){
			*p = tolower(input);
			p++;	
			char_count++;
		}
	}	
	return char_count;
}

void checkPalindrome(int message[MESSAGE_LENGTH], int numChars){
	bool palindrome = true;
	int *p;
	int *p2;
	p = message;
	p2 = message + (numChars - 1);
	
	while(palindrome && p < p2){
		if(*p != *p2){
			palindrome = false;
		} 
		p++;
		p2--;
	}	
	
	if(palindrome){
		printf("Palindrome\n");
	} else {
		printf("Not a palindrome\n");
	}
}

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
	
	for(int i = 0 ; i < MESSAGE_LENGTH ; i++){
		message[i] = 0;
	}
				
	printf("Enter a message: ");
	numChars = readMessage(message);
	checkPalindrome(message, numChars);
	
	return EXIT_SUCCESS;
}

int readMessage(int message[MESSAGE_LENGTH]){
	int input = 0;
	int i = 0;
	
	while((input = getchar()) != '\n' && i < MESSAGE_LENGTH){
		if ((input >= 'A' && input <= 'Z')|| (input >= 'a' && input <= 'z')){
			message[i] = tolower(input);
			i++;	
		}
	}	
	return i;
}

void checkPalindrome(int message[MESSAGE_LENGTH], int numChars){
	int i = 0;
	int j = 1; 
	bool palindrome = true;
	
	while(palindrome && i < numChars){
		if(message[i] != message[numChars-j]){
			palindrome = false;
		} 
		i++;
		j++;
	}	
	
	if(palindrome){
		printf("Palindrome\n");
	} else {
		printf("Not a palindrome\n");
	}
}

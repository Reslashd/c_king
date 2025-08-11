/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(char *message, int shift);

int main(void){
	
	char message[80] = { 0 };
	int input = 0;
	int i = 0;
	int shift = 0;
	
	printf("Enter message to be encrypted: ");	
	
	while(i < 80 && (input = getchar()) != '\n' && input != EOF){
		message[i] = (char)input;
		i++;
	}
	i = 0;
	
	printf("Enter shift amount (1-25): ");
	while((scanf("%d", &shift)) == 0){
		scanf("%*[^\n]");
		printf("Enter shift amount (1-25): ");
	}
	
	encrypt(message, shift);	
	if(shift < 1 || shift > 25){
		printf("Non encrypted message: ");
	} else{
		printf("Encrypted message: ");
	}
	while(i < 80 && message[i] != 0){
		printf("%c", message[i]);	
		i++;	
	}
	printf("\n");
	
	return EXIT_SUCCESS;
}

void encrypt(char *message, int shift){
	int e = 0;
	
	if(shift < 1 || shift > 25){
		printf("Not a valid value, can't encrypt your message!\n");
		return;
	}		
	
	while(e < 80 && message[e] != 0){
		if (message[e] >= 'A' && message[e] <= 'Z'){
			message[e] = (char)(((message[e] - 'A') + shift) % 26) + 'A';
		} else if(message[e] >= 'a' && message[e] <= 'z'){
			message[e] = (char)(((message[e] - 'a') + shift) % 26) + 'a';
		}
		e++;	
	}
}

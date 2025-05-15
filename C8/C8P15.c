/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

int main(void){
	
	int message[80] = { 0 };
	int input = 0;
	int e = 0;
	int i = 0;
	int j = 0;
	int shift = 0;
	
	printf("Enter message to be encrypted: ");	
	
	while(i < 80 && (input = getchar()) != '\n'){
		message[i] = input;
		i++;
	}
	
	printf("Enter shift amount (1-25): ");
	while((scanf("%d", &shift)) == 0){
		scanf("%*[^\n]");
		printf("Enter shift amount (1-25): ");
	}
		
	if(shift < 1 || shift > 25){
		printf("Not a valid value, can't encrypt your message!\n");
		shift = 0;
	}
	
	while(e < 80 && message[j] != 0){
		if (message[e] >= 'A' && message[e] <= 'Z'){
			message[e] = (((message[e] - 'A') + shift) % 26) + 'A';
		} else if(message[e] >= 'a' && message[e] <= 'z'){
			message[e] = (((message[e] - 'a') + shift) % 26) + 'a';
		}
		e++;	
	}
		
	if(shift != 0){
		printf("Encrypted message: ");
		while(j < 80 && message[j] != 0){
			printf("%c", message[j]);	
			j++;	
		}
		printf("\n");
	}
	
	return 0;
}

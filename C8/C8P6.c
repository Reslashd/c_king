/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

int main(void){		
	char message[100];
	char input = 0;
	int i = 0;
	printf("Enter message: ");
	
	while(input != '\n'){
		input = getchar();
		if (input == '\n'){
			message[i] = '\0';
			i = 0;
		} else{
			message[i] = input;	
			i++;		
		}
	}	
	
	printf("In B1FF-speak: ");
	while(message[i] != '\0'){
		if(message[i] == 'a' || message[i] == 'A'){
			printf("4");
		} else if(message[i] == 'b' || message[i] == 'B'){
			printf("8");
		} else if(message[i] == 'e' || message[i] == 'E'){
			printf("3");
		} else if(message[i] == 'i' || message[i] == 'I'){
			printf("1");
		} else if(message[i] == 'o' || message[i] == 'O'){
			printf("0");
		} else if(message[i] == 's' || message[i] == 'S'){
			printf("5");
		} else{
			if(message[i] >= 97 && message[i] <= 122){
				printf("%c", message[i]-32);
			} else {
				printf("%c", message[i]);
			}
		}
		i++;
	}
	printf("!!!!!!!!!!");
	printf("\n");	
	
	return 0;
}

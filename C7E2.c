/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 7 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){

	int i = 0;
	int n = 0;
	int counter = 0;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	
	for (i = 1 ; i <= n; i++){		
		printf("%10d%10d\n", i, i * i);
		counter++;
		if(counter == 24){
			counter = 0;
			printf("Press Enter to continue...\n");
			while(getchar() != '\n');
		}
	}
	
	return 0;
}

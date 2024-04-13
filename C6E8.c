/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 6 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){
	int n_days = 0;
	int s_day = 0;
	int j = 0;
	
	printf("Enter number of days in month: ");
	scanf("%d", &n_days);
	printf("Enter starting day of the week (1= Sun, 7=Sat): ");
	scanf("%d", &s_day);
	
	for(int i = 1; i < s_day; i++){
		printf("    ");
	}
	j = s_day;
	
	for(int i = 1; i <= n_days ; i++){		
		
		printf("%3d ", i);		
		if(j == 7){
			printf("\n");
			j= 0;
		}
		j++;
	}
	printf("\n");
	return 0;
}

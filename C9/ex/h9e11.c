/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

float compute_GPA(char grades[], int n);

int main(void){	
	float gpa  = 0;
	int n = 5;
	char grades[n];
	
	for(int i = 0; i < n ; i++){
		if(i == 0){
			grades[i] = 'A';
		} else if (i == 4){
			grades[i] = 'F';
		} else{
			grades[i] = grades[i-1] + 1;
		}		
	}
	
	gpa = compute_GPA(grades, n);
	printf("GPA is %.2f\n" , gpa);
	
	return 0;
}

float compute_GPA(char grades[], int n){
	float gpa = 0;
	for(int i = 0 ; i < n ; i++){
		switch(grades[i]){
			case 'A': gpa = gpa + 4;			
			break;
			case 'B': gpa = gpa + 3;			
			break;
			case 'C': gpa = gpa + 2;			
			break;
			case 'D': gpa = gpa + 1;			
			break;
			case 'F': gpa = gpa + 0;			
			break;			
		}
	}
	gpa = gpa / (float)n;
	return gpa;
}

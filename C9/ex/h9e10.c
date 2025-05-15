/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

int largest(int a[], int n);
double avg(int a[], int n);
int numPositives(int a[], int n);

int main(void){	
	int n = 10;
	int a[n];
	int largest_num = 0;
	double avg_num = 0.0;
	int positives = 0;
	
	for(int i = 0; i < n ; i++){
		if(i == 0){
			a[i] = 3;
		} else {
			a[i] = a[i-1] + 3;		
		}		
	}
	
	largest_num = largest(a, n);
	printf("Largest element in array a = %d\n", largest_num);
	
	avg_num = avg(a, n);
	printf("Average of all elements in array a = %.2f\n" , avg_num);
	
	positives = numPositives(a, n);
	printf("The number of positive elements in array a = %d" , positives);
	
	return 0;
}

int largest(int a[], int n){
	int largest = 0;
	
	for(int i = 0; i < n ; i++){
		if(largest < a[i]){
			largest = a[i];	
		}	
	}
	return largest;
}
double avg(int a[], int n){
	double avg = 0.0;
	
	for(int i = 0; i < n ; i++){		
		avg = avg + a[i];
	}
	avg = avg / n;	
	return avg;
}
int numPositives(int a[], int n){
	int positives = 0;
	
	for(int i = 0; i < n ; i++){		
		if(a[i] > 0){
			positives++;
		}
	}	
	return positives;
}

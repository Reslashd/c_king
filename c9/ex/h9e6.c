/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

int digit(int n, int k);

int main(void){	
	int kth = 0;
	kth = digit(829, 1);
	printf("The digit from the right is %d\n", kth);

	return 0;
}

int digit(int n, int k){
	int kth = 0;
	int array[20] = { 0 };
	int n_divisions = 0;
	int i = 0;

	while(n != 0){
		array[i] = n % 10;
		n = n / 10;
		n_divisions++;
		i++;
	}	
	
	if (k <= n_divisions){		
		kth = array[k - 1];
	}
		
	return kth;
}

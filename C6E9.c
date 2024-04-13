/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 6 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){
	float rate = 0.0f;
	float payment = 0.0f;
	float balance = 0.0f;
	int n_payments = 0;
	
	printf("Enter amount of loan: ");
	scanf("%f", &balance);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	printf("Enter number of payments: ");
	scanf("%d", &n_payments);
	rate = (rate / 12.0f) / 100.0f;
	
	printf("\n");
	for(int i = 0 ; i < n_payments ; i++){
		balance = (balance * (1 + rate)) - payment;
		printf("Balance remaining after payment %d: %.2f\n", i+1, balance);
	}	
	return 0;
}

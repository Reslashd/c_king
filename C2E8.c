/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter x Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){
	float rate = 0.0f;
	float payment = 0.0f;
	float balance = 0.0f;
	
	printf("Enter amount of loan: ");
	scanf("%f", &balance);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	rate = (rate / 12.0f) / 100.0f;
	balance = (balance * (1 + rate)) - payment;
	printf("\nBalance remaining after first payment: %.2f\n", balance);
	balance = (balance * (1 + rate)) - payment;
	printf("Balance remaining after second payment: %.2f\n", balance);
	balance = (balance * (1 + rate)) - payment;
	printf("Balance remaining after third payment: %.2f\n", balance);
	return 0;
}

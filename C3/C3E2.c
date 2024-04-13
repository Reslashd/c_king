/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 3 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){
	int item_number, month, day, year = 0;
	float unit_price = 0.0f;
	printf("Enter item number: ");
	scanf("%d", &item_number);
	printf("Enter unit price: ");
	scanf("%f", &unit_price);
	printf("Enter purchase date (mm//dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("\nItem\tUnit\t\tPurchase\n");
	printf("\tPrice\t\tDate\n");
	printf("%d\t$ %.2f\t%d/%d/%d\n", item_number, unit_price, month, day, year);

	return 0;
}

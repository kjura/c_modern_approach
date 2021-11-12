#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Chapter 2 Project 7

int main(void)
{
	
	int amount, twenty_bills, ten_bills, five_bills, one_bill, reduced_amount;
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);
	
	twenty_bills = amount / 20;
	reduced_amount = amount - twenty_bills * 20;
	printf("Reduced amount is: %d\n", reduced_amount);
	printf("$20 bills: %d\n", twenty_bills);

	ten_bills = reduced_amount / 10;
	reduced_amount = reduced_amount - ten_bills * 10;
	printf("Reduced amount is: %d\n", reduced_amount);
	printf("$10 bills: %d\n", ten_bills);

	five_bills = reduced_amount / 5;
	reduced_amount = reduced_amount - five_bills * 5;
	printf("Reduced amount is: %d\n", reduced_amount);
	printf("$5 bills: %d\n", five_bills);

	one_bill = reduced_amount / 1;
	reduced_amount = reduced_amount - one_bill;
	printf("Reduced amount is: %d\n", reduced_amount);
	printf("$1 bills: %d\n", one_bill);

	printf("\n");
	printf("Program finished");
	return 0;
}

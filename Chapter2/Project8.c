#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Chapter 2 Project 8

int main(void)
{
	
	float amount_loan, rate, payment;
	printf("Enter amount of loan: ");
	scanf("%f", &amount_loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	float rate_part = (1.0f + (rate / 100.0f));
	float fv_original_balance = amount_loan * rate_part - payment * ((rate_part - 1.0f) / rate);
	float fv_annuity = 0.0f;

	printf("Balance remaining after first payment: %f \n", fv_original_balance);
	printf("Balance remaining after second payment: \n");
	printf("Balance remaining after third payment: \n");

	return 0;
}
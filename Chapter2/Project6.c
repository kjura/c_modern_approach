//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Chapter 2 Project 6

int main(void)
{
	
	float x, polynomial_horner;
	printf("Please provide a value for x ");
	scanf("%f", &x);

	polynomial_horner = ( ( ( ( ( ( (3 * x) + 2) * x - 5 ) * x - 1 ) * x ) + 7) * x ) - 6;

	printf("Attempting to evaluate 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("The value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is %f\n", polynomial_horner);

	return 0;
}

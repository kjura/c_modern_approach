#include <stdio.h>


// Chapter 2 Project 5

int main(void)
{
	
	float x, polynomial;
	printf("Please provide a value for x ");
	scanf("%f", &x);

	polynomial = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;

	printf("Attempting to evaluate 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("The value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is %f\n", polynomial);

	return 0;
}

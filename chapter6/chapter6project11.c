#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Chapter 6 Project 11


int main(void)
{    



	int n;
	int factorial_sum = 1;
	int j;
	float e_sum = 0.00;

	printf("Provide n for e-series: ");
	scanf("%d", &n);

	if (n < 0)
	{
		printf("n must be greater than 0 (Your input was n = %d)\n", n);
		return 0;
	}

	for (j = 1; j <= n; ++j)
	{
		factorial_sum *= j;
		e_sum += 1.00f / factorial_sum;
	}

	e_sum = e_sum + 1.000000f;

	//printf("The factorial %d! is: %d", n, factorial_sum);
	printf("The value of e at n = %d is: %.6f\n", n, e_sum);
	
	
	return 0;
}

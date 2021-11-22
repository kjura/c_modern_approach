#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Chapter 6 Project 12


int main(void)
{    

	float epsilon;
	float current_term = 1.00f;
	int n = 1;
	float euler_constant = 1.00f;

	printf("Provide epsilon value: (epsilon must be greater than 0): ");
	scanf("%f", &epsilon);


	if (epsilon < 0)
	{
		printf("Epsilon must be greater than 0 (Your input was epsilon = %f)\n", epsilon);
		return 0;
	}

	int factorial_sum = 1;

	while (current_term > epsilon)
	{
		//printf("Iteration number: %d\n", n);
		factorial_sum *= n;
		//printf("Factorial for current n = %d is: %d\n", n, factorial_sum);
		n += 1;
		current_term = 1.000000f / factorial_sum;
		//printf("Current term is: %f\n\n", current_term);
		euler_constant += current_term;

	}
	

	printf("The value of e at n = %d is: %.6f\n", n, euler_constant);
	
	
	return 0;
}

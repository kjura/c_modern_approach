#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Chapter 6 Project 5
// Reverse digits of some number.

int main(void)
{
    
	int number;

	printf("Please provide the number to be reversed: ");
	scanf("%d", &number);

	if (number == 0)
	{
		printf("The reverse of 0 is 0.\n");
		return 0;
	}

	do 
	{
		printf("%d", number % 10);
		number /= 10;
		
	} while (number != 0);
	printf("\n");
	return 0;
}

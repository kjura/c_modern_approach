#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Chapter 5 Project 1


int main(void)
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);


	if (number < 0){
		printf("Negative numbers not allowed. Terminating the program.");
		return 0;
	}

	if (number > 9999) {

		printf("Number has more than four digits (number = %d). Terminating the program.\n", number);
		return 0;

	}


	else if (number >= 0 && number <= 9){ printf("The number %d has %d digit\n", number, 1); }

	else if (number >= 10 && number <= 99) { printf("The number %d has %d digits\n", number, 2); }

	else if (number >= 100 && number <= 999) { printf("The number %d has %d digits\n", number, 3); }

	else { printf("The number %d has %d digits\n", number, 4); }


	return 0;
}

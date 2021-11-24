#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Chapter 6 Project 8
// gcc -O -Wall -W -pedantic -ansi -std=c99 -o chapter6project8 chapter6project8.c

int main(void)
{    

	int n_month;
	int start_day;

	printf("Enter number of days in month: ");
	scanf("%d", &n_month);

	switch (n_month)
	{
	case 31:
		break;
	
	case 30:
		break;

	case 29:
		break;
	
	case 28:
		break;

	default:
		printf("Number of days in month can be either 28, 29, 30 or 31 (Your input: %d)\n", n_month);
		return 0;
	}

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start_day);

	if (start_day > 7 || start_day < 1)
	{
		printf("Day of the week can be an integer between 1 and 7. Your input %d", start_day);
		return 0;
	}
	
	

	int last_day = 9 - start_day;

	for(int j = 1; j <= start_day - 1; ++j)
	{
		printf("   ");
	}
    
	// 1 = Sunday; 2 = Monday; 3 = Tuesday; 4 = Wednesday; 5 = Thursday; 6 = Friday, 7 = Saturday
	// 20 spaces total in a row

	for (int i = 1; i <= n_month; ++i)
	{

		if (i == last_day)
		{
			printf("\n");
			last_day += 7;
		}

		printf("%2d ", i);
	
	}
	
	
	printf("\n");
	return 0;

}



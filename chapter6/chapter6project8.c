#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Chapter 6 Project 8


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
	
	// 1 = Sunday; 2 = Monday; 3 = Tuesday; 4 = Wednesday; 5 = Thursday; 6 = Friday, 7 = Saturday

	int last_day = 9 - start_day;
	int first_row_spaces = start_day - 1;

	for (int i = 1 - first_row_spaces; i <= n_month; ++i)
	{
		if (i < 1)
		{
			printf(" ");
			continue;
		}

		if (i == last_day)
		{
			printf("\n");
			last_day += 7;
		}

		printf("%d ", i);
	
	}
	
	return 0;
}

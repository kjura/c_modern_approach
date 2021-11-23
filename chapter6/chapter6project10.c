#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Chapter 6 Project 10


int main(void)
{    


	int previous_month, previous_day, previous_year;
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &previous_month, &previous_day, &previous_year);

	if (previous_month == 0 && previous_day == 0 && previous_year == 0)
	{
		printf("No earliest date (input was 0/0/0 in the first row). Terminating ...");
		return 0;
	}

	int next_month, next_day, next_year;

	int earliest_month, earliest_day, earliest_year;

	do
	{
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &next_month, &next_day, &next_year);

		if (next_year < previous_year)
		{
			earliest_year = next_year;
			earliest_month = next_month;
			earliest_day = next_day;
		}



	} 
	while (next_month != 0 && next_day != 0 && next_year != 0);


	printf("%d/%d/%.2d is the earliest date\n", earlier_month, earlier_day, earlier_year);

	
	return 0;
}

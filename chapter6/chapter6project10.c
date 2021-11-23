#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Chapter 6 Project 10


int main(void)
{    


	int first_month, first_day, first_year;
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &first_month, &first_day, &first_year);

	if (first_month == 0 && first_day == 0 && first_year == 0)
	{
		printf("No earliest date (input was 0/0/0 in the first row). Terminating ...");
		return 0;
	}

	int month, day, year;
	int earlier_month, earlier_day, earlier_year;


	do
	{
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &month, &day, &year);

		if (year < first_year)
		{
			earlier_month = month;
			earlier_day = day;
			earlier_year = year;
		}

		if (month < first_month)
		{
			earlier_month = month;
			earlier_day = day;
			earlier_year = year;
		}

		if (day < first_day)
		{
			earlier_month = month;
			earlier_day = day;
			earlier_year = year;
		}


	} 
	while (month != 0 && day != 0 && year != 0);


	printf("%d/%d/%.2d is the earliest date\n", earlier_month, earlier_day, earlier_year);

	
	return 0;
}

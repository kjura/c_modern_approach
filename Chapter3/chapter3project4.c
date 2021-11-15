#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Chapter 3 Project 4

int main(void)
{
	int country_number;
	int first_part;
	int second_part;
	printf("Enter phone number [(xxx) xxx-xxxx] : ");
	scanf("(%d) %d-%d", &country_number, &first_part, &second_part);
	printf("You entered %d.%d.%d ", country_number, first_part, second_part);


	return 0;
}

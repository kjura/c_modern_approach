#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Chapter 3 Project 5
// Magic squares, probly could be done better with loops and arrays I guess :/

int main(void)
{
	int one, two, three, four;
	int five, six, seven, eight;
	int nine, ten, eleven, twelve;
	int thirteen, fourteen, fifteen, sixteen;

	printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three,
	&four, &five, &six, &seven, &eight, &nine, &ten,
		&eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

	printf("\n%2d %2d %2d %2d\n", one, two, three, four);
	printf("%2d %2d %2d %2d\n", five, six, seven, eight);
	printf("%2d %2d %2d %2d\n", nine, ten, eleven, twelve);
	printf("%2d %2d %2d %2d\n\n", thirteen, fourteen, fifteen, sixteen);
	printf("Row sums: %d %d %d %d\n", one + two + three + four,
		five+six+seven+eight, nine+ten+eleven+twelve, 
		thirteen+fourteen+fifteen+sixteen);

	printf("Column sums: %d %d %d %d\n", one + five + nine + thirteen,
		two + six + ten + fourteen, three + seven + eleven + fifteen,
		four + eight + twelve + sixteen);

	printf("Diagonal sums: %d %d", one + six + eleven + sixteen,
		four + seven + ten + thirteen);



	return 0;
}

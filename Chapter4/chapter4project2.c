#include <stdio.h>
#include <math.h>

// Chapter 4 Project 2


int main(void)
{

    int number;
    int first_digit, middle_digit, last_digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    first_digit = number / 10;
    last_digit = number % 10;


    printf("The reversal is: %d%d%d\n", last_digit, middle_digit, first_digit);


    return 0;
}

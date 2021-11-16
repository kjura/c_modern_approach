#include <stdio.h>


// Chapter 4 Project 1


int main(void)
{

    int number;
    int first_digit, last_digit;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    first_digit = number / 10;
    last_digit = number % 10;


    printf("The reversal is: %d%d\n", last_digit, first_digit);


    return 0;
}

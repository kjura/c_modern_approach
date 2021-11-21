//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// gcc -O -Wall -W -pedantic -ansi -std=c99 -o chapter6project3 chapter6project3.c
// Chapter6 Project 3


int main(void)
{


    int numerator, denominator, remainder, gcd;


    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    if(denominator == 0)
    {
        printf("Denominator cannot be equal to 0. Terminating ...");
    }
    
    int reduced_n = numerator;
    int reduced_d = denominator;

    while(denominator != 0)
    {
        remainder = numerator % denominator;

        numerator = denominator;
        denominator = remainder;
    }

    gcd = numerator;

    //printf("GCD is %d\n", gcd);


    printf("In lowest terms: %d/%d\n", reduced_n / gcd, reduced_d / gcd);


    return 0;
}

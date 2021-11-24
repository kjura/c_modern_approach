//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

// gcc -O -Wall -W -pedantic -ansi -std=c99 -o chapter6project6 chapter6project6.c
// Chapter6 Project 6


int main(void)
{
    int n;
    printf("This program prints all even squares between 1 and n\n");
    printf("Enter a number n: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("n cannot be negative or 0 (your input %d), terminating ...\n", n);
    }

    int counter = 0;

    for(int i = 2; i*i <= n; ++i)
    {
        if(((i * i) % 2 == 0))
        {
            printf("%d\n", i*i);
            counter += 1;
        }

    }

    if(counter == 0)
    {
        printf("There are no even squares between 1 and %d. Terminating ...\n", n);
    }

    return 0;
}

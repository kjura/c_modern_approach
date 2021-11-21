//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// gcc -O -Wall -W -pedantic -ansi -std=c99 -o chapter6project2 chapter6project2.c
// Chapter6 Project 2


int main(void)
{

    int m, n;
    int remainder;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);
    
    if(n == 0)
    {
        printf("Greatest common divisor: %d\n", m);
        return 0;
    }

    while(n != 0)
    {
        remainder = m % n;

        m = n;
        n = remainder;
    }


    printf("Greatest common divisor: %d\n", m);

    return 0;
}

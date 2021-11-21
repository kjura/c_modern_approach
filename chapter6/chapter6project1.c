//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// gcc -O -Wall -W -pedantic -ansi -std=c99 -o chapter6project1 chapter6project1.c

int main(void)
{

    float number;
    float max = 0.0f;

    while(1)
    {
        printf("Enter a number: ");
        scanf("%f", &number);
        

        if(number > max)
        {
            max = number;
        }

        if(number <= 0)
        {
            printf("The largest number entered was %.2f\n", max);
            break;
        }

    }


    return 0;
}

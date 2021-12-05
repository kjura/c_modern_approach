// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// gcc -O -Wall -W -pedantic -ansi -std=c99 -o chapter7project15 chapter7project15.c

int main(void){


    int n;

    //short sum_short = 1;; // Largest value of n to make sense when using short is: 7, When n=8 the result is garbage
    //int sum_int = 1; //  Largest value of n to make sense when using int is: 12, When n=13 the result is garbage
    long sum_long = 1.00f; // Largest value of n to make sense when using long int is: 20 , When n=21 the result is garbage
    //long long sum_long_long = 1.00f;

    //float sum_float = 1.00f;
    //double sum_double = 1.00f;
    //long double sum_long_double = 1.00f;



    printf("Enter a positive integer: ");
    scanf("%ld", &n);

    for(int i = 1; i <= n; ++i){

        sum_long *= i;

    }
    
    //printf("Factorial of %d: %hd\n", n, sum_short);
    //printf("Factorial of %d: %d\n", n, sum_int);
    printf("Factorial of %d: %ld\n", n, sum_long);
    //printf("Factorial of %d: %lld\n", n, sum_long_long);
    //printf("Factorial of %d: %hd\n", n, sum_short);
    //printf("Factorial of %d: %hd\n", n, sum_short);
    //printf("Factorial of %d: %hd\n", n, sum_short);

    return 0;
}

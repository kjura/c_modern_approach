// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// gcc -O -Wall -W -pedantic -ansi -std=c99 -o chapter7project14 chapter7project14.c


int main(void){

    double x, y, ratio, avg_xy;
    
    y = 1.00;
    bool is_negative = true;
    

    while(is_negative){

        printf("Enter a positive number: ");
        scanf("%lf", &x);
        printf("\n");
        if(x < 0){
        printf("Negative values not allowed (you entered %lf)\n", x);
        }
        else{
            is_negative = false;
        }

    }
    
    
    printf("x\t\t\ty\t\t\tx/y\t\t\tAverage of\n\t\t\t\t\t\t\t\t\tx/y\n");
    //printf("                                                                     y and x/y \n");
    printf("_________________________________________________________________________________\n");


    double abs_diff;
    double precision_limit;

    while(1){

    printf("%g\t\t", x);
    printf("\t%g\t\t", y);


    ratio = x / y;
    printf("\t%g\t", ratio);


    avg_xy = (y + (x / y)) / 2;
    printf("\t\t%g\n", avg_xy);
    
    abs_diff = fabs(y - avg_xy);
    precision_limit = 0.000001 * y;

    if (abs_diff < precision_limit)
    {
        printf("\nSquare root: %g\n", y);
        break;
    }

    y = avg_xy;

    //printf("%f\t\t%f\t\t%f\t\t%f\n", x, y, ratio, avg_xy);

    }


    return 0;
}

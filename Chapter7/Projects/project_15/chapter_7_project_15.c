// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// gcc -O -Wall -W -pedantic -ansi -std=c99 -o chapter<YOUR NUMBER>project<YOUR NUMBER> chapter<YOUR NUMBER>project<YOUR NUMBER>.c



/* 

    This exercise should be done with "fake" generics and not manually, leaving it for now

*/


void shortFactorial() {
    
    short input;
    printf("Enter a short: ");
    int value = scanf("%hd", &input);

    if (value == 1) {         

        short factorial = 1;
        for (int i = input; i > 0; i--) {
            factorial *= i;
        }

        printf("Factorial of %hd: %hd\n", input, factorial);
    }

    else {
        printf("Failure to read input using scanf. Quitting...\n");
    }


}



int main(void){



    shortFactorial(); // On my machine, short works up until short = 7

    
    return 0;

}

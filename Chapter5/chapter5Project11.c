//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// chapter 5 project 11
// gcc -O -Wall -W -pedantic -ansi -std=c99 -o chapter5project11 chapter5project11.c

int main(void)
{
    int number;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if(number < 0){
        printf("Negative values not allowed. Terminating ...\n");
        return 0;
    }

    if(number > 99 || number < 10)
    {
        printf("Only two-digit numbers are allowed. Terminating ...\n");
        return 0;
    }
    
    switch (number)
    {
    case 10:
        printf("You entered the number ten.\n");
        return 0;
    case 11:
        printf("You entered the number eleven.\n");
        return 0;
    case 12:
        printf("You entered the number twelve.\n");
        return 0;
    case 13:
        printf("You entered the number thirteen.\n");
        return 0;
    case 14:
        printf("You entered the number fourteen.\n");
        return 0;
    case 15:
        printf("You entered the number fifteen.\n");
        return 0;
    case 16:
        printf("You entered the number sixteen.\n");
        return 0;
    case 17:
        printf("You entered the number seventeen.\n");
        return 0;
    case 18:
        printf("You entered the number eighteen.\n");
        return 0;
    case 19:
        printf("You entered the number nineteen.\n");
        return 0;
    default:
        break;
    }

    int units, tens;

    tens = number / 10;
    units = number % 10;

    //printf("Tens number is: %d\n", tens);
    //printf("Units number is: %d\n", units);
    
    printf("You entered the number ");

    switch (tens)
    {
    
    case 2:
        printf("twenty");
        break;
    case 3:
        printf("thirty");
        break;
    case 4:
        printf("forty");
        break;
    case 5:
        printf("fifty");
        break;
    case 6:
        printf("sixty");
        break;
    case 7:
        printf("seventy");
        break;
    case 8:
        printf("eighty");
        break;
    case 9:
        printf("ninety");
        break;         
    default:
        break;
    }


    switch (units)
    {
    
    case 1:
        printf("-one");
        break;
    case 2:
        printf("-two");
        break;
    case 3:
        printf("-three");
        break;
    case 4:
        printf("-four");
        break;
    case 5:
        printf("-five");
        break;
    case 6:
        printf("-six");
        break;
    case 7:
        printf("-seven");
        break;
    case 8:
        printf("-eight");
        break;
    case 9:
        printf("-nine");
        break;
    default:
        break;
    }


    printf(".\n");



    return 0;

}

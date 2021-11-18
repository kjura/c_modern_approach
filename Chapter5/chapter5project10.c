//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Chapter 5 Project 10



int main(void)
{
    int grade;
    int tens_digit;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if(grade > 100 || grade < 0)
    {
        printf("Error: Grade cannot be greater than 100 or lower than 0 (Input was %d)\n", grade);
        return 0;
    }

    if(grade == 100 || grade == 0)
    {
        tens_digit = grade;
    }

    else
    {
        tens_digit = grade / 10;
    }

        switch(tens_digit)
    {
        case 100:
            printf("Letter grade: A\n");
            break;

        case 0:
            printf("Letter grade: F\n");
            break;

        case 9:
            printf("Letter grade: A\n");
            break;

        case 8:
            printf("Letter grade: B\n");
            break;
        
        case 7:
            printf("Letter grade: C\n");
            break;
        
        case 6:
            printf("Letter grade: D\n");
            break;
        
        default:
            printf("Letter grade: F\n");
            break;
        
    }

    return 0;
}

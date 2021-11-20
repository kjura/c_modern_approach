//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// chapter 5 project 9
// gcc -O -Wall -W -pedantic -ansi -std=c99 -o chapter5project9 chapter5project9.c


int main(void)
{
    
    int first_month, first_day, first_year;
    int second_month, second_day, second_year;

    printf("Enter first date (mm/dd//yy). Supported years: 2000 to 2099: ");
    scanf("%d/%d/%d", &first_month, &first_day,  &first_year);
    printf("Enter second date (mm/dd/yy). Supported years: 2000 to 2099: ");
    scanf("%d/%d/%d", &second_month, &second_day, &second_year);


    if((second_day > 31 || second_day < 1) || (first_day > 31 || first_day < 1))
    {
        printf("Days can be in the range 1:31. Terminating ...\n");
        return 0;
    }

    if ((first_month < 0 || first_month > 12) || (second_month < 0 || second_month > 12))
    {
        printf("Month can be in the range 1:12. Terminating ...\n");
        return 0;
    }

    if((first_year < 0 || first_year > 99) || (second_year < 0 || second_year > 99))
    {

        printf("Year can be in the range 2000:2099");
        return 0;
    }


    // First date is earlier
    // printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", first_month, first_day, first_year, second_month, second_day, second_year);


    //Second date is earlier
    //printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", second_month, second_day, second_year, first_month, first_day, first_year);

   if (first_year > second_year)
   {
       printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", second_month, second_day, second_year, first_month, first_day, first_year);
   }


   else if (first_year < second_year)
   {
       printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", first_month, first_day, first_year, second_month, second_day, second_year);
   }

   
   else if(first_month > second_month)
   {
       printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", second_month, second_day, second_year, first_month, first_day, first_year);

   }

   else if(first_month < second_month)
   {
       printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", first_month, first_day, first_year, second_month, second_day, second_year);
   }

   else if(first_day > second_day)
   { 
       printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", second_month, second_day, second_year, first_month, first_day, first_year);
   }

   else if(first_day < second_day)
   {
       printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", first_month, first_day, first_year, second_month, second_day, second_year);
   }

   else
   {
       printf("Both dates are equal.\n");
   }

        

    return 0;
}

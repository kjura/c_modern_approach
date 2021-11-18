//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Chapter 5 Project 4
// Beaufort scale


int main(void)
{

    float wind_speed;
    printf("Enter a wind speed (in knots, expected float input): ");
    scanf("%f", &wind_speed);

    if(wind_speed < 0.00){
        printf("Wind speed cannot be lower than 0 (value provided: %f). Terminating the program.\n", wind_speed);
        return 0;
    }


    if(wind_speed < 1.00f){
        printf("Calm\n");

    }

    else if (wind_speed >= 1.00f && wind_speed < 4.00f)
    {
        printf("Ligth air\n");
    }

    else if (wind_speed >= 4.00f && wind_speed < 28.00f)
    {
        printf("Breeze\n");
    }

    else if (wind_speed >= 28.00f && wind_speed < 48.00f)
    {
        printf("Gale\n");
    }

    else if (wind_speed >= 48.00f && wind_speed <= 63.00f)
    {
        printf("Storm\n");
    }

    else{
        
        printf("Hurricane\n");

    }
    


	return 0;
}

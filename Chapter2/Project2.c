#include <stdio.h>
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286f
int main(void)
{
    float r = 10.0;
    
    float v;
    
    v = 4.0f / 3.0f * PI * r * r * r;



    printf("Volume of a sphere with a 10-meter radius is %f\n", v);
    return 0;

}
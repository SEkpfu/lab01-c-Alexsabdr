#include <stdio.h> 
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    double r, h;
    printf("r= "); 
    scanf("%lf", &r);
    printf("h= "); 
    scanf("%lf", &h);
    double s, v;
    const double pi= 3.1415926535;
    s = 2 * pi * r * (r+h);
    v = pi * r * r * h; 
    printf("s= %lf \n", s);
    printf("v= %lf \n", v);
    return 0;
}
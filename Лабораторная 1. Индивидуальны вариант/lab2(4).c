#include <stdio.h>
int main(void)
{
    double x,y;
    printf("x= ");
    scanf("%lf", &x);  
    //y = х^14 – х^5+x^3-2
    double x2,x3,x5,x4,x14;
    x2 = x * x; 
    x3 = x2 * x;
    x5 = x3 * x2;
    x7 = x5 * x2;
    x14 = x7 * x7;
    y = x14 - x5 + x3 - 2;
    printf("%f", y); 
    return 0;

}


    

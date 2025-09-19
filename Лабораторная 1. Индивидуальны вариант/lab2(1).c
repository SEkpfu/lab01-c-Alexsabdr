#include <stdio.h>

int main ()
{
    double a1,a2,b1,b2,c1,c2; 
    printf("a1= ");
    scanf("%lf", &a1); 
    printf("a2= ");
    scanf("%lf", &a2); 
    printf("b1= ");
    scanf("%lf", &b1); 
    printf("b2= ");
    scanf("%lf", &b2); 
    printf("c1= ");
    scanf("%lf", &c1); 
    printf("c2= ");
    scanf("%lf", &c2); 
    double d = a1 * a2 - a2 * b1;
    double x = (c1*b2 - c2*b1)/d;
    double y = (a1*c2 - a2*c1)/d;
    printf("%f", x);
    printf("%f", y);

}
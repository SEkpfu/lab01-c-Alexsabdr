#include <stdio.h>
int main ()
{
    double a,b,c;
    printf("a= ");
    scanf("%lf", &a); 
    printf("b= "); 
    scanf("%lf", &b);
    printf("c= ");
    scanf("%lf", &c); 
    double s, v; 
    v = a*b*c;
    s = 2*(a*b + b*c + a*c);
    printf("S= %lf", s); 
    printf("V= %lf \n", v);
}
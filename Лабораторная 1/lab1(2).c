#include <stdio.h>
int main ()
{
    double a, b; 
    printf("a= ");
    scanf("%lf", &a); 
    printf("b= "); 
    scanf("%lf", &b);
    double q;
    q=a+b;
    double w;
    w=a-b;
    double e; 
    e=a*b;
    printf("%f", q);
    printf("%f", w);
    printf("%f", e);
    return 0; 
}
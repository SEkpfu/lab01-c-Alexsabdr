#include <stdio.h>
int main ()
{
    double x, y;

    ///x = температура, заданная в градусах Цельсия ///
   /// y= температура, заданная в градусах Фаренгейта ///
    printf("x= ");
    scanf("%lf", &x); 
    y=1.8*x+32;
    printf("%f", y);
    return 0; 

}
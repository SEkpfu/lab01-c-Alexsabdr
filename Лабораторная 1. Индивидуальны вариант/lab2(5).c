#include <stdio.h>
#include <math.h> 

int main(void)
{
    double x,y;
     printf("x= ");
    scanf("%lf", &x); 
    printf("y= "); 
    scanf("%lf", &y);
    double a = (exp(x) - (y * y + 12 * x * y - 3 * x * x))/(18 * y - 1);
    double b = (2  * (cos(3*x)/sin(3*x))) - (1 / (12 * x * x + 7 * x - 5)); 
        
   //a > 0 ?
   //printf("%+.5f", a):
   //printf("%.5f",a);
   
   //b > 0 ?
   ///printf("%+e", b):
   ///printf("%e",b);
   printf("%+.5f\n", a);
   printf("%+.5e\n", b);
   return 0;



}

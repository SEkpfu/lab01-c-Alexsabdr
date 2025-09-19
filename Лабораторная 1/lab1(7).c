#include <stdio.h> 

int main (void)
{
    int a, b;
    printf("a= ");
    scanf("%d", &a); 
    printf("b= "); 
    scanf("%d", &b);
    int x;
    x = a % 10;
    int y;
    y = b % 10;
    int z = x + y; 
    printf("%d", z);
    return 0;
}
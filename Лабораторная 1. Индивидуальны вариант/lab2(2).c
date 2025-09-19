#include <stdio.h>
int main (void)
{
    int x;
     printf("x= ");
    scanf("%d", &x); 
     if (x < 1000 || x > 9999) {
      printf("Ошибка: число не четырехзначное\n");
      return 1;
      }
    int z = x / 1000;
    int y = x % 10;
    printf("%d", z);
    printf("%d", y); 
    return 0; 

}
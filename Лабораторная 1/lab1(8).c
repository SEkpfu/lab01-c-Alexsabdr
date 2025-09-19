#include <stdio.h> 

int main (void)
{
    int a;
     printf("a= ");
    scanf("%d", &a); 
     if (a < 1000 || a > 9999) {
      printf("Ошибка: число не четырехзначное\n");
      return 1;
      }
    int z = a / 1000;
    int y = a % 10;
    printf("%d", z);
    printf("%d", y); 
    return 0; 

}
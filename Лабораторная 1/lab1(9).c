#include <stdio.h>

int main (void)
{
     int N;
     printf("N= ");
    scanf("%d", &N); 
    if (N > 86400) {
      printf("Ошибка\n");
      return 1;
      }
    int x, y, z; 

    x = N / 3600;
    y = (N - (x * 3600)) / 60;
    z =  (N - (x *3600) - (y * 60)); 

    printf("Часы:%d", x);
    printf("Минуты: %d", y); 
    printf("Секунды: %d", z);

    return 0; 


}
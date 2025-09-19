#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
double radius, length, area; // радиус, длина окружности, площадь
printf("Введите площадь S = "); 
scanf("%lf", &area); // ввод значения в переменную area
radius = sqrt(area / M_PI); // вычисление радиуса
length = 2.0 * M_PI * radius; // вычисление длины окружности
printf("радиус = %f\n", radius); // вывод значения радиуса
printf("длина окружности = %f", length); // вывод значения длины окружности
return 0;
}

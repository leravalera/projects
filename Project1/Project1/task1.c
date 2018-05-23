#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
	system("chcp 1251"); /*Переход в консоли на русский язык*/
	system("cls"); /*Очистка консоли*/
	float x, d;
	x = 5;
	d = ((1 + cos(2 * x) / 2) - (1 - cos(2 * x)) / 2);
	printf("При x=5, результат = %f\n", d);
	printf("Введите Х=");
	scanf_s("%f", &x);
	d = ((1 + cos(2 * x) / 2) - (1 - cos(2 * x)) / 2);
	printf("Результат = %f", d);
	getchar();
	getchar();

	return(0);
}

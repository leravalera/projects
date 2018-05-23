#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float func(float x)
{
	float d;
	d = (1 + cos(2 * x)) / 2 - (1 - cos(2 * x)) / 2;
	return(d);
}
int main(void)
{
	system("chcp 1251"); /*Переход в консоли на русский язык*/
	system("cls"); /*Очистка консоли*/
	float x, d;
	x = 8;
	d = func(x);
	printf("При X=8 результат = %f\n", d);
	printf("Введите Х=");
	scanf_s("%f", &x);
	d = func(x);
	printf("Результат = %f", d);
	getchar();
	getchar();

	return(0);
}


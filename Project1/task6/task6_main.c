#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float x, d;
void func(void);
int main(void)
{
	system("chcp 1251"); /*Переход в консоли на русский язык*/
	system("cls"); /*Очистка консоли*/
	x = 6;
	func();
	printf("При Х=6  результат = %f\n", d);
	printf("Введите Х=");
	scanf_s("%f", &x);
	func();
	printf("Результат = %f", d);
	getchar();
	getchar();

	return(0);
}

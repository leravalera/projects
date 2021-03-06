// Project2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>  /*Использование функции system*/
float func_square(float x, float y);
float func_usl(float x);
int main(void)
{
	system("chcp 1251"); /*Переход в консоли на русский язык*/
	system("cls"); /*Очистка консоли*/
	float x, y, f;
	int n;
	printf("Выберите задание 1 или 2:\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
	{

		printf("Вы выбрали 1 задание\n");
		printf("Введите Х=");
		scanf_s("%f", &x);
		printf("Введите Y=");
		scanf_s("%f", &y);
		printf("%d", func_square(x, y));
	}
	break;
	case 2:
	{
		printf("Вы выбрали 2 задание\n");
		printf("Введите Х=");
		scanf_s("%f", &x);
		printf("%f", func_usl(x));
	}
	break;
	default:
		printf("Неправильный ввод ");
		break;
	}

	getchar();
	getchar();
	return(0);
}

float func_square(float x, float y)
{
	if ((x > -1 && x < 1 && y > -1 && y < 0) || (pow(x,2) +pow(y,2) <1 && x > 0))
		return 1;
	else
		return 0;
}

float func_usl(float x)
{
	float f;
	x < -3 ? (f = pow(-x,2)-1,1*x+9) : (f = (x + 3)/(pow(x,2)+9));
	return(f);
}

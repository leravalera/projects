#include "Header.h"

void task2()
{
	int x;
	printf("x = "); scanf("%d", &x);
	printf("����� ����������: %p\n�������� ����������: %d\n", &x, x);
	task1(&x);
	printf("����� ����������: %p\n�������� ����������: %d\n", &x, x);
}
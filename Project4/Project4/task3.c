#include "Header.h"

void task3()
{
	int *x = (int *)malloc(sizeof(int));
	printf("x = "); scanf("%d", x);
	printf("����� ����������: %p\n�������� ����������: %d\n", x, *x);
	task1(x);
	printf("����� ����������: %p\n�������� ����������: %d\n", x, *x);
	free(x);
}
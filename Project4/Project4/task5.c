#include "Header.h"

void task5(int *x, int n)
{
	printf("\n������� 5:\n");
	for (int *i = x; (i - x) < n; i++)
	{
		printf("x[%d] = ", i - x);
		scanf("%d", i);
	}
}
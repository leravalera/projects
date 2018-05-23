#include "Header.h"

void task3(int n, int k)
{
	double b = 0;
	int i = 0;
	while (i <= n)
	{
		++i;
		if (k == i)
		{
			continue;
		}
		b = a(i);
		printf("a(%d) = %lf\n", i, b);

	}
}
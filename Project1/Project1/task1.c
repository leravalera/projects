#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
	system("chcp 1251"); /*������� � ������� �� ������� ����*/
	system("cls"); /*������� �������*/
	float x, d;
	x = 5;
	d = ((1 + cos(2 * x) / 2) - (1 - cos(2 * x)) / 2);
	printf("��� x=5, ��������� = %f\n", d);
	printf("������� �=");
	scanf_s("%f", &x);
	d = ((1 + cos(2 * x) / 2) - (1 - cos(2 * x)) / 2);
	printf("��������� = %f", d);
	getchar();
	getchar();

	return(0);
}

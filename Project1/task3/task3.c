#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float func(float x);
int main(void)
{
	system("chcp 1251"); /*������� � ������� �� ������� ����*/
	system("cls"); /*������� �������*/

	float x, d;
	x = 13;
	d = func(x);
	printf("��� X=13 ��������� = %f\n", d);
	printf("������� �=");
	scanf_s("%f", &x);

	d = func(x);
	printf("��������� = %f", d);
	getchar();
	getchar();

	return(0);
}
float func(float x)
{
	float d;
	d = (1 + cos(2 * x)) / 2 - (1 - cos(2 * x)) / 2;
	return(d);
}

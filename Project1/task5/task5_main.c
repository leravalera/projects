#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float func(float x);
int main(void)
{
	system("chcp 1251"); /*������� � ������� �� ������� ����*/
	system("cls"); /*������� �������*/
	float x, d;
	x = 12;
	d = func(x);
	printf("��� X=12 ��������� = %f\n", d);
	printf("������� �=");
	scanf_s("%f", &x);
	d = func(x);
	printf("��������� = %f", d);
	getchar();
	getchar();
	return(0);
}

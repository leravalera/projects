#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float func();
float x, d;
int main(void)
{
	system("chcp 1251"); /*������� � ������� �� ������� ����*/
	system("cls"); /*������� �������*/
	x = 10;
	func();
	printf("��� X=10 ��������� = %f\n", d);
	printf("������� �=");
	scanf_s("%f", &x);
	func();
	printf("��������� = %f", d);
	getchar();
	getchar();

	return(0);
}
float func(void)
{

	d = (1 + cos(2 * x)) / 2 - (1 - cos(2 * x)) / 2;
	return(0);
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float x, d;
void func(void);
int main(void)
{
	system("chcp 1251"); /*������� � ������� �� ������� ����*/
	system("cls"); /*������� �������*/
	x = 6;
	func();
	printf("��� �=6  ��������� = %f\n", d);
	printf("������� �=");
	scanf_s("%f", &x);
	func();
	printf("��������� = %f", d);
	getchar();
	getchar();

	return(0);
}

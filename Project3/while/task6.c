#include "Header.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	double eps;
	int n, k;
	while (1)
	{
		system("cls");
		printf("������� ����� ��������:\n1 - ������� 1\n2 - ������� 2\n3 - ������� 3\n4 - ������� 4\n5 - ������� 5\n6 - �����\n\n");
		switch (_getch())
		{
		case '1':
			system("cls");
			printf("������� 1:\n");
			printf("n = "); scanf("%i", &n);
			printf("����� = %.50f\n", task1(n));
			_getch();
			break;
		case '2':
			system("cls");
			printf("������� 2:\n");
			printf("eps = "); scanf("%lf", &eps);
			printf("����� = %.50f\n", task2(eps));
			_getch();
			break;
		case '3':
			system("cls");
			printf("������� 3:\n");
			printf("n = "); scanf("%i", &n);
			printf("k = "); scanf("%i", &k);
			task3(n, k);
			_getch();
			break;
		case '4':
			system("cls");
			printf("������� 4:\n");
			printf("eps = "); scanf("%lf", &eps);
			printf("i = %d\n", task4(eps));
			_getch();
			break;
		case '5':
			system("cls");
			printf("������� 5:\n");
			printf("eps = "); scanf("%lf", &eps);
			printf("i = %d\n", task5(eps));
			_getch();
			break;
		case '6':
			return 0;
			break;
		default:
			system("cls");
			printf("�������� ����\n");
			_getch();
			break;
		}
	}
}

double a(int i)
{
	return (pow((-1), i) * (1 - ((2 * i - 1) / 2 * (i + 1))));
}
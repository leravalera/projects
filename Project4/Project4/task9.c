#include "Header.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	while (1)
	{
		system("cls");
		printf("������� ����� ��������:\n2 - ������� 2\n3 - ������� 3\n7 - ������� 7\n8 - ������� 8\n0 - �����\n\n");
		switch (_getch())
		{
		case '2':
			system("cls");
			printf("������� 2:\n");
			task2();
			_getch();
			break;
		case '3':
			system("cls");
			printf("������� 3:\n");
			task3();
			_getch();
			break;
		case '7':
			system("cls");
			printf("������� 7:\n");
			task7();
			_getch();
			break;
		case '8':
			system("cls");
			printf("������� 8:\n");
			task8();
			_getch();
			break;
		case '0':
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
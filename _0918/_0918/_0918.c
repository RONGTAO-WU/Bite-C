#define _CRT_SECURE_NO_WARNINGS



//#include<stdio.h>



//	ʵ�ֺ����ж�year�ǲ������ꡣ



//void leap_year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		printf("YES");
//	else
//		printf("NO");
//}
//
//int main()
//{
//	int year = 0;
//
//	scanf("%d", &year);
//	
//	leap_year(year);
//
//
//	return 0;
//}







//	ʵ��һ������is_prime���ж�һ�����ǲ�����������������ʵ�ֵ�is_prime��������ӡ100��200֮���������



//void is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//		{
//			printf("��������\n");
//			break;
//		}
//	}
//	if (j == i)
//	{
//		printf("������\n");
//	}
//
//
//	int k = 0;
//	for (int j = 101; j < 200; j += 2)
//	{
//		for (k = 2; k < j; k++)
//		{
//			if (j % k == 0)
//				break;
//		}
//		if (j == k)
//			printf("%d ", k);
//
//	}
//	
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//
//	is_prime(i);
//
//	return 0;
//}







//	���ɨ����Ϸ����



#include"game.h"


void menu()
{

	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("--------  1.PALY  --------\n");
	printf("--------  0.EXIT  --------\n");
	printf("--------------------------\n");
	printf("--------------------------\n");

}

void game()
{
	char Hide[ROWS][COLS] = { 0 };
	char Show[ROWS][COLS] = { 0 };

	InitBoard(Hide, ROWS, COLS, '0');			// ��ʼ��
	InitBoard(Show, ROWS, COLS, '*');

	DisplayBoard(Show,ROW,COL);					// ��ӡ����

	SetMine(Hide, ROW, COL);					// ����
	DisplayBoard(Hide, ROW, COL);

	FindBoard(Hide,Show,ROW,COL);				// ����

}



int main()
{
	int Input = 0;
	srand((unsigned int)time(NULL));

	do 
	{
		menu();
		printf("�����룺");
		scanf("%d", &Input);

		switch(Input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������룺\n");
			break;

		}


	} while (Input);


	return 0;
}
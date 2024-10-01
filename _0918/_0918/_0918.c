#define _CRT_SECURE_NO_WARNINGS



//#include<stdio.h>



//	实现函数判断year是不是润年。



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







//	实现一个函数is_prime，判断一个数是不是素数。利用上面实现的is_prime函数，打印100到200之间的素数。



//void is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//		{
//			printf("不是素数\n");
//			break;
//		}
//	}
//	if (j == i)
//	{
//		printf("是素数\n");
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







//	完成扫雷游戏代码



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

	InitBoard(Hide, ROWS, COLS, '0');			// 初始化
	InitBoard(Show, ROWS, COLS, '*');

	DisplayBoard(Show,ROW,COL);					// 打印棋盘

	SetMine(Hide, ROW, COL);					// 布雷
	DisplayBoard(Hide, ROW, COL);

	FindBoard(Hide,Show,ROW,COL);				// 排雷

}



int main()
{
	int Input = 0;
	srand((unsigned int)time(NULL));

	do 
	{
		menu();
		printf("请输入：");
		scanf("%d", &Input);

		switch(Input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误请重新输入：\n");
			break;

		}


	} while (Input);


	return 0;
}
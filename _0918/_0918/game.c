#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void InitBoard(char Board[ROWS][COLS], int row, int col, char set)
{
	

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{	
			Board[i][j] = set;
		}
	}

}

void DisplayBoard(char Board[ROWS][COLS], int row, int col)
{
	int n = 1;
	for (int i = 0; i < row+1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", n);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ",Board[i][j]);
			
		}
		printf("\n");
		n++;
	}

}

void SetMine(char Board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;

	while (count)
	{
		int i = rand() % row + 1;
		int j = rand() % col + 1;

		if (Board[i][j] != '1')				// �ж����λ���ǲ�����
		{
			Board[i][j] = '1';
			count--;
		}
	}

}

int Getminecount(char Board[ROWS][COLS], int X, int Y)
{
	return Board[X - 1][Y - 1] + Board[X - 1][Y] + Board[X - 1][Y+1] + 

			Board[X][Y - 1] + Board[X][Y + 1] +

			Board[X + 1][Y-1]+ Board[X + 1][Y] + Board[X + 1][Y + 1] - 8*'0';



}

void FindBoard(char Hide[ROWS][COLS], char Show[ROWS][COLS], int row, int col)
{
	int X = 0;
	int Y = 0;
	int win = 0;

	while (win<ROW*COL-EASY_COUNT)
	{
		
		printf("��������Ҫ���ҵ����꣺");
		scanf("%d %d", &X, &Y);

		if (X >= 1 && X <= ROW && Y >= 1 && Y <= COL)
		{
			if (Hide[X][Y] == '1')
			{
				printf("�㱻ը����\n");
				DisplayBoard(Hide, ROW, COL);
				break;
			}
			else
			{
				win++;
				int i = Getminecount(Hide, X, Y);
				Show[X][Y] = i + '0';
				DisplayBoard(Show, ROW, COL);

			}
		}
		else
			printf("�����������������룺");
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(Hide, ROW, COL);
	}


}


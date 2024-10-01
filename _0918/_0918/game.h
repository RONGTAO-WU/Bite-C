#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 80



//��ʼ������
void InitBoard(char Board[ROWS][COLS], int row, int col, char set);

//��ӡ����
void DisplayBoard(char Board[ROWS][COLS], int row , int col);

//���õ���
void SetMine(char Board[ROWS][COLS], int row, int col);

//�Ų����
void FindBoard(char Hide[ROWS][COLS], char Show[ROWS][COLS], int row, int col);





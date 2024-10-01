#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 80



//初始化棋盘
void InitBoard(char Board[ROWS][COLS], int row, int col, char set);

//打印棋盘
void DisplayBoard(char Board[ROWS][COLS], int row , int col);

//布置地雷
void SetMine(char Board[ROWS][COLS], int row, int col);

//排查地雷
void FindBoard(char Hide[ROWS][COLS], char Show[ROWS][COLS], int row, int col);





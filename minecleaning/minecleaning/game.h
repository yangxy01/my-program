#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//初始化数组的内容
InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
DisplayBoard(char board[ROWS][COLS], int row, int col);

//设置雷
Setmind(char board[ROWS][COLS], int row, int col);

//寻找雷
Findmind(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
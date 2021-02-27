#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3//注意不用加分号

void initboard(char board[ROW][COL],int row,int col);

//打印棋盘
void Displayboard(char board[ROW][COL], int row, int col);
//玩家走
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑走
void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢
char CheckWin(char board[ROW][COL], int row, int col);


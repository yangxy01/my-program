#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//��ʼ�����������
InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ����
DisplayBoard(char board[ROWS][COLS], int row, int col);

//������
Setmind(char board[ROWS][COLS], int row, int col);

//Ѱ����
Findmind(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3//ע�ⲻ�üӷֺ�

void initboard(char board[ROW][COL],int row,int col);

//��ӡ����
void Displayboard(char board[ROW][COL], int row, int col);
//�����
void PlayerMove(char board[ROW][COL], int row, int col);
//������
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char CheckWin(char board[ROW][COL], int row, int col);


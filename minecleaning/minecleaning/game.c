#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

InitBoard(char board[ROWS][COLS], int rows, int cols, char set)//��ʼ�����������

{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

DisplayBoard(char board[ROWS][COLS], int row, int col)//��ӡ����
{
	int i, j;
	printf("----�����ɨ��----\n");
	for (i = 0; i < row + 1; i++)
		printf("%d ", i);
		printf("\n");
	for (i = 1; i < row + 1; i++)
	{
		printf("%d ", i);
		for (j = 1; j < col + 1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//������
Setmind(char board[ROWS][COLS], int row, int col)
{
	int count = 9,x,y;
	while (count--)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] != '0')
			count++;
		else
			board[x][y] = '1';
		//DisplayBoard(board, ROW, COL);
	}
}

//����Χ�׵ĸ���
int Countmind(char mine[ROWS][COLS], int x, int y)
{
	int sum=0;
	int i, j;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			sum += mine[i][j] - '0';
		}
	}
	return sum;
}

//Ѱ����
Findmind(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	int win = 0;
	//1.�������Ϸ���
	while (win<72)
	{
		printf("��������Ҫ�Ų��׵����꣺>\n");
		scanf("%d%d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("�˴����ף���Ϸ����\n");
				break;
			}
			else
			{
				int count = Countmind(mine, x, y);
				//2.չʾ�׵ĸ���
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
				
		}
		else
			printf("��������������������꣺>\n");
	}
	if (win==72)
		printf("��ɹ�����\n");
}
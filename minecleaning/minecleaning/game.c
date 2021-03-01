#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

InitBoard(char board[ROWS][COLS], int rows, int cols, char set)//初始化数组的内容

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

DisplayBoard(char board[ROWS][COLS], int row, int col)//打印棋盘
{
	int i, j;
	printf("----经典版扫雷----\n");
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

//设置雷
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

//数周围雷的个数
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

//寻找雷
Findmind(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	int win = 0;
	//1.检查坐标合法性
	while (win<72)
	{
		printf("请输入你要排查雷的坐标：>\n");
		scanf("%d%d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("此处有雷，游戏结束\n");
				break;
			}
			else
			{
				int count = Countmind(mine, x, y);
				//2.展示雷的个数
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
				
		}
		else
			printf("输入错误，请重新输入坐标：>\n");
	}
	if (win==72)
		printf("你成功啦！\n");
}
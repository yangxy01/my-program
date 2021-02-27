#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//初始化放空格
void initboard(char board[ROW][COL], int row, int col)
{
	//遍历放空格
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}

//打印棋盘
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		/*printf(" %c | %c | %c \n", board[i][0],board[i][1], board[i][2]);
		if (i < row - 1)
			printf("---|---|---\n");*/
		int j;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	while (1)
	{
		printf("请输入坐标：>\n\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] != ' ')
			{
				printf("此处已落子，请重新输入\n");
				continue;
			}
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
			continue;
		}
	}

}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走：>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		else
		{
			continue;
		}

	}
}

//判断是不是满了的函数
int isFull(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

//判断输赢
char CheckWin(char board[ROW][COL], int row, int col)
{
	int i, j;
	//判断行满足
	for (i = 0; i < row; i++)
	{
		int flag = 1;//默认满足行成立
		for (j = 0; j < col-1; j++)
		{
			if (board[i][j] == ' ' || board[i][j] != board[i][j + 1])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			return board[i][0];
			break;
		}
	}

	//判断列满足
	for (j = 0; j < col; j++)
	{
		int flag = 1;//默认满足列成立
		for (i = 0; i < row - 1; i++)
		{
			if (board[i][j] == ' ' || board[i][j] != board[i + 1][j])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			return board[0][j];
			break;
		}
	}

	//判断主对角线
	int flag = 1;//默认满足主对角线成立
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j && board[i][j] == ' ')
			{
				flag = 0;
				break;
			}
			else if (i == j && i < row - 1 && j < col - 1 && board[i][j] != board[i + 1][j + 1])
			{
				flag = 0;
				break;
			}
		}
	}
		if (flag == 1)
		{
			return board[0][0];
		}


	//判断副对角线
	flag = 1;//默认满足副对角线成立
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i + j == col - 1 && board[i][j] == ' ')
			{
				flag = 0;
				break;
			}
			else if (i + j == col - 1 && j >0 && board[i][j] != board[i + 1][j - 1])
			{
				flag = 0;
				break;
			}
		}
	}
		if (flag == 1)
		{
			return board[0][col - 1];
		}

		//没人赢，判断平局
		if (isFull(board, row, col) == 1)
		{
			return 'F';
		}

		//上述情况不满足，继续游戏
		return 'C';
	
}

#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//��ʼ���ſո�
void initboard(char board[ROW][COL], int row, int col)
{
	//�����ſո�
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}

//��ӡ����
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

//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	while (1)
	{
		printf("���������꣺>\n\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] != ' ')
			{
				printf("�˴������ӣ�����������\n");
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
			printf("�����������������\n");
			continue;
		}
	}

}

//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("�����ߣ�>\n");
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

//�ж��ǲ������˵ĺ���
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

//�ж���Ӯ
char CheckWin(char board[ROW][COL], int row, int col)
{
	int i, j;
	//�ж�������
	for (i = 0; i < row; i++)
	{
		int flag = 1;//Ĭ�������г���
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

	//�ж�������
	for (j = 0; j < col; j++)
	{
		int flag = 1;//Ĭ�������г���
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

	//�ж����Խ���
	int flag = 1;//Ĭ���������Խ��߳���
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


	//�жϸ��Խ���
	flag = 1;//Ĭ�����㸱�Խ��߳���
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

		//û��Ӯ���ж�ƽ��
		if (isFull(board, row, col) == 1)
		{
			return 'F';
		}

		//������������㣬������Ϸ
		return 'C';
	
}

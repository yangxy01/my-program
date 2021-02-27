#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void menu();
void game();

int main()
{
	srand((unsigned int)time(NULL));
	int input = 1;
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}

void menu()
{
	printf("*************************************\n");
	printf("***  Do you want to play a game?  ***\n");
	printf("*************************************\n");
	printf("*******   1 ->  enter game    *******\n");
	printf("*******   0 -> quit the game  *******\n");
	printf("*************************************\n");
}

void game()
{
	//用二维数组存储数据
	char board[ROW][COL];
	char ret;

	initboard(board, ROW, COL);//棋盘初始化
	Displayboard(board, ROW, COL);//打印棋盘

	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);//打印棋盘
		ret = CheckWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
			break;

		//电脑走
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);//打印棋盘
		ret = CheckWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
			break;
	}
	if (ret == '#')
		printf("电脑赢了\n");
	else if (ret == '*')
		printf("玩家赢了\n");
	else
		printf("平局\n");
	Displayboard(board, ROW, COL);//打印棋盘
	printf("\n");
}
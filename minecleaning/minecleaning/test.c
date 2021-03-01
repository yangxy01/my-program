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
	char mine[ROWS][COLS];//埋雷的信息
	char show[ROWS][COLS];//展示的信息

	//初始化数组的内容
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//设置雷
	Setmind(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	//寻找雷
	Findmind(mine, show, ROW, COL);

}
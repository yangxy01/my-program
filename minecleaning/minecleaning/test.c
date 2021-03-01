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
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ���������������\n");
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
	char mine[ROWS][COLS];//���׵���Ϣ
	char show[ROWS][COLS];//չʾ����Ϣ

	//��ʼ�����������
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//������
	Setmind(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	//Ѱ����
	Findmind(mine, show, ROW, COL);

}
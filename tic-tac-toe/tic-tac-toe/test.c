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
	//�ö�ά����洢����
	char board[ROW][COL];
	char ret;

	initboard(board, ROW, COL);//���̳�ʼ��
	Displayboard(board, ROW, COL);//��ӡ����

	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);//��ӡ����
		ret = CheckWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
			break;

		//������
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);//��ӡ����
		ret = CheckWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
			break;
	}
	if (ret == '#')
		printf("����Ӯ��\n");
	else if (ret == '*')
		printf("���Ӯ��\n");
	else
		printf("ƽ��\n");
	Displayboard(board, ROW, COL);//��ӡ����
	printf("\n");
}
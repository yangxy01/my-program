#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu();
void game();
int main()
{
	//���������,��������ֻ��Ҫ����һ��
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//������ӡ�˵�
		printf("��ѡ��0/1��: ");//ѡ���Ƿ�����Ϸ
		scanf("%d", &input);
		if (input == 1)
		{
			game();//������Ϸ
			continue;
		}
		else if (input == 0)
		{
			printf("��Ϸ����\n");//�˳���Ϸ
			break;
		}
		else
		{
			printf("ѡ���������������\n");
			continue;
		}
	} while (input);
	return 0;
}
void menu()
{
	printf("****  Do you want to play a game  ***\n");
	printf("*************************************\n");
	printf("*******   1 ->  enter game    *******\n");
	printf("*******   0 -> quit the game  *******\n");
	printf("*************************************\n");
}
void game()
{
	int num = rand()%100+1;
	int guess = 0;
	while (1)
	{
		printf("�������\n");
		scanf("%d", &guess);
		if (guess > num)
		{
			printf("�´���\n");
			continue;
		}
		else if (guess < num)
		{
			printf("��С��\n");
			continue;
		}
		else
		{
			printf("�¶��ˣ����ǣ�%d\n", num);
			printf("\n");
			break;
		}
	}
}
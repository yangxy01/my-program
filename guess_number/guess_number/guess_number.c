#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu();
void game();
int main()
{
	//生成随机数,整个工程只需要设置一次
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//函数打印菜单
		printf("请选择（0/1）: ");//选择是否玩游戏
		scanf("%d", &input);
		if (input == 1)
		{
			game();//进入游戏
			continue;
		}
		else if (input == 0)
		{
			printf("游戏结束\n");//退出游戏
			break;
		}
		else
		{
			printf("选择错误，请重新输入\n");
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
		printf("请猜数字\n");
		scanf("%d", &guess);
		if (guess > num)
		{
			printf("猜大了\n");
			continue;
		}
		else if (guess < num)
		{
			printf("猜小了\n");
			continue;
		}
		else
		{
			printf("猜对了，答案是：%d\n", num);
			printf("\n");
			break;
		}
	}
}
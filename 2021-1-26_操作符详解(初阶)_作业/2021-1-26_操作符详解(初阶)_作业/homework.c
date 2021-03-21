#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void print(int num)//打印整数二进制的奇数位和偶数位
{
	int i;
	for (i = 32; i >= 2; i-=2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 1; i-=2)
	{
		printf("%d ", (num >> i) & 1);
	}
}

int main()
{
	int num;
	scanf("%d", &num);
	print(num);
	return 0;
}


//int func(int m, int n)
//{
//	int i;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//			count++;
//	}
//	return count;
//}
//
//int main()//求两个数二进制中不同位的个数
//{
//	int m;
//	int n;
//	scanf("%d%d", &m, &n);
//	int ret = func(m, n);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()//统计二进制中1的个数
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	do
//	{
//		if (num % 2 == 1)
//			count++;
//	} while (num /= 2);
//	printf("%d\n", count);
//	return 0;
//}
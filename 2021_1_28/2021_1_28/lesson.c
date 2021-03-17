#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()//越界改变循环变量
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i < 13; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}

	return 0;
}

//int main()//错误代码用于调试
//{
//	int n = 0;
//	int i, ret = 1, sum = 0;
//	scanf("%d", &n);
//	for (n = 1; n <= 3; n++)
//	{
//		//ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//}


//int add(int a, int b)
//{
//	return a + b;
//}
//
//int main()//debug演示代码
//{
//	int i = 0;
//	int ret = add(2,3);
//	printf("%d\n", ret);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}
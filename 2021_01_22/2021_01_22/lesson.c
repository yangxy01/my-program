#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Fib(int n);
int main()//求第n个斐波那契数
{
	int n;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

int Fib(int n)
{
	if (n > 2)
	{
		return Fib(n - 1) + Fib(n - 2);
	}
	else
		return 1;
}


//int func(int n);
//int main()//函数求n的阶乘
//{
//	int n;
//	scanf("%d", &n);
//	int answer = func(n);
//	printf("answer is %d\n", answer);
//	return 0;
//}
//
//int func(int n)
//{
//	if (n > 1)
//		return n*func(n - 1);
//	else
//		return 1;
//}


//int func_length(char* str);
//int main()//函数求字符串长度不允许创建临时变量
//{
//	char str[] = "abcdef";
//	int length = func_length(str);
//	printf("%d\n", length);
//	return 0;
//}
//
//int func_length(char* str)
//{
//	if (*str != '\0')
//	{
//		str++;
//		return 1 + func_length(str);
//	}
//	return 0;
//}

//void func(int num);
//int main()//函数递归实现打印1234的每一位
//{
//	int num = 1234;
//	func(num);
//	return 0;
//}
//
//void func(int num)
//{
//	int k = num % 10;
//	if (num / 10)
//	{
//		func(num / 10);
//	}
//	printf("%d ", k);
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Fib(int n);
int main()//���n��쳲�������
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
//int main()//������n�Ľ׳�
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
//int main()//�������ַ������Ȳ���������ʱ����
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
//int main()//�����ݹ�ʵ�ִ�ӡ1234��ÿһλ
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
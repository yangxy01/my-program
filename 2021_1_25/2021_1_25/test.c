#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()//不创建临时变量交换两个数
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;//a=3+5=8
//	b = a - b;//b=8-5=3
//	a = a - b;//a=8-3=5
//	return 0;
//}

int main()//360笔试题
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;

	i = a++ && ++b && d++;

	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()//研究char存储整数发生截断的危害
{
	char a = -258;
	return 0;
}
//int main()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	printf("%d\n", *p);
//	return 0;
//}
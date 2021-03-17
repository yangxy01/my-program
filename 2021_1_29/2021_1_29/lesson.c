#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

int my_strlen(const char*str)
{
	assert(str != NULL);
	const char*start = str;
	while (*str)
	{
		str++;
	}
	return str - start;
}

int main()//改善模拟实现strlen()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
}
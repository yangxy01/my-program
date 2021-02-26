#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void func(int arr[])
{
	int i,j,flag,tmp;
	for (i = 0; i < 9; i++)
	{
		flag = 1;
		for (j = 0; j < 10 - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
int main()//∏ƒ¡º∞Ê√∞≈›≈≈–Ú
{
	int arr[10] = { 0 };
	int i;
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	func(arr);
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	return 0;
}
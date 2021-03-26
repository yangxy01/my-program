#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

print(int(*p)[4], int r, int l)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < l; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

int main()//用数组指针对二维数组进行打印
{
	int arr[3][4] = { { 1, 2, 3, 4 }, { 2, 3, 4, 5 }, { 3, 5, 6, 7 } };
	print(arr,3,4);
	return 0;
}


//int main()//用数组指针对数组进行操作
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	int(*p)[10] = &arr;//注意别漏打了&
//	for (i = 0; i < sz; i++)
//		printf("%d ", (*p)[i]);
//
//	return 0;
//}
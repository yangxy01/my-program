#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	double a[7], sum=0, aver, tmp;
	int i, j;
	for (i = 0; i<7; i++)
		scanf("%lf", &a[i]);
	for (i = 0; i<6; i++)
	{
		for (j = 0; j<6 - i; j++)
		{
			if (a[j]>a[j + 1])
			{
				tmp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (i = 1; i <= 5; i++)
		sum += a[i];
	aver = sum / 5;// 
	printf("%.2lf\n", aver);
}

//void func(int line);
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	func(line);
//	return 0;
//}
//void func(int line)
//{
//	int i, j;
//	for (i = 1; i <=line; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i, j, i*j);
//		}
//		printf("\n");
//	}
//}

//void swap(int *px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()//交换两个整数
//{
//	int a = 10, b = 20;
//	swap(&a, &b);
//	printf("%d %d", a, b);
//}


//int binnary_search(int arr[], int k, int num);
//int main()//函数实现二分查找
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int ret = binnary_search(arr, k, num);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到啦，下标是%d\n", ret);
//}
//
//int binnary_search(int arr[], int k, int num)
//{
//	int left = 0, right = num - 1, mid;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//			continue;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//			continue;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}


//int is_leap_year(int n);
//int main()//判断是不是闰年
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i) == 1)
//			printf("%d ", i);
//	}
//}
//
//int is_leap_year(int n)
//{
//	return(((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)));//简洁
//	//if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0))
//	//	return 1;
//	//return 0;
//}


//#include<math.h>
//int is_prime(int i);
//int main()//函数实现判断是否为素数
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//}
//int is_prime(int i)
//{
//	int j;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//	return 1;
//}


//int getmax(int a, int b);
//int main()//函数实现取两个数最大值
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int max = getmax(a, b);
//	printf("%d\n", max);
//}
//int getmax(int a, int b)
//{
//	int c;
//	return c = a > b ? a : b;
//}

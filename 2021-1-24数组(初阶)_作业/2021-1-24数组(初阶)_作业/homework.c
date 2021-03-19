#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//double fact(int n)//实现阶乘的函数
//{
//	double sum = 1;
//	while (n>=1)
//	{
//		sum *= n;
//		n--;
//	}
//	return sum;
//}
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	double a =fact(n);//调用函数
//	double b = fact(m);//调用函数
//	double c = fact(n-m);//调用函数
//
//	int result = a / (b*c);
//	printf("result = %d\n", result);
//	return 0;
//}


//int main()
//{
//	int N;
//	int i, n;
//	scanf("%d", &N);
//	int flag = 1;
//	int count = 0;
//	double sum = 0;
//	for (i = 1, n = 1; count < N; i += 2, n++, count++)
//	{
//		sum = sum + ((n*1.0) / i)*flag;
//		flag = -flag;
//	}
//	printf("%.3lf\n", sum);
//	return 0;
//}



//int main()//交换两个变量（不创建临时变量）
//{
//	int a=10;
//	int b=20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//
//	return 0;
//}

//int main()//交换两个数组内容
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 10 };
//	int i;
//	int sz = sizeof(arr1) / sizeof(int);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}




////实现函数init() 初始化数组为全0
////实现print()  打印数组的每个元素
////实现reverse()  函数完成数组元素的逆置
//
//void print(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int tmp;
//	int i;
//	for (i = 0; i < sz/2; i++)
//	{
//		tmp=arr[i] ;
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = tmp;
//	}
//	print(arr, sz);
//}
//
//void init(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//	print(arr, sz);
//}
//
//
//int main()//数组操作
//{
//	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
//	int sz = sizeof(arr) / sizeof(int);
//	print(arr, sz);
//	reverse(arr, sz);
//	init(arr, sz);
//
//	return 0;
//}





//int main()//冒泡排序
//{
//	int arr[7] = { 0 };
//	int i,j,tmp;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j < 6 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
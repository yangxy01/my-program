#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()//喝汽水问题
{
	int money;
	int num = 0,sum=0;
	scanf("%d", &money);
	if (money > 0)
		sum = money * 2 - 1;
	printf("%d\n", sum);

	return 0;
}


//int main()//打印菱形
//{
//	int n = 0;
//	int i, j;
//	scanf("%d", &n);
//	int k = n / 2;
//	for (i = 0; i < k; i++)
//	{
//		for (j =0; j<k-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j ++)
//		{
//			printf("*");
//			
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n; i++)
//		printf("*");
//		printf("\n");
//	for (i = 0; i < k; i++)
//	{
//		for (j = 0; j <i+1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <n-2-2*i; j ++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}


//int main()//打印水仙花数
//{
//	int i;
//	int a, b, c;
//	for (i = 0; i <= 10000; i++)
//	{
//		a = i / 100;
//		b = i % 100 / 10;
//		c = i % 10;
//		if (i == (a*a*a + b*b*b + c*c*c))
//			printf("%d ", i);
//	}
//	return 0;
//}



//int main()//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和
//{
//	int n, a, s=0, k;
//	scanf("%d%d", &n, &a);
//	k = a;
//	for (int i = 0; i < n; i++)
//	{
//		
//		s += k;
//		k = k * 10 + a;
//	}
//	printf("%d\n", s);
//}




//void my_change(char*p)
//{
//	char*left = p;
//	int len = strlen(p);
//	char*right = p + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()//字符串逆序
//{
//	char str[100];
//	gets(str);
//	my_change(str);
//	puts(str);
//	return 0;
//}


//int main()//使用指针打印数组内容
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int*p = arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p++);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
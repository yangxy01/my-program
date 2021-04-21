#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n, i;
//	double h, x;
//	scanf("%lf %d", &h, &n);
//	x = h;
//	h = ((int)((h * 1000 + 5) / 10) / 100.0) / 2.0;
//	if (n==1)
//		printf("%.2lf\n%.2lf\n", x, h);
//	else
//	{
//		for (i = 2; i <= n; i++)
//		{
//			x = (int)(((x+ 2*h) * 1000 + 5) / 10) / 100.0 ;
//			h = (int)(((h / 2.0) * 1000 + 5) / 10) / 100.0;
//		}
//		printf("%.2lf\n%.2lf\n", x, h);
//	}
//
//	return 0;
//}


int Is_prime(int n)//判断质数的函数
{
	int i=0;
	if (n == 1) 
		return 1;
	else if (n == 2)
		return 2;
	else
	{
		for (i = 2; i < n; i++)//判断2-n之间有没有因子
		{
			if (n % i == 0)
				return 0;//有因子则不是质数，返回0
		}
	}
	//抗过上面没有返回零就返回n
	//如果上面返回0，下面就不执行
	return n;
}

int Is_Palindrome(int n)
{
	int m = n;//定义个数保存n的值，因为下面n会改，到时就找不到了
	int sum = 0;//用来接受反过来的数，如n=123，则接受sum=321
	while (n)//举例子，n=123
	{
		sum = sum * 10 + n % 10;//第一次循环：sum=0*10+3=3
		n /= 10;//第一次循环:n=n/10=12
	}
	if (m == sum)//如果123=321，是回文数
		return m;//返回回文数
	else
		return 0;//返回零则不进入主函数那里的if，不继续找质数了
}

int main()
{
	int n, i=1, j=1, k;
	scanf("%d", &n);
	while (i + j <= n)
	{
		while (Is_prime(j) == 0)//如果不是质数则一直循环直到为质数为止
		{
			j++;
		}
		while (i <=j)
		{
			while (Is_prime(i) == 0)//如果不是质数则一直循环直到为质数为止
			{
				i++;
			}
			if (Is_Palindrome(i*i + j*j))//扔进去判断是否回文数
			{
				if ((i + j) % 2 == 0)
				printf("%d %d %d\n", i, j, i*i + j*j);
			}

			i++;
		}
		j++;
	}

	return 0;
}



//int main()
//{
//	int n, i, j,k;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		if (Is_prime(i))//如果i是质数
//		{
//			for (j = 1; j < n; j++)
//			{
//				if (Is_prime(j))//如果j是质数
//				{
//					if (Is_Palindrome(i*i + j*j) && i <= j)//判断是否回文数
//					{
//						printf("%d %d %d\n", i, j, i*i + j*j);
//						//break;//这个break只是跳出j的循环，继续下一个i
//					}
//				}
//
//			}
//		}
//
//	}
//	return 0;
//}
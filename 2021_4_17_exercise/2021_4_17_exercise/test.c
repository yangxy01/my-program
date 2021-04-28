#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>



int main()
{
	int m, n, i, j, k, count = 0, sum = 0;
	scanf("%d %d", &m, &n);
	for (i = m; i <= n; i++)
	{
		sum = 0;
		count = 0;
		for (j = 1; j < i; j++)
		{

			if (i%j == 0)
			{
				sum += j;
				count++;

			}
			if (sum == i)
			{
				printf("%d = ", i);
				for (k = 1; k < i; k++)
				{
					if (i%k == 0)
					{
						printf("%d + ", k);

					}
				}
				printf("\n");
				break;
			}
		}
	}
	return 0;
}



//int main()//判断完数
//{
//	int m, n, i, j, k, count = 0, sum = 0;
//	scanf("%d %d", &m, &n);
//	for (i = m; i <= n; i++)
//	{
//		sum = 0;
//		count = 0;
//		//1.判断是不是完数
//		for (j = 1; j < i; j++)//用循环找因子
//		{
//			if (i%j == 0)
//			{
//				sum += j;//把因子加起来
//				count++;//记录因子个数
//			}
//		}
//
//		//2.是完数才打印
//		if (sum == i)
//		{
//			//一，先打印那个数和=号
//			printf("%d=", i);
//
//			//二，再打印因子
//			for (j = 1; j < i; j++)
//			{
//
//				if (i%j == 0)//打印因子
//				{
//					printf("%d", j);
//					if (count > 1)
//					{
//						printf("+");
//						count--;
//					}
//				}
//				
//			}
//
//			printf("\n");//搞完一个完数后打一个换行
//			
//		}
//		
//	}
//	return 0;
//}



//int main()//水仙花数
//{
//	int n,i,k,m,count=0;
//	scanf("%d", &n);
//	for (i = pow(10.0, n - 1); i <= pow(10.0, n); i++)
//	{
//		count = 0;
//		k = i;
//		while (k  != 0)
//		{
//			m = k % 10;
//			k = k / 10;
//			count += m*m*m;
//		}
//		if (count == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
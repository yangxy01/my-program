#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a[100][100] , m, n, i, j, sum = 0;
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum += a[i][j];
		}
		printf("%d", sum);
		sum = 0;
	}
	return 0;
}




//int main()
//{
//	int i, a[11];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);//每个数字出现的次数
//	}
//
//	if (a[0] == 0)//如果0出现了0次
//	{
//		for (i = 1; i < 10;  i++)
//		{
//			while (a[i])
//			{
//				printf("%d", i);
//				a[i]--;
//			}
//		}
//	}
//	else if (a[0] != 0)//如果0出现了
//	{
//		for (i = 1; i < 10; i++)//在数字1-9找最小的且次数不为0的输出
//		{
//			if (a[i] != 0)//i这个数次数不为0
//			{
//				printf("%d", i);
//				a[i]--;//次数减一
//				break;//输完这个数跳出for循环
//			}
//		}
//
//		while (a[0]--)//把0输出多次
//		{
//			printf("0");
//		}
//
//		
//		for (; i < 10; i++)//继续输出其他数，i接着数
//		{
//			if (a[i] != 0)//i这个数次数不为0
//			{
//				while (a[i]--)//把这个数输出多次
//				{
//					printf("%d", i);
//				}
//			}
//		}
//		
//	}
//	printf("\n");
//	return 0;
//}



////----------F-----------------
//int main()
//{
//	int t, i;
//	scanf("%d", &t);//组数
//	while (t--)//循环t次
//	{
//		int n;
//		scanf("%d", &n);
//		double p[6];//定义大小为6的概率数组
//		for (i = 0; i < 6; i++)
//		{
//			scanf("%lf", &p[i]);
//		}
//		double sum = 0;
//		for (i = 0; i < 6; i++)
//		{
//			sum+=p[i]*(1+i);//算期望，如1*0.2+2*0.2........
//		}
//		sum *= n;
//		printf("Case #1: %lf", sum);
//
//	}
//}




////----------E-----------------
////此题的思路和第一题类似
//int main()
//{
	//int t,i;
	//scanf("%d", &t);//组数
	//while (t--)//循环t次
//	{
//		int a[20];
//		int n,x;
//		scanf("%d", &n);
//		for(i = 0; i < n; i++)
//		{
//			scanf("%d", &x);
//			a[i] = x;
//		}
//		int num=0,now;
//		scanf("%d", &num);//读入要插入的数num
//		if (a[0] < a[1])//比较数组第一，第二个元素，如果是从小到大，则套第一题代码
//		{
//			for (i = 0; i < n; i++)
//			{
//				if (a[i]>num)
//				{
//					now = i;
//					break;
//				}
//			}
//			int j = n;
//			while (j > now)//往后挪动
//			{
//				a[j] = a[j - 1];
//				j--;
//			}
//			a[i] = num;
//		}
//
//		else if (a[0] > a[1])//如果从大到小排
//		{
//			for (i = 0; i < n; i++)
//			{
//				if (a[i]<num)//改成小于号
//				{
//					now = i;
//					break;
//				}
//			}
//			int j = n;
//			while (j > now)//往后挪动
//			{
//				a[j] = a[j - 1];
//				j--;
//			}
//			a[i] = num;
//		}
//
//		printf("%d", a[0]);
//		for (i = 1; i < n+1; i++)//输出
//		{
//			printf(" %d", a[i]);
//		}
//		printf("\n");
//
//		for (i = 1; i < 20; i++)//清零数组，避免下次使用有上一次的残留
//			a[i] = 0;
//
//	}
//	return 0;
//}





////----------D-----------------
//int main()
//{
//	int a[20];//开大小为20的数组
//	for (int i = 0; i < 20; i++)//用循环给他们赋值为2，3，4，5........
//	{
//		a[i] = i + 2;
//	}
//	for (int i = 0; i < 20; i++)//循环依次处理20个数
//	{
//		for (int j = 0; j < 20; j++)//用循环来看i能否被这些数整除
//		{
//			if (a[i] != a[j])//不能自己除自己
//			{
//				if (a[i] % a[j] == 0)//如果a[i]能被a[j]整除，输出a[i]，例如4能被2整除输出4
//				{
//					printf("%d\n", a[i]);
//					break;//跳出里面循环，继续外层循环，处理下一个i
//				}
//			}
//		}
//	}
//	return 0;
//}



////----------C-----------------
//int main()
//{
//	int a[20];//开大小为20的数组
//	int N,X,i;
//	scanf("%d", &N);//有N个数
//	scanf("%d", &X);//要比对的X
//	for (int i = 0; i < N; i++)//用循环读入数放到数组里
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < N; i++) //用循环来比对X
//	{
//		if (a[i] == X)//如果找到
//		{
//			printf("%d\n", i);//输出下标
//			break;
//		}
//	}
//	if (i == N)//当i=N，则上面循环走完了都没找到X
//	{
//		printf("Not Found\n", i);
//	}
//	return 0;
//}








//----------2-----------------
//int main()
//{
//	int count[10] = { 0 };
//	int num[100];
//	int N;
//	int x,k;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &x);
//		num[i] = x;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		while (num[i])
//		{
//			k = num[i] % 10;
//			count[k]++;
//			num[i] /= 10;
//		}
//	}
//	int max = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (count[i]>max)
//		{
//			max = count[i];
//		}
//	}
//	printf("%d:", max);
//	for (int i = 0; i < 10; i++)
//	{
//		if (count[i]==max)
//			printf(" %d", i);
//	}
//	return 0;
//}


//---------1.-------------
//int main()
//{
//	int a[12];
//	int n;
//	scanf("%d", &n);
//	int x;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &x);
//		a[i] = x;
//	}
//	int num,now;
//	int i;
//	scanf("%d", &num);
//	for (i = 0; i < n; i++)
//	{
//		if (a[i]>num)
//		{
//			now = i;		
//			break;
//		}
//	}
//	int j = n;
//	while (j > now)
//	{
//		a[j] = a[j - 1];
//		j--;
//	}
//
//	a[i] = num;
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	
//	return 0;
//}
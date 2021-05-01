#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int H, W;
	while (1)
	{
		scanf("%d%d", &H,&W);
		if (H == 0 && W == 0)
			break;
		else
		{
			char ch1 = '#', ch2 = '.';
			for (int i = 0; i < H; i++)
			{
				int count = 0;
				while (count < W)
				{
					printf("%c", ch1);
					count++;
					if (count>=W)
						break;
					printf("%c", ch2);
					count++;
				}
				printf("\n");
				char ch = ch1;
				ch1 = ch2;
				ch2 = ch;
			}
		}
		printf("\n");
	}
	return 0;
}




//读取字符转换数字
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	getchar();
//	while (T--)
//	{
//		char ch;
//		int sum = 0;
//		int flag = 1;
		//while ((ch = getchar())!= '#')
		//{
		//	if (ch == '-')
		//	{
		//		flag = 0;
		//		continue;
		//	}
		//	if (ch >= '0'&&ch <= '9')
		//	{
		//		sum = sum * 16 + (ch - '0');
		//	}
		//	if (ch >= 'A'&&ch <= 'Z')
		//	{
		//		sum = sum * 16 + (ch - 'A'+10);
		//	}
		//}
//		if (flag == 1)
//			printf("%d\n", sum);
//		else
//			printf("%d\n", -1*sum);
//	}
//	return 0;
//}










////打印数字总和
//	
//
//int main()
//{
//	char str[1000];
//	while (1)
//	{
//		scanf("%s", &str);
//		if (strcmp(str, "0") == 0)
//			break;
//		char ch;
//		int sum = 0;
//		for (int i = 0; i < 1000; i++)
//		{
//			ch = str[i];
//			if (ch == '\0')
//				break;
//			sum = sum  + (ch - '0');
//			
//		}
//		
//		printf("%d\n", sum);
//	}
//	return 0;
//}



////---------------第一题--------------------
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while (n--)
//	{
//		int x,y=0;//用y存反转后的x
//		scanf("%d", &x);
//		int x2 = x;
//		if (x < 0)
//			x = -x;
//		while (x)
//		{
//			y = y * 10 + x % 10;
//			x = x / 10;
//		}
//		if (x2<0)
//		printf("%d\n", -1*y);
//		else
//			printf("%d\n", y);
//		int flag = 1;
//		for (int i = 2; i < y; i++)
//		{
//			if (y%i == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (x2 < 0)
//		{
//			y = -y;
//			if (flag == 1)
//			{
//				printf("%d是素数\n", y);
//			}
//			else
//			{
//				printf("%d不是素数\n", y);
//			}
//		}
//		else
//		{
//			if (flag == 1)
//			{
//				printf("%d是素数\n", y);
//			}
//			else
//			{
//				printf("%d不是素数\n", y);
//			}
//		}
//		
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int count[26] = { 0 }, i;
	char ch;
	//scanf("%c", &ch);
	while ((ch = getchar()) != EOF)
	{
		int num;
		if (ch >= 'A'&&ch <= 'Z')
		{
			num = ch - 'A';
		}
		else if (ch >= 'a'&&ch <= 'z')
		{
			num = ch - 'a';
		}
		count[num]++;
	}
	char ch1 = 'a';
	for (i = 0; i < 26; i++)
	{
		printf("%c : %d\n", ch1 + i, count[i]);
	}
	return 0;
}



//int main()
//{
//	int count[26] = {0};
//	char ch;
//	while (scanf("%c", &ch) != EOF)
//	{
//		int num;
//		if (ch >= 'A'&&ch <= 'Z')//若是大写
//		{
//			num = ch - 'A';//算出偏移量
//		}
//		else if (ch >= 'a'&&ch <= 'z')//若是小写
//		{
//			num = ch - 'a';//算出偏移量
//		}
//
//		count[num]++;//这句就可以将26个字母计数了
//		//这样理解：我将a-z与下标0-25 一 一关联
//		//a对应下标0，若为a，则count[0]++，就计数了，
//		//若为z，则count[25]++，就计数了，
//		//大写的同理
//	}
//
//	//打印部分
//	char ch2 = 'a';
//	for (int i = 0; i < 26; i++)
//	{
//		printf("%c : %d\n", ch2 + i, count[i]);
//	}
//
//	
//	//以下为引入部分
//	//char ch = 'A';//先定义一个char变量ch为A
//	//'A'-ch=0;
//	//'B'-ch=1;
//	//'C'-ch=2;
//	//这种字符减去字符可以得到偏移量，即B与A差1什么的
//	return 0;
//}
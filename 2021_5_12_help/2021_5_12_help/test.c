#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[1000];
	int i;
	gets(ch);
	if (ch[0] >= 'a' && ch[0] <='z')
	{
		ch[0] = ch[0] - 'a' + 'A';
	}

		int len = strlen(ch);
		for (i = 0; i < len; i++)
		{
			if ((ch[i] == ' ' )&& (ch[i + 1] >= 'a' && ch[i + 1] <= 'z'))
			{
				ch[i + 1] = ch[i + 1] - 'a' + 'A';
			}
		}

	printf("%s\n", ch);
	return 0;
}

//int main()
//{
//	char ch;//接收每一个字符
//	int space = 1;//类似于flag，当目前读入是空格设置为1，默认为1
//	while ((ch = getchar()) != '\n')//这句的意思是接收字符且不是\0
//	{
//		//思路：当前面为空格，遇到的第一个字母大写输出
//
//		if (ch >= 'a'&&ch <= 'z')//如果ch是小写字母
//		{
//			if (space == 1)//如果它前面是空格
//			{
//				printf("%c", ch-'a'+'A');
//				space = 0;//改状态
//			}
//			else//如果它前面不是空格，直接输出
//			{
//				printf("%c", ch);
//			}
//		}
//		else if (ch == ' ')//如果ch是空格
//		{
//			printf("%c", ch);
//			space = 1;//改状态为1
//		}
//		else//如果ch是其他
//		{
//			printf("%c", ch);
//			space = 0;//改状态
//		}
//
//	}
//	return 0;
//}
////How are you?
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//´óÐ¡Ð´×ÖÄ¸×ª»»
{
	char ch;
	while (~scanf("%c", &ch))
	{
		if (ch >= 'a'&&ch <= 'z')
			printf("%c\n", ch - 32);
		else if (ch >= 'A'&&ch <= 'Z')
			printf("%c\n", ch + 32);
	}
}

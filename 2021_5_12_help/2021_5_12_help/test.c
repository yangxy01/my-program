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
//	char ch;//����ÿһ���ַ�
//	int space = 1;//������flag����Ŀǰ�����ǿո�����Ϊ1��Ĭ��Ϊ1
//	while ((ch = getchar()) != '\n')//������˼�ǽ����ַ��Ҳ���\0
//	{
//		//˼·����ǰ��Ϊ�ո������ĵ�һ����ĸ��д���
//
//		if (ch >= 'a'&&ch <= 'z')//���ch��Сд��ĸ
//		{
//			if (space == 1)//�����ǰ���ǿո�
//			{
//				printf("%c", ch-'a'+'A');
//				space = 0;//��״̬
//			}
//			else//�����ǰ�治�ǿո�ֱ�����
//			{
//				printf("%c", ch);
//			}
//		}
//		else if (ch == ' ')//���ch�ǿո�
//		{
//			printf("%c", ch);
//			space = 1;//��״̬Ϊ1
//		}
//		else//���ch������
//		{
//			printf("%c", ch);
//			space = 0;//��״̬
//		}
//
//	}
//	return 0;
//}
////How are you?
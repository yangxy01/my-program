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
//		if (ch >= 'A'&&ch <= 'Z')//���Ǵ�д
//		{
//			num = ch - 'A';//���ƫ����
//		}
//		else if (ch >= 'a'&&ch <= 'z')//����Сд
//		{
//			num = ch - 'a';//���ƫ����
//		}
//
//		count[num]++;//���Ϳ��Խ�26����ĸ������
//		//������⣺�ҽ�a-z���±�0-25 һ һ����
//		//a��Ӧ�±�0����Ϊa����count[0]++���ͼ����ˣ�
//		//��Ϊz����count[25]++���ͼ����ˣ�
//		//��д��ͬ��
//	}
//
//	//��ӡ����
//	char ch2 = 'a';
//	for (int i = 0; i < 26; i++)
//	{
//		printf("%c : %d\n", ch2 + i, count[i]);
//	}
//
//	
//	//����Ϊ���벿��
//	//char ch = 'A';//�ȶ���һ��char����chΪA
//	//'A'-ch=0;
//	//'B'-ch=1;
//	//'C'-ch=2;
//	//�����ַ���ȥ�ַ����Եõ�ƫ��������B��A��1ʲô��
//	return 0;
//}
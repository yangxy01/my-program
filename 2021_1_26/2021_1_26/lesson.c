#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()//������������
{
	char  a = 3;
	char  b = 127;
	char  c = a + b;
	printf("%d\n", c);//-126
}


//struct Stu
//{
//	char name[20];
//	char sex[10];
//	int age[2];
//};
//int main()
//{
//	//����ṹ��
//	struct Stu s = { "xiaoming", "man", 21 };
//	//printf("%s %s %d\n", s.name, s.sex, s.age);
//
//	//ͨ��ָ����ʽṹ���Ա
//	struct Stu* pa = &s;
//	//printf("%s\n", (*pa).name);
//	printf("%s\n", pa->name);
//
//	return 0;
//}
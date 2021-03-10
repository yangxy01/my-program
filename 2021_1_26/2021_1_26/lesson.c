#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()//关于整形提升
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
//	//定义结构体
//	struct Stu s = { "xiaoming", "man", 21 };
//	//printf("%s %s %d\n", s.name, s.sex, s.age);
//
//	//通过指针访问结构体成员
//	struct Stu* pa = &s;
//	//printf("%s\n", (*pa).name);
//	printf("%s\n", pa->name);
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Stu//����ѧ������
{
	char name[20];
	int age;
	char sex[5];
};

int main()//�ṹ��ʾ��
{
	struct Stu s1 = { "xiaoming", 20, "man" };
	printf("%s %d %s\n", s1.name, s1.age, s1.sex);
}


//1.������ʵ��
//int my_srelen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//2.ָ���ȥָ��ʵ��
//int my_srelen(char*str)
//{
//	char*p = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - p;
//}
//
//int main()//ģ��ʵ��strlen����
//{
//	char str[] = "abcdefg";
//	int len = my_srelen(str);
//	printf("%d\n", len);
//}


//int main()//̽�������͵�����
//{
//	int arr[10] = { 0 };
//	int i;
//	char* pc = arr;
//	for (i = 0; i < 40; i++)
//	{
//		*(pc + i) = 'x';
//	}
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int num=0;
//	scanf("%d", &num);
//	double sum = 0;
//	int i = 0,r;
//	while (num)
//	{
//		r = num % 8;
//		sum = sum + r*pow(10, i);
//		num /= 8;
//		i++;
//	}
//	printf("%05.0lf\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* p = &a;
//	*p = 0;
//	return 0;
//}
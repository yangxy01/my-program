#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


int main()//����쳲�������
{
	int num;
	scanf("%d", &num);
	if (num == 1 || num == 2)
		printf("%d\n", 1);
	else
	{
		int count = 3;
		int n = 1;
		int m = 1;
		int s;
		while (count <= num)
		{
			s = n + m;
			n = m;
			m = s;
			count++;
		}
		printf("%d\n", s);
	}

	return 0;
}


//double func(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k < 0)
//	{
//		return 1.0/n*func(n, k + 1);
//	}
//	else
//		return n*func(n, k - 1);
//}
//
//int main()//�ݹ�ʵ��n��k�η�
//{
//	int n,k;
//	scanf("%d%d", &n,&k);
//	double ret=func(n,k);
//	printf("%lf\n", ret);
//
//	return 0;
//}


//int DigitSum(int num)
//{
//	if (num > 9)
//		return num % 10 + DigitSum(num / 10);
//	else
//		return num;
//}
//
//int main()//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//{
//	int num;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//
//	return 0;
//}



//void reverse_string(char * str)//"!dlroW olleH"
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//	{
//		reverse_string(str+1);
//	}
//	*(str + len - 1) = tmp;
//
//}
//
//int main()//�ַ������򣨵ݹ�ʵ�֣�
//{
//	char str[] = "!dlroW olleH";
//	reverse_string(str);
//	printf("%s\n", str);
//}



//void reverse_string(char * str)
//{
//	int len = strlen(str);
//	char*left = str;
//	char*right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	
//}
//
//int main()//�ַ������򣨷ǵݹ�ʵ�֣�
//{
//	char str[] = "!dlroW olleH";
//	reverse_string(str);
//	printf("%s\n", str);
//}



//int my_strlen(char *s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(s + 1);
//}
//
//int main()//strlen��ģ�⣨�ݹ�ʵ�֣�
//{
//	char str[] = { "abcdefg" };
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}

//int func(int n)
//{
//	if (n == 1) 
//		return 1;
//	else 
//		return n*func(n - 1);
//}
//
//int main()//�ݹ���׳�
//{
//	int n;
//	scanf("%d", &n);
//	int sum = func(n);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()//�ǵݹ�ʵ����׳�
//{
//	int i,n;
//	scanf("%d", &n);
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//void func(int num)
//{
//	if (num > 9)
//	{
//		func(num / 10);
//	}
//	
//	printf("%d ", num%10);
//}
//
//int main()//�ݹ鷽��ʵ�ִ�ӡ���ֵ�ÿһλ
//{
//	int num;
//	scanf("%d", &num);
//	func(num);
//	return 0;
//}

//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//int main()
//{
//	int ret = Fun(2);
//	printf("%d\n", ret);
//}

//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
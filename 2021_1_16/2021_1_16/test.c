#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//���ֲ��ң�ÿ�����м�ķ�����С��Χ
{
	int arr[10] = { 56, 57, 58, 59, 60, 61, 62, 63, 64, 65 };
	int left = 0, right = 9, mid=0;//��ʼ�������Ҷ������±�
	int score = 0, i, j;
	scanf("%d", &score);//¼��С��ȡ�õķ���
	while (left <= right)//ѭ����С�жϷ�Χ���۰�Ѱ��
	{
		mid = (left + right) / 2;//����м��±�����score�Ƚ���С��Χ
		if (arr[mid]<score)//���µ��м�ֵ��ʵ��ֵС
		{
			left = mid+1;
			continue;
		}
		else if (arr[mid]>score)//���µ��м�ֵ��ʵ��ֵ��
		{
			right = mid-1;
			continue;
		}
		else//���µ��м�ֵ��ʵ��ֵ���
		{
			printf("�ҵ�������ķ�����%d���±���%d\n", arr[mid],mid);
			break;
		}
	}
	if (left > right)
	{
		printf("��µķ���������Χ��\n");
	}

	return 0;
}
//int main()//�žų˷���
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()//��ʮ�����е����ֵ
//{
//	int arr[10] = { 0 };
//	int i, max= 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//}
//int main()//�������
//{
//	float m=1, n = 1, sum=0;
//	for (n = 1; n <= 100; n++)
//	{
//		sum += (m / n);
//		m *= -1;
//	}
//	printf("%f\n", sum);
//}
//int main()//1�� 100 �����������г��ֶ��ٸ�����9
//{
//	int i, m, count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		m = i;
//		do
//		{
//			if (m % 10 == 9)
//				count++;
//		} while (m/=10);
//	}
//	printf("%d\n", count);
//}
//int main()//��ӡ����
//{
//	int i, j, flag;
//	for (i = 100; i <= 200; i++)
//	{
//		flag = 1;
//		for (j = 2; j <i ; j++)
//		{
//			if (i%j == 0)
//				flag = 0;
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//}
//int main()//��ӡ����
//{
//	int i;
//	for (i = 1001; i < 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//			printf("%d ", i);
//	}
//}
//int main()//�����Լ��
//{
//	int m, n, r = 0,tmp;
//	scanf("%d%d", &m, &n);
//	if (m < n)
//	{
//		tmp = m;
//		m = n;
//		n = tmp;
//	}
//	while (1)
//	{
//		if (m%n == 0)
//		{
//			printf("%d\n", n);
//			break;
//		}
//		else
//		{
//			r = m%n;
//			m = n;
//			n = r;
//		}
//	}
//}
//int main()//��ӡ3�ı���
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//}
//int main()//��С����
//{
//	int num[3], i, j, tmp;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2 - i; j++)
//		{
//			if (num[j] < num[j + 1])
//			{
//				tmp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//		printf("%d ", num[i]);
//}
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()//����1��+2��+....+n!
//{
//	int n,i, j;
//	int tmp=1,sum=0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		tmp = 1;
//		for (j = 1; j <= i; j++)
//		{
//			tmp *= j;
//		}
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//}
//int main()
//{
//	while (scanf("%d",&a) != EOF);
//	//end of file
//	while (~scanf("%d", &a));
//}
//int main()
//{
//	char ch1[10];
//	char ch2[10];
//	scanf("%s", ch1);
//	scanf("%s", ch2);
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//}
//int main()//��ӡ1��100֮�������
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n, i;
//	double h, x;
//	scanf("%lf %d", &h, &n);
//	x = h;
//	h = ((int)((h * 1000 + 5) / 10) / 100.0) / 2.0;
//	if (n==1)
//		printf("%.2lf\n%.2lf\n", x, h);
//	else
//	{
//		for (i = 2; i <= n; i++)
//		{
//			x = (int)(((x+ 2*h) * 1000 + 5) / 10) / 100.0 ;
//			h = (int)(((h / 2.0) * 1000 + 5) / 10) / 100.0;
//		}
//		printf("%.2lf\n%.2lf\n", x, h);
//	}
//
//	return 0;
//}


int Is_prime(int n)//�ж������ĺ���
{
	int i=0;
	if (n == 1) 
		return 1;
	else if (n == 2)
		return 2;
	else
	{
		for (i = 2; i < n; i++)//�ж�2-n֮����û������
		{
			if (n % i == 0)
				return 0;//��������������������0
		}
	}
	//��������û�з�����ͷ���n
	//������淵��0������Ͳ�ִ��
	return n;
}

int Is_Palindrome(int n)
{
	int m = n;//�����������n��ֵ����Ϊ����n��ģ���ʱ���Ҳ�����
	int sum = 0;//�������ܷ�������������n=123�������sum=321
	while (n)//�����ӣ�n=123
	{
		sum = sum * 10 + n % 10;//��һ��ѭ����sum=0*10+3=3
		n /= 10;//��һ��ѭ��:n=n/10=12
	}
	if (m == sum)//���123=321���ǻ�����
		return m;//���ػ�����
	else
		return 0;//�������򲻽��������������if����������������
}

int main()
{
	int n, i=1, j=1, k;
	scanf("%d", &n);
	while (i + j <= n)
	{
		while (Is_prime(j) == 0)//�������������һֱѭ��ֱ��Ϊ����Ϊֹ
		{
			j++;
		}
		while (i <=j)
		{
			while (Is_prime(i) == 0)//�������������һֱѭ��ֱ��Ϊ����Ϊֹ
			{
				i++;
			}
			if (Is_Palindrome(i*i + j*j))//�ӽ�ȥ�ж��Ƿ������
			{
				if ((i + j) % 2 == 0)
				printf("%d %d %d\n", i, j, i*i + j*j);
			}

			i++;
		}
		j++;
	}

	return 0;
}



//int main()
//{
//	int n, i, j,k;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		if (Is_prime(i))//���i������
//		{
//			for (j = 1; j < n; j++)
//			{
//				if (Is_prime(j))//���j������
//				{
//					if (Is_Palindrome(i*i + j*j) && i <= j)//�ж��Ƿ������
//					{
//						printf("%d %d %d\n", i, j, i*i + j*j);
//						//break;//���breakֻ������j��ѭ����������һ��i
//					}
//				}
//
//			}
//		}
//
//	}
//	return 0;
//}
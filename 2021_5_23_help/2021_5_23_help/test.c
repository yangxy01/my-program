#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a[100][100] , m, n, i, j, sum = 0;
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum += a[i][j];
		}
		printf("%d", sum);
		sum = 0;
	}
	return 0;
}




//int main()
//{
//	int i, a[11];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);//ÿ�����ֳ��ֵĴ���
//	}
//
//	if (a[0] == 0)//���0������0��
//	{
//		for (i = 1; i < 10;  i++)
//		{
//			while (a[i])
//			{
//				printf("%d", i);
//				a[i]--;
//			}
//		}
//	}
//	else if (a[0] != 0)//���0������
//	{
//		for (i = 1; i < 10; i++)//������1-9����С���Ҵ�����Ϊ0�����
//		{
//			if (a[i] != 0)//i�����������Ϊ0
//			{
//				printf("%d", i);
//				a[i]--;//������һ
//				break;//�������������forѭ��
//			}
//		}
//
//		while (a[0]--)//��0������
//		{
//			printf("0");
//		}
//
//		
//		for (; i < 10; i++)//���������������i������
//		{
//			if (a[i] != 0)//i�����������Ϊ0
//			{
//				while (a[i]--)//�������������
//				{
//					printf("%d", i);
//				}
//			}
//		}
//		
//	}
//	printf("\n");
//	return 0;
//}



////----------F-----------------
//int main()
//{
//	int t, i;
//	scanf("%d", &t);//����
//	while (t--)//ѭ��t��
//	{
//		int n;
//		scanf("%d", &n);
//		double p[6];//�����СΪ6�ĸ�������
//		for (i = 0; i < 6; i++)
//		{
//			scanf("%lf", &p[i]);
//		}
//		double sum = 0;
//		for (i = 0; i < 6; i++)
//		{
//			sum+=p[i]*(1+i);//����������1*0.2+2*0.2........
//		}
//		sum *= n;
//		printf("Case #1: %lf", sum);
//
//	}
//}




////----------E-----------------
////�����˼·�͵�һ������
//int main()
//{
	//int t,i;
	//scanf("%d", &t);//����
	//while (t--)//ѭ��t��
//	{
//		int a[20];
//		int n,x;
//		scanf("%d", &n);
//		for(i = 0; i < n; i++)
//		{
//			scanf("%d", &x);
//			a[i] = x;
//		}
//		int num=0,now;
//		scanf("%d", &num);//����Ҫ�������num
//		if (a[0] < a[1])//�Ƚ������һ���ڶ���Ԫ�أ�����Ǵ�С�������׵�һ�����
//		{
//			for (i = 0; i < n; i++)
//			{
//				if (a[i]>num)
//				{
//					now = i;
//					break;
//				}
//			}
//			int j = n;
//			while (j > now)//����Ų��
//			{
//				a[j] = a[j - 1];
//				j--;
//			}
//			a[i] = num;
//		}
//
//		else if (a[0] > a[1])//����Ӵ�С��
//		{
//			for (i = 0; i < n; i++)
//			{
//				if (a[i]<num)//�ĳ�С�ں�
//				{
//					now = i;
//					break;
//				}
//			}
//			int j = n;
//			while (j > now)//����Ų��
//			{
//				a[j] = a[j - 1];
//				j--;
//			}
//			a[i] = num;
//		}
//
//		printf("%d", a[0]);
//		for (i = 1; i < n+1; i++)//���
//		{
//			printf(" %d", a[i]);
//		}
//		printf("\n");
//
//		for (i = 1; i < 20; i++)//�������飬�����´�ʹ������һ�εĲ���
//			a[i] = 0;
//
//	}
//	return 0;
//}





////----------D-----------------
//int main()
//{
//	int a[20];//����СΪ20������
//	for (int i = 0; i < 20; i++)//��ѭ�������Ǹ�ֵΪ2��3��4��5........
//	{
//		a[i] = i + 2;
//	}
//	for (int i = 0; i < 20; i++)//ѭ�����δ���20����
//	{
//		for (int j = 0; j < 20; j++)//��ѭ������i�ܷ���Щ������
//		{
//			if (a[i] != a[j])//�����Լ����Լ�
//			{
//				if (a[i] % a[j] == 0)//���a[i]�ܱ�a[j]���������a[i]������4�ܱ�2�������4
//				{
//					printf("%d\n", a[i]);
//					break;//��������ѭ�����������ѭ����������һ��i
//				}
//			}
//		}
//	}
//	return 0;
//}



////----------C-----------------
//int main()
//{
//	int a[20];//����СΪ20������
//	int N,X,i;
//	scanf("%d", &N);//��N����
//	scanf("%d", &X);//Ҫ�ȶԵ�X
//	for (int i = 0; i < N; i++)//��ѭ���������ŵ�������
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < N; i++) //��ѭ�����ȶ�X
//	{
//		if (a[i] == X)//����ҵ�
//		{
//			printf("%d\n", i);//����±�
//			break;
//		}
//	}
//	if (i == N)//��i=N��������ѭ�������˶�û�ҵ�X
//	{
//		printf("Not Found\n", i);
//	}
//	return 0;
//}








//----------2-----------------
//int main()
//{
//	int count[10] = { 0 };
//	int num[100];
//	int N;
//	int x,k;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &x);
//		num[i] = x;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		while (num[i])
//		{
//			k = num[i] % 10;
//			count[k]++;
//			num[i] /= 10;
//		}
//	}
//	int max = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (count[i]>max)
//		{
//			max = count[i];
//		}
//	}
//	printf("%d:", max);
//	for (int i = 0; i < 10; i++)
//	{
//		if (count[i]==max)
//			printf(" %d", i);
//	}
//	return 0;
//}


//---------1.-------------
//int main()
//{
//	int a[12];
//	int n;
//	scanf("%d", &n);
//	int x;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &x);
//		a[i] = x;
//	}
//	int num,now;
//	int i;
//	scanf("%d", &num);
//	for (i = 0; i < n; i++)
//	{
//		if (a[i]>num)
//		{
//			now = i;		
//			break;
//		}
//	}
//	int j = n;
//	while (j > now)
//	{
//		a[j] = a[j - 1];
//		j--;
//	}
//
//	a[i] = num;
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	
//	return 0;
//}
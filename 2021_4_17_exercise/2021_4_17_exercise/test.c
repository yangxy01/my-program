#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>



int main()
{
	int m, n, i, j, k, count = 0, sum = 0;
	scanf("%d %d", &m, &n);
	for (i = m; i <= n; i++)
	{
		sum = 0;
		count = 0;
		for (j = 1; j < i; j++)
		{

			if (i%j == 0)
			{
				sum += j;
				count++;

			}
			if (sum == i)
			{
				printf("%d = ", i);
				for (k = 1; k < i; k++)
				{
					if (i%k == 0)
					{
						printf("%d + ", k);

					}
				}
				printf("\n");
				break;
			}
		}
	}
	return 0;
}



//int main()//�ж�����
//{
//	int m, n, i, j, k, count = 0, sum = 0;
//	scanf("%d %d", &m, &n);
//	for (i = m; i <= n; i++)
//	{
//		sum = 0;
//		count = 0;
//		//1.�ж��ǲ�������
//		for (j = 1; j < i; j++)//��ѭ��������
//		{
//			if (i%j == 0)
//			{
//				sum += j;//�����Ӽ�����
//				count++;//��¼���Ӹ���
//			}
//		}
//
//		//2.�������Ŵ�ӡ
//		if (sum == i)
//		{
//			//һ���ȴ�ӡ�Ǹ�����=��
//			printf("%d=", i);
//
//			//�����ٴ�ӡ����
//			for (j = 1; j < i; j++)
//			{
//
//				if (i%j == 0)//��ӡ����
//				{
//					printf("%d", j);
//					if (count > 1)
//					{
//						printf("+");
//						count--;
//					}
//				}
//				
//			}
//
//			printf("\n");//����һ���������һ������
//			
//		}
//		
//	}
//	return 0;
//}



//int main()//ˮ�ɻ���
//{
//	int n,i,k,m,count=0;
//	scanf("%d", &n);
//	for (i = pow(10.0, n - 1); i <= pow(10.0, n); i++)
//	{
//		count = 0;
//		k = i;
//		while (k  != 0)
//		{
//			m = k % 10;
//			k = k / 10;
//			count += m*m*m;
//		}
//		if (count == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, tmp, max=0, min=0, c;
	int i = 1;//��������ڼ���
	scanf("%d", &n);
	while (max - min != 495)//ע������min��maxӦ��Ҫ�����渳��ֵ����õõ����ֵ
	{
		//�����λʮλ��λҪ�ŵ�ѭ����
		int gewei = n % 10;
		int shiwei = (n / 10) % 10;
		int baiwei = (n / 100);

		if (gewei > shiwei)//��λʮλȡ���
		{
			tmp = gewei;
			gewei = shiwei;
			shiwei = tmp;
		}
		if (shiwei > baiwei)//ʮλ��λȡ���
		{
			tmp = shiwei;
			shiwei = baiwei;
			baiwei = tmp;
		}
		if (gewei > shiwei)//�µ�ʮλ�;ɸ�λȡ���
		{
			tmp = gewei;
			gewei = shiwei;
			shiwei = tmp;
		}
		
		max = 100 * baiwei + 10 * shiwei + gewei;
		min = 100 * gewei + 10 * shiwei + baiwei;
		if (gewei == shiwei && gewei == baiwei)
			min = 0;
		c = max- min;
		printf("%d: %d - %d = %d\n", i, max, min, c);
		i++;//���Ӵ���
		n = c;//n��ֵ����
	}

	return 0;
}
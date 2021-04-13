#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, tmp, max=0, min=0, c;
	int i = 1;//用来计算第几次
	scanf("%d", &n);
	while (max - min != 495)//注意这里min，max应该要在上面赋初值，免得得到随机值
	{
		//计算个位十位百位要放到循环里
		int gewei = n % 10;
		int shiwei = (n / 10) % 10;
		int baiwei = (n / 100);

		if (gewei > shiwei)//个位十位取最大
		{
			tmp = gewei;
			gewei = shiwei;
			shiwei = tmp;
		}
		if (shiwei > baiwei)//十位百位取最大
		{
			tmp = shiwei;
			shiwei = baiwei;
			baiwei = tmp;
		}
		if (gewei > shiwei)//新的十位和旧个位取最大
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
		i++;//增加次数
		n = c;//n的值换了
	}

	return 0;
}
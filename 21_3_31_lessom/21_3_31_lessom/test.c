#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num[] = { 1, 2, 0, 0 };
	int numSize = 4;
	int ksize = 0,k=34;
	while (k)
	{
		ksize++;
		k /= 10;
	}
	k = 34;
	int len = ksize>numSize ? ksize + 1 : numSize + 1;
	int retArr[4];
	int Arri = numSize - 1;
	int reti = 0;
	int next = 0, sum = 0;
	while (Arri >= 0 || k>0)
	{
		if (Arri >= 0)
		{
			sum = k % 10 + num[Arri--] + next;
			k /= 10;
			if (sum >= 10)
			{
				retArr[reti++] = sum % 10;
				next = 1;
			}
			else
			{
				retArr[reti++] = sum;
				next = 0;
			}
		}
		else
		{
			sum = k % 10 + next;
			k /= 10;
			if (sum >= 10)
			{
				retArr[reti++] = sum % 10;
				next = 1;
			}
			else
			{
				retArr[reti++] = sum;
				next = 0;
			}
		}
	}
	int begin = 0, end = reti - 1;
	while (begin<end)
	{
		int tmp = retArr[begin];
		retArr[begin] = retArr[end];
		retArr[end] = tmp;
		begin++;
		end--;
	}
	printf("%d\n", reti);
}


//int main()
//{
//	
//	int nums[8] = { 0, 1, 2, 2, 3, 0, 4, 2};
//	int val = 2, numsSize=8;
//	int i, j,k=0;
//	for (i = 0; i<numsSize; i++)
//	{
//		if (nums[i] == val)
//		{
//			for (j = i; j<numsSize - 1; j++)
//				nums[j] = nums[j + 1];
//			numsSize--;
//			i--;
//		}
//		else
//			continue;
//	}
//	for (i = 0; i < numsSize; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	return 0;
//}
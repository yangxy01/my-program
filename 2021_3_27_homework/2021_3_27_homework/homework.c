#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int* singleNumbers(int* nums, int numsSize, int* returnSize);


int main()//leecode:I.数组中数字出现的次数
{
	int nums[8] = { 6, 5, 5, 9, 10, 9, 4, 10};
	int numsSize = 8;
	int returnSize = 0;
	int *arr=singleNumbers(nums, numsSize, &returnSize);
	printf("%d %d\n", arr[0], arr[1]);

	return 0;
}
int* singleNumbers(int* nums, int numsSize, int* returnSize)
{
	int ret = 0, a = 0, b = 0;
	int* arr = (int*)malloc(sizeof(int)* 2);
	*returnSize = 2;
	for (int i = 0; i<numsSize; i++)
	{
		ret ^= *(nums + i);
	}
	int count = 0;
	while (1)
	{
		if (ret & 1 == 1)
			break;
		else
		{
			ret = ret >> 1;
			count++;
		}
	}
	for (int i = 0; i<numsSize; i++)
	{
		if ((1 ^ (nums[i] >> count))%2 == 1)
			a ^= nums[i];
		else
			b ^= nums[i];
	}
	arr[0] = a;
	arr[1] = b;
	return arr;
}
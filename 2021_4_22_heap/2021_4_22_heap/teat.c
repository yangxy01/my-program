#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void AdjustDown(int*a, int n, int parent);
void swap(int*a, int*b);
void HeapSort(int*a, int n)
{
	//1.建堆
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);//数组，n个数，父节点为i
	}

	//2.排序
	int end = n - 1;
	while (end > 0)
	{
		swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}

	
}

void swap(int*a, int*b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp; 
}

void AdjustDown(int*a, int n, int parent)
{
	int child = parent * 2 + 1;//默认小孩子为左孩子
	while (child < n)
	{
		if (child+1 < n&&a[child + 1] < a[child])//找出最小的孩子
		{
			child++;//小孩子为右孩子
		}

		if (a[child] < a[parent])//交换孩子和父亲的值
		{
			swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

int main()
{
	//int a[] = { 27, 15, 18, 28, 34, 65, 49, 25, 37 };
	int a[] = { 15, 18, 28, 34, 65, 19, 49, 25, 37, 27 };
	int n = sizeof(a) / sizeof(a[0]);
	//AdjustDown(a, n, 0);
	
	//建堆
	//for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	//{
	//	AdjustDown(a, n, i);//数组，n个数，父节点为i
	//}


	//堆排序
	HeapSort(a, n);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

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
		if (child + 1 < n&&a[child + 1] > a[child])//找出最小的孩子
		{
			child++;//小孩子为右孩子
		}

		if (a[child] > a[parent])//交换孩子和父亲的值
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

void HeapInit(HP*php, HPDateType*a, int n)
{
	assert(php);
	php->a = (HPDateType*)malloc(sizeof(HPDateType)*n);
	if (php->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	memcpy(php->a, a, sizeof(HPDateType)*n);
	php->size = n;
	php->capacity = n;

	//建堆
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(php->a, n, i);//数组，n个数，父节点为i
	}

}
void HeapDestory(HP*php)
{
	assert(php);
	free(php->a);
	php->size = 0;
	php->capacity = 0;

}
void HeapPrint(HP*php)
{
	/*for (int i = 0; i < php->size; i++)
	{
		printf("%d ", php->a[i]);
	}
	printf("\n");*/
	int num = 1;
	int count = 0;
	while (1)
	{
		for (int j = 0; j < num; j++)
		{
			printf("%d ", php->a[count]);
			count++;
			if (count == php->size)
				break;
		}
		printf("\n");
		num *= 2;
		if (count == php->size)
			break;
	}
}
void HeapPush(HP*php, HPDateType x)
{
	if (php->size == php->capacity)
	{
		HPDateType*tmp = (HPDateType*)realloc(php->a, php->capacity * 2 * sizeof(HPDateType));
		php->a = tmp;
		php->capacity *= 2;
	}
	php->a[php->size] = x;
	php->size++;

	AdjustUp(php->a, php->size, php->size - 1);
}

void AdjustUp(int*a, int n, int child)
{
	int parent =(child - 1) / 2;
	while (child > 0)
	{
		if (a[parent] < a[child])
			swap(&a[parent], &a[child]);
		child = parent;
		parent = (child - 1) / 2;
		if (a[parent] < child)
			break;
	}
}
void HeapPop(HP*php)
{
	assert(php);
	assert(php->size>0);
	swap(&php->a[0], &php->a[php->size - 1]);

	php->size--;//删除最后一个数据
	AdjustDown(php->a, php->size, 0);
}
HPDateType HeapTop(HP*php)
{
	assert(php);
	assert(php->size>0);
	return php->a[0];
}
int HeapSize(HP*php)
{
	assert(php);
	return php->size;
}
bool HeapEmpty(HP*php)
{
	assert(php);
	if (php->size == 0)
		return false;
	else
		return true;
}
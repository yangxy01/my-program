#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

int main()
{
	int a[] = { 15, 18, 28, 34, 65, 19, 49, 25, 37, 27 };
	int n = sizeof(a) / sizeof(a[0]);
	HP hp;
	HeapInit(&hp, a, n);
	HeapPrint(&hp);

	HeapPush(&hp, 8);
	HeapPrint(&hp);

	HeapPush(&hp, 88);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);

	HeapDestory(&hp);

	return 0;
}
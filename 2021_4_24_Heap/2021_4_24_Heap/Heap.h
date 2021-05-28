#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>

typedef int HPDateType;
struct Heap
{
	HPDateType*a;
	int size;
	int capacity;
};
typedef struct Heap HP;

void swap(int*a, int*b);
void AdjustDown(int*a, int n, int parent);
void AdjustUp(int*a, int n, int child);

void HeapInit(HP*php,HPDateType*a, int n);
void HeapDestory(HP*php);
void HeapPush(HP*php, HPDateType x);
void HeapPop(HP*php);
HPDateType HeapTop(HP*php);
int HeapSize(HP*php);
bool HeapEmpty(HP*php);
void HeapPrint(HP*php);
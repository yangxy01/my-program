#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


void SeqListInit(SeqList* pq)
{
	assert(pq);//避免传过来的是空指针

	pq->a = NULL;
	pq->size = pq->capacity = 0;
}

void SeqListDeatory(SeqList* pq)
{
	assert(pq); 

	free(pq->a);
	pq->a = NULL;
	pq->capacity = pq->size = 0;
}

void SeqCheckList(SeqList* pq)//检查是否需要扩容
{
	//判断是否满了，增容
	if (pq->size == pq->capacity)
	{
		int newcapicity = pq->capacity == 0 ? 4 : pq->capacity * 2;
		SeqDateType*newA = realloc(pq->a, sizeof(SeqDateType)*newcapicity);
		if (newA == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		pq->a = newA;
		pq->capacity = newcapicity;
	}
}

void SeqListPushBack(SeqList* pq, SeqDateType x)//尾部插入
{
	assert(pq);
	SeqCheckList(pq);
	pq->a[pq->size] = x;//a为数组
	pq->size++;

}
void SeqListPushFront(SeqList* pq, SeqDateType x)//头部插入
{
	assert(pq);
	SeqCheckList(pq);
	int end = pq->size - 1;
	while (end >= 0)
	{
		pq->a[end + 1] = pq->a[end];
		end--;
	}
	pq->a[0] = x;
	pq->size++;
}


void SeqListPopBack(SeqList* pq)//尾部删除
{
	assert(pq);
	assert(pq->size > 0);
	pq->size--;
}


void SeqListPopFront(SeqList* pq)//头部删除
{
	assert(pq);
	assert(pq->size > 0);

	int begin = 0;
	while (begin<pq->size -1)
	{
		pq->a[begin] = pq->a[begin + 1];
		begin++;
	}
	pq->size--;
}


int SeqListFind(SeqList*pq, SeqDateType x)//查找函数，返回下标
{
	assert(pq);
	for (int i = 0; i < pq->size; i++)
	{
		if (pq->a[i] == x)
			return 1;
	}
	return -1;//找不到返回-1
}

void SeqListInsert(SeqList*pq, int pos, SeqDateType x)//中间插入
{
	assert(pq);
	assert(pos >= 0 && pos <= pq->size);
	SeqCheckList(pq);

	int end = pq->size - 1;
	while (end >= pos)
	{
		pq->a[end + 1] = pq->a[end];
		end--;
	}
	pq->a[pos] = x;
	pq->size++;
}

void SeqListErase(SeqList*pq, int pos)//中间删除
{
	assert(pq);
	assert(pos >= 0 && pos < pq->size);

	int begin = pos;
	while (begin <= pq->size - 1)
	{
		pq->a[begin] = pq->a[begin + 1];
		begin++;
	}
	pq->size--;
}

void SeqListModify(SeqList*pq, int pos, SeqDateType x)//中间修改
{
	assert(pq);
	assert(pos >= 0 && pos < pq->size);

	pq->a[pos] = x;
}

void SeqListPrint(SeqList*pq)//打印
{
	assert(pq);
	for (int i = 0; i < pq->size; i++)
	{
		printf("%d ", pq->a[i]);
	}
	printf("\n");
}


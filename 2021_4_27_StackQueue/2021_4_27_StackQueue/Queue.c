#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

void QueueInit(Queue*pq)//初始化
{
	assert(pq);
	pq->head = pq->tail = NULL;
}
void QueueDestory(Queue*pq)//销毁
{
	assert(pq);
	QueueNode*cur = pq->head;
	while (cur)
	{
		QueueNode*next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
}

void QueuePush(Queue*pq, QDateType x)//插入数据
{
	assert(pq);
	QueueNode*newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode == NULL)//若失败
	{
		printf("malloc fail\n");
	}

	newnode->date = x;
	newnode->next = NULL;

	if (pq->head == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}
void QueuePop(Queue*pq)//出数据
{
	assert(pq);
	assert(!QueueEmpty(pq));//断言不为空,空就不应该调用Pop
	if (pq->head->next == NULL)//只有一个节点
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QueueNode*next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}

}

QDateType QueueFront(Queue*pq)//取队头数据
{
	assert(pq);
	assert(!QueueEmpty(pq));//断言不为空
	return pq->head->date;
}

QDateType QueueBack(Queue*pq)//取队尾数据
{
	assert(pq);
	assert(!QueueEmpty(pq));//断言不为空
	return pq->tail->date;
}

bool QueueEmpty(Queue*pq)//是否为空
{
	assert(pq);
	return pq->head == NULL;
}
int QueueSize(Queue*pq)//返回个数
{
	assert(pq);
	int size = 0;
	QueueNode*cur = pq->head;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return size;
}
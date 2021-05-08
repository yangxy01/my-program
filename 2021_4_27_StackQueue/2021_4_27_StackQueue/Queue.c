#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

void QueueInit(Queue*pq)//��ʼ��
{
	assert(pq);
	pq->head = pq->tail = NULL;
}
void QueueDestory(Queue*pq)//����
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

void QueuePush(Queue*pq, QDateType x)//��������
{
	assert(pq);
	QueueNode*newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode == NULL)//��ʧ��
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
void QueuePop(Queue*pq)//������
{
	assert(pq);
	assert(!QueueEmpty(pq));//���Բ�Ϊ��,�վͲ�Ӧ�õ���Pop
	if (pq->head->next == NULL)//ֻ��һ���ڵ�
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

QDateType QueueFront(Queue*pq)//ȡ��ͷ����
{
	assert(pq);
	assert(!QueueEmpty(pq));//���Բ�Ϊ��
	return pq->head->date;
}

QDateType QueueBack(Queue*pq)//ȡ��β����
{
	assert(pq);
	assert(!QueueEmpty(pq));//���Բ�Ϊ��
	return pq->tail->date;
}

bool QueueEmpty(Queue*pq)//�Ƿ�Ϊ��
{
	assert(pq);
	return pq->head == NULL;
}
int QueueSize(Queue*pq)//���ظ���
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
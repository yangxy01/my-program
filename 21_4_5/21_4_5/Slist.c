#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include"Slist.h"

void SListprint(SLTNode*plist)//��ӡ
{
	SLTNode*cur = plist;
	while (cur != NULL)
	{
		printf("%d ", cur->date);
		cur = cur->next;
	}
	printf("\n");
}

SLTNode*BuySLTNode(SLTDateType x)//�����½ڵ�
{
	SLTNode*node = (SLTNode*)malloc(sizeof(SLTNode));
	node->date = x;
	node->next=NULL;
	return node;
}

void SListPushBack(SLTNode**pplist, SLTDateType x)//β��
{
	SLTNode*newnode = BuySLTNode(x);//�ȴ������½ڵ�
	if (*pplist == NULL)//1.���ͷ�ڵ�Ϊ��
	{
		*pplist = newnode;
	}
	else//2.���ͷ�ڵ㲻Ϊ��
	{
		//������β��
		SLTNode*tail = *pplist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}
}

void SListPushFront(SLTNode**pplist, SLTDateType x)//ͷ��
{
	SLTNode*newnode = BuySLTNode(x);//�ȴ������½ڵ�
	newnode->next = *pplist;
	*pplist = newnode;
}

void SListPopBack(SLTNode**pplist)//βɾ
{
	if (*pplist == NULL)//1.����Ϊ��
	{
		return;
	}
	else if ((*pplist)->next == NULL)//2.ֻ��һ���ڵ�
	{
		free(*pplist);
		*pplist = NULL;
	}
	else//3.����ڵ�
	{
		SLTNode*prev = NULL;//ǰ��ָ��
		SLTNode*tail = *pplist;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
	
}

void SListPopFront(SLTNode**pplist)//ͷɾ
{
	if (*pplist == NULL)
	{
		return;
	}
	else
	{
		SLTNode*next = (*pplist)->next;
		free(*pplist);
		*pplist = next;
	}
}

SLTNode*SListFind(SLTNode*plist, SLTDateType x)//�������
{
	SLTNode*cur = plist;
	while (cur)
	{
		if (cur->date == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}
void SListInsertAfter(SLTNode*pos, SLTDateType x)//������
{
	assert(pos);
	SLTNode*newnode = BuySLTNode(x);
	newnode->next = pos->next;//ע�������д����˳��
	pos->next = newnode;
}

void SListEraseAfter(SLTNode*pos, SLTDateType x)//�����ɾ
{
	assert(pos);
	if (pos->next == NULL)
		return;
	else
	{
		SLTNode*next = pos->next;
		pos->next = next->next;
		free(next);
		next = NULL;
	}
}
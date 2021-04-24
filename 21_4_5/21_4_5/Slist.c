#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include"Slist.h"

void SListprint(SLTNode*plist)//打印
{
	SLTNode*cur = plist;
	while (cur != NULL)
	{
		printf("%d ", cur->date);
		cur = cur->next;
	}
	printf("\n");
}

SLTNode*BuySLTNode(SLTDateType x)//创建新节点
{
	SLTNode*node = (SLTNode*)malloc(sizeof(SLTNode));
	node->date = x;
	node->next=NULL;
	return node;
}

void SListPushBack(SLTNode**pplist, SLTDateType x)//尾插
{
	SLTNode*newnode = BuySLTNode(x);//先创建好新节点
	if (*pplist == NULL)//1.如果头节点为空
	{
		*pplist = newnode;
	}
	else//2.如果头节点不为空
	{
		//遍历找尾巴
		SLTNode*tail = *pplist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}
}

void SListPushFront(SLTNode**pplist, SLTDateType x)//头插
{
	SLTNode*newnode = BuySLTNode(x);//先创建好新节点
	newnode->next = *pplist;
	*pplist = newnode;
}

void SListPopBack(SLTNode**pplist)//尾删
{
	if (*pplist == NULL)//1.本身为空
	{
		return;
	}
	else if ((*pplist)->next == NULL)//2.只有一个节点
	{
		free(*pplist);
		*pplist = NULL;
	}
	else//3.多个节点
	{
		SLTNode*prev = NULL;//前驱指针
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

void SListPopFront(SLTNode**pplist)//头删
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

SLTNode*SListFind(SLTNode*plist, SLTDateType x)//链表查找
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
void SListInsertAfter(SLTNode*pos, SLTDateType x)//链表后插
{
	assert(pos);
	SLTNode*newnode = BuySLTNode(x);
	newnode->next = pos->next;//注意这两行代码的顺序
	pos->next = newnode;
}

void SListEraseAfter(SLTNode*pos, SLTDateType x)//链表后删
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
#define _CRT_SECURE_NO_WARNINGS 1
#include"DList.h"

ListNode*BuyListNode(LTDateType x)//创建新节点
{
	ListNode*node = (ListNode*)malloc(sizeof(ListNode));
	node->next = NULL;
	node->prev = NULL;
	node->date = x;
	return node;
}

void ListPrint(ListNode*phead)//打印函数
{
	ListNode*cur = phead->next;
	while (cur != phead)
	{
		printf("%d->", cur->date);
		cur = cur->next;
	}
	printf("\n");
}

ListNode* ListInit()//初始化
{
	ListNode*phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

void ListPushBack(ListNode*phead, LTDateType x)//尾插
{
	assert(phead);

	ListNode*tail = phead->prev;
	ListNode*newnode = BuyListNode(x);

	tail->next = newnode;
	newnode->next = phead;
	newnode->prev = tail;
	phead->prev = newnode;

	//等价于ListInsert(phead, 40);头前插入
}
void ListPushFront(ListNode*phead, LTDateType x)//头插
{
	assert(phead);

	ListNode*First = phead->next;
	ListNode*newnode = BuyListNode(x);
	phead->next = newnode;
	newnode->next = First;
	First->prev = newnode;
	newnode->prev = phead;

	//等价于ListInsert(phead->next, 40);头前插入
}
void ListPopBack(ListNode*phead)//尾删
{
	assert(phead);
	assert(phead->next!=phead);
	ListNode*tail = phead->prev;
	ListNode*tailprev = tail->prev;
	free(tail);
	phead->prev = tailprev;
	tailprev->next = phead;
	//等价于ListErase(phead->prev);
}
void ListPopFront(ListNode*phead)//头删
{
	assert(phead);
	assert(phead->next != phead);

	ListNode*del = phead->next;
	ListNode*next = del->next;
	free(del);
	phead->next = next;
	del->prev = phead;
	//等价于ListErase(phead->next);
}

ListNode*ListFind(ListNode*phead, LTDateType x)//查找函数
{
	assert(phead);
	ListNode*cur = phead->next;
	while (cur != phead)
	{
		if (cur->date == x)
			return cur;
		cur = cur->next;
	}
	return NULL;//找不到返回空
}

void ListInsert(ListNode*pos, LTDateType x)//插入函数(在pos前面插)
{
	assert(pos);
	ListNode*newnode = BuyListNode(x);
	ListNode*prev = pos->prev;

	prev->next = newnode;
	newnode->next = pos;
	pos->prev = newnode;
	newnode->prev = prev;
}
void ListErase(ListNode*pos)//删除函数
{
	assert(pos);
	ListNode*prev = pos->prev;
	ListNode*next = pos->next;
	prev->next = next;
	next->prev = prev;

	free(pos);
}
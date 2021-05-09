#define _CRT_SECURE_NO_WARNINGS 1
#include"DList.h"

ListNode*BuyListNode(LTDateType x)//�����½ڵ�
{
	ListNode*node = (ListNode*)malloc(sizeof(ListNode));
	node->next = NULL;
	node->prev = NULL;
	node->date = x;
	return node;
}

void ListPrint(ListNode*phead)//��ӡ����
{
	ListNode*cur = phead->next;
	while (cur != phead)
	{
		printf("%d->", cur->date);
		cur = cur->next;
	}
	printf("\n");
}

ListNode* ListInit()//��ʼ��
{
	ListNode*phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

void ListPushBack(ListNode*phead, LTDateType x)//β��
{
	assert(phead);

	ListNode*tail = phead->prev;
	ListNode*newnode = BuyListNode(x);

	tail->next = newnode;
	newnode->next = phead;
	newnode->prev = tail;
	phead->prev = newnode;

	//�ȼ���ListInsert(phead, 40);ͷǰ����
}
void ListPushFront(ListNode*phead, LTDateType x)//ͷ��
{
	assert(phead);

	ListNode*First = phead->next;
	ListNode*newnode = BuyListNode(x);
	phead->next = newnode;
	newnode->next = First;
	First->prev = newnode;
	newnode->prev = phead;

	//�ȼ���ListInsert(phead->next, 40);ͷǰ����
}
void ListPopBack(ListNode*phead)//βɾ
{
	assert(phead);
	assert(phead->next!=phead);
	ListNode*tail = phead->prev;
	ListNode*tailprev = tail->prev;
	free(tail);
	phead->prev = tailprev;
	tailprev->next = phead;
	//�ȼ���ListErase(phead->prev);
}
void ListPopFront(ListNode*phead)//ͷɾ
{
	assert(phead);
	assert(phead->next != phead);

	ListNode*del = phead->next;
	ListNode*next = del->next;
	free(del);
	phead->next = next;
	del->prev = phead;
	//�ȼ���ListErase(phead->next);
}

ListNode*ListFind(ListNode*phead, LTDateType x)//���Һ���
{
	assert(phead);
	ListNode*cur = phead->next;
	while (cur != phead)
	{
		if (cur->date == x)
			return cur;
		cur = cur->next;
	}
	return NULL;//�Ҳ������ؿ�
}

void ListInsert(ListNode*pos, LTDateType x)//���뺯��(��posǰ���)
{
	assert(pos);
	ListNode*newnode = BuyListNode(x);
	ListNode*prev = pos->prev;

	prev->next = newnode;
	newnode->next = pos;
	pos->prev = newnode;
	newnode->prev = prev;
}
void ListErase(ListNode*pos)//ɾ������
{
	assert(pos);
	ListNode*prev = pos->prev;
	ListNode*next = pos->next;
	prev->next = next;
	next->prev = prev;

	free(pos);
}
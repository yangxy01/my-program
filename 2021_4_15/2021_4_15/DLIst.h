#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int LTDateType;
typedef struct ListNode
{
	struct ListNode*next ;
	struct ListNode*prev ;
	LTDateType date;
}ListNode;

ListNode*BuyListNode(LTDateType x);//�����½ڵ�
void ListPrint(ListNode*phead);//��ӡ����

ListNode* ListInit();//��ʼ��
void ListPushBack(ListNode*phead, LTDateType x);//β��
void ListPushFront(ListNode*phead, LTDateType x);//ͷ��
void ListPopBack(ListNode*phead);//βɾ
void ListPopFront(ListNode*phead);//ͷɾ

ListNode*ListFind(ListNode*phead, LTDateType x);//���Һ���
void ListInsert(ListNode*phead, LTDateType x);//���뺯��
void ListErase(ListNode*pos);//ɾ������

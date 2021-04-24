#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int SLTDateType;

typedef struct SListNode
{
	SLTDateType date;
	struct SListNode*next;
}SLTNode;

void SListprint(SLTNode*plist);
SLTNode*BuySLTNode(SLTDateType x);//�����½ڵ�

void SListPushBack(SLTNode**pplist,SLTDateType x);//β��
void SListPushFront(SLTNode**pplist, SLTDateType x);//ͷ��

void SListPopBack(SLTNode**pplist);//βɾ
void SListPopFront(SLTNode**pplist);//ͷɾ

SLTNode*SListFind(SLTNode*plist, SLTDateType x);//�������

void SListInsertAfter(SLTNode*pos, SLTDateType x);//������
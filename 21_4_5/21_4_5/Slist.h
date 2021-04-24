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
SLTNode*BuySLTNode(SLTDateType x);//创建新节点

void SListPushBack(SLTNode**pplist,SLTDateType x);//尾插
void SListPushFront(SLTNode**pplist, SLTDateType x);//头插

void SListPopBack(SLTNode**pplist);//尾删
void SListPopFront(SLTNode**pplist);//头删

SLTNode*SListFind(SLTNode*plist, SLTDateType x);//链表查找

void SListInsertAfter(SLTNode*pos, SLTDateType x);//链表后插
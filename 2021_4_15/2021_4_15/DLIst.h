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

ListNode*BuyListNode(LTDateType x);//创建新节点
void ListPrint(ListNode*phead);//打印函数

ListNode* ListInit();//初始化
void ListPushBack(ListNode*phead, LTDateType x);//尾插
void ListPushFront(ListNode*phead, LTDateType x);//头插
void ListPopBack(ListNode*phead);//尾删
void ListPopFront(ListNode*phead);//头删

ListNode*ListFind(ListNode*phead, LTDateType x);//查找函数
void ListInsert(ListNode*phead, LTDateType x);//插入函数
void ListErase(ListNode*pos);//删除函数

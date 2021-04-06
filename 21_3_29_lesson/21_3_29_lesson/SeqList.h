#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SeqDateType;//定义类型，方便后期改

typedef struct SeqList
{
	SeqDateType* a;
	int size;//计算有多少个数据
	int capacity;//表示空间有多大
}SeqList;
//最常用的四个接口
void SeqListPushBack(SeqList* pq, SeqDateType x);//尾部插入
void SeqListPushFront(SeqList* pq, SeqDateType x);//头部插入
void SeqListPopBack(SeqList* pq);//尾部删除
void SeqListPopFront(SeqList* pq);//头部删除
//必备的两个接口
void SeqListInit(SeqList* pq);
void SeqListDeatory(SeqList* pq);

void SeqListPrint();//打印函数
int SeqListFind(SeqList*pq, SeqDateType x);//查找函数，返回下标
void SeqListInsert(SeqList*pq, int pos, SeqDateType x);//中间插入
void SeqListErase(SeqList*pq, int pos);//中间删除
void SeqListModify(SeqList*pq, int pos, SeqDateType x);//中间修改



////静态的数据表
//#define N 100
//struct SeqList
//{
//	int a[N];
//	int size;
//};
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>
#pragma once

typedef int QDateType;

typedef struct QueueNode//定义结构体
{
	struct QueueNode*next;
	QDateType date;
}QueueNode;

typedef struct Queue
{
	QueueNode*head;
	QueueNode*tail;
}Queue;

void QueueInit(Queue*pq);//初始化
void QueueDestory(Queue*pq);//销毁

void QueuePush(Queue*pq,QDateType x);//插入数据
void QueuePop(Queue*pq);//出数据

QDateType QueueFront(Queue*pq);//取队头数据
QDateType QueueBack(Queue*pq);//取队尾数据
bool QueueEmpty(Queue*pq);//是否为空
int QueueSize(Queue*pq);//返回个数

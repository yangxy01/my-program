#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>
#pragma once

typedef int QDateType;

typedef struct QueueNode//����ṹ��
{
	struct QueueNode*next;
	QDateType date;
}QueueNode;

typedef struct Queue
{
	QueueNode*head;
	QueueNode*tail;
}Queue;

void QueueInit(Queue*pq);//��ʼ��
void QueueDestory(Queue*pq);//����

void QueuePush(Queue*pq,QDateType x);//��������
void QueuePop(Queue*pq);//������

QDateType QueueFront(Queue*pq);//ȡ��ͷ����
QDateType QueueBack(Queue*pq);//ȡ��β����
bool QueueEmpty(Queue*pq);//�Ƿ�Ϊ��
int QueueSize(Queue*pq);//���ظ���

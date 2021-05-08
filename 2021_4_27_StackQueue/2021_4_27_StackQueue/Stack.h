#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>
#pragma once

typedef int STDateType;
struct Stack
{
	STDateType*a;
	int top;//ջ��
	int capacity;//��������������
};

typedef struct Stack Stack;

void StackInit(Stack*pst);
void StackDestory(Stack*pst);//����

void StackPush(Stack*pst, STDateType x);//��������
void StackPop(Stack*pst);//ɾ������

STDateType StackTop(Stack*pst);//����ջ������
bool StackEmpty(Stack*pst);//�ж��Ƿ�Ϊ��
int StackSize(Stack*pst);//�������ݸ���
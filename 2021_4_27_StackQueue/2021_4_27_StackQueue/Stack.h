#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>
#pragma once

typedef int STDateType;
struct Stack
{
	STDateType*a;
	int top;//栈顶
	int capacity;//容量，方便增容
};

typedef struct Stack Stack;

void StackInit(Stack*pst);
void StackDestory(Stack*pst);//销毁

void StackPush(Stack*pst, STDateType x);//插入数据
void StackPop(Stack*pst);//删除数据

STDateType StackTop(Stack*pst);//返回栈顶数据
bool StackEmpty(Stack*pst);//判断是否为空
int StackSize(Stack*pst);//返回数据个数
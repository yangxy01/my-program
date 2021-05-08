#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void StackInit(Stack*pst)
{
	assert(pst);
	//初始化四个空间方便后面增容
	pst->a = (STDateType*)malloc(sizeof(STDateType)* 4);
	pst->top = 0;
	pst->capacity = 4;
}

void StackDestory(Stack*pst)//销毁
{
	assert(pst);
	free(pst->a);
	pst->a = NULL;
	pst->top = 0;
	pst->capacity = 0;
}

void StackPush(Stack*pst, STDateType x)//插入数据
{
	assert(pst);
	if (pst->top == pst->capacity)//满容了要增容
	{
		STDateType*tmp = (STDateType*)realloc(pst->a,sizeof(STDateType)*pst->capacity * 2);
		if (tmp == NULL)//增容失败
		{
			printf("realloc fail\n");
			exit(-1);//结束程序
		}
		pst->a = tmp;
		pst->capacity *= 2;
	}

	pst->a[pst->top] = x;
	pst->top++;
}
void StackPop(Stack*pst)//删除数据
{
	assert(pst);
	assert(!StackEmpty(pst));//判断是否非空
	pst->top--;
}

STDateType StackTop(Stack*pst)//返回栈顶数据
{
	assert(pst);
	assert(!StackEmpty(pst));//判断是否非空
	return pst->a[pst->top - 1];
}

bool StackEmpty(Stack*pst)//判断是否为空
{
	assert(pst);
	if (pst->top == 0)
		return true;
	return false;
}
int StackSize(Stack*pst)//返回数据个数
{
	assert(pst);
	return pst->top;
}
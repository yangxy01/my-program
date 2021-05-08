#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void StackInit(Stack*pst)
{
	assert(pst);
	//��ʼ���ĸ��ռ䷽���������
	pst->a = (STDateType*)malloc(sizeof(STDateType)* 4);
	pst->top = 0;
	pst->capacity = 4;
}

void StackDestory(Stack*pst)//����
{
	assert(pst);
	free(pst->a);
	pst->a = NULL;
	pst->top = 0;
	pst->capacity = 0;
}

void StackPush(Stack*pst, STDateType x)//��������
{
	assert(pst);
	if (pst->top == pst->capacity)//������Ҫ����
	{
		STDateType*tmp = (STDateType*)realloc(pst->a,sizeof(STDateType)*pst->capacity * 2);
		if (tmp == NULL)//����ʧ��
		{
			printf("realloc fail\n");
			exit(-1);//��������
		}
		pst->a = tmp;
		pst->capacity *= 2;
	}

	pst->a[pst->top] = x;
	pst->top++;
}
void StackPop(Stack*pst)//ɾ������
{
	assert(pst);
	assert(!StackEmpty(pst));//�ж��Ƿ�ǿ�
	pst->top--;
}

STDateType StackTop(Stack*pst)//����ջ������
{
	assert(pst);
	assert(!StackEmpty(pst));//�ж��Ƿ�ǿ�
	return pst->a[pst->top - 1];
}

bool StackEmpty(Stack*pst)//�ж��Ƿ�Ϊ��
{
	assert(pst);
	if (pst->top == 0)
		return true;
	return false;
}
int StackSize(Stack*pst)//�������ݸ���
{
	assert(pst);
	return pst->top;
}
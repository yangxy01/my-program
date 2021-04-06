#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SeqDateType;//�������ͣ�������ڸ�

typedef struct SeqList
{
	SeqDateType* a;
	int size;//�����ж��ٸ�����
	int capacity;//��ʾ�ռ��ж��
}SeqList;
//��õ��ĸ��ӿ�
void SeqListPushBack(SeqList* pq, SeqDateType x);//β������
void SeqListPushFront(SeqList* pq, SeqDateType x);//ͷ������
void SeqListPopBack(SeqList* pq);//β��ɾ��
void SeqListPopFront(SeqList* pq);//ͷ��ɾ��
//�ر��������ӿ�
void SeqListInit(SeqList* pq);
void SeqListDeatory(SeqList* pq);

void SeqListPrint();//��ӡ����
int SeqListFind(SeqList*pq, SeqDateType x);//���Һ����������±�
void SeqListInsert(SeqList*pq, int pos, SeqDateType x);//�м����
void SeqListErase(SeqList*pq, int pos);//�м�ɾ��
void SeqListModify(SeqList*pq, int pos, SeqDateType x);//�м��޸�



////��̬�����ݱ�
//#define N 100
//struct SeqList
//{
//	int a[N];
//	int size;
//};
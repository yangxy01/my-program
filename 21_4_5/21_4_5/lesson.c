#define _CRT_SECURE_NO_WARNINGS 1

#include"Slist.h"

void TestSList1()
{
	SLTNode*plist = NULL;
	SListPushBack(&plist, 1);//β��
	SListPushBack(&plist, 2);//β��
	
	SListPushFront(&plist, -1);//ͷ��
	SListPushFront(&plist, -2);//ͷ��

	SListPopBack(&plist);//βɾ
	SListprint(plist);//��ӡ
	SListPopBack(&plist);//βɾ
	SListprint(plist);//��ӡ
	SListPopBack(&plist);//βɾ
	SListprint(plist);//��ӡ
	SListPopBack(&plist);//βɾ
	SListprint(plist);//��ӡ

	SListPushBack(&plist, 1);//β��
	SListPushBack(&plist, 2);//β��
	SListPopFront(&plist);//ͷɾ
	SListprint(plist);//��ӡ
}
void TestSList2()
{
	SLTNode*plist = NULL;
	SListPushBack(&plist, 1);//β��
	SListPushBack(&plist, 3);//β��

	SListPushFront(&plist, -1);//ͷ��
	SListPushFront(&plist, -2);//ͷ��

	SLTNode*pos = SListFind(plist, 1);//�������
	SListInsertAfter(pos, 2);//������
	SListprint(plist);//��ӡ
}
int main()
{
	//TestSList1();
	TestSList2();
	return 0;
}
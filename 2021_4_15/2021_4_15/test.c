#define _CRT_SECURE_NO_WARNINGS 1

#include"DList.h"

void TestList1()
{
	ListNode*plist = ListInit();//��ʼ��
	ListPushBack(plist, 1);//β��
	ListPushBack(plist, 2);//β��
	ListPushBack(plist, 3);//β��
	ListPushBack(plist, 4);//β��
	ListPrint(plist);//��ӡ

	ListPushFront(plist, 0);
	ListPrint(plist);//��ӡ

	ListPopBack(plist);//βɾ
	ListPrint(plist);//��ӡ

	ListPopFront(plist);//ͷɾ
	ListPrint(plist);//��ӡ

}

void TestList2()
{
	ListNode*plist = ListInit();//��ʼ��
	ListPushBack(plist, 1);//β��
	ListPushBack(plist, 2);//β��
	ListPushBack(plist, 3);//β��
	ListPushBack(plist, 4);//β��
	ListPushBack(plist, 5);//β��
	ListPushBack(plist, 6);//β��
	ListPrint(plist);//��ӡ

	ListNode*pos = ListFind(plist, 5);//�ò��뺯�����ò��Һ����ҵ�λ��
	if (pos)//����ҵ���
	{
		ListInsert(pos, 40);
	}
	ListPrint(plist);//��ӡ

	ListErase(pos);//ɾ��pos
	ListPrint(plist);//��ӡ
}

int main()
{
	TestList2();
	return 0;
}
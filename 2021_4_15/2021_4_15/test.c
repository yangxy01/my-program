#define _CRT_SECURE_NO_WARNINGS 1

#include"DList.h"

void TestList1()
{
	ListNode*plist = ListInit();//初始化
	ListPushBack(plist, 1);//尾插
	ListPushBack(plist, 2);//尾插
	ListPushBack(plist, 3);//尾插
	ListPushBack(plist, 4);//尾插
	ListPrint(plist);//打印

	ListPushFront(plist, 0);
	ListPrint(plist);//打印

	ListPopBack(plist);//尾删
	ListPrint(plist);//打印

	ListPopFront(plist);//头删
	ListPrint(plist);//打印

}

void TestList2()
{
	ListNode*plist = ListInit();//初始化
	ListPushBack(plist, 1);//尾插
	ListPushBack(plist, 2);//尾插
	ListPushBack(plist, 3);//尾插
	ListPushBack(plist, 4);//尾插
	ListPushBack(plist, 5);//尾插
	ListPushBack(plist, 6);//尾插
	ListPrint(plist);//打印

	ListNode*pos = ListFind(plist, 5);//用插入函数先用查找函数找到位置
	if (pos)//如果找到了
	{
		ListInsert(pos, 40);
	}
	ListPrint(plist);//打印

	ListErase(pos);//删除pos
	ListPrint(plist);//打印
}

int main()
{
	TestList2();
	return 0;
}
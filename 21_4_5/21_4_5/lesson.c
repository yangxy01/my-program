#define _CRT_SECURE_NO_WARNINGS 1

#include"Slist.h"

void TestSList1()
{
	SLTNode*plist = NULL;
	SListPushBack(&plist, 1);//Œ≤≤Â
	SListPushBack(&plist, 2);//Œ≤≤Â
	
	SListPushFront(&plist, -1);//Õ∑≤Â
	SListPushFront(&plist, -2);//Õ∑≤Â

	SListPopBack(&plist);//Œ≤…æ
	SListprint(plist);//¥Ú”°
	SListPopBack(&plist);//Œ≤…æ
	SListprint(plist);//¥Ú”°
	SListPopBack(&plist);//Œ≤…æ
	SListprint(plist);//¥Ú”°
	SListPopBack(&plist);//Œ≤…æ
	SListprint(plist);//¥Ú”°

	SListPushBack(&plist, 1);//Œ≤≤Â
	SListPushBack(&plist, 2);//Œ≤≤Â
	SListPopFront(&plist);//Õ∑…æ
	SListprint(plist);//¥Ú”°
}
void TestSList2()
{
	SLTNode*plist = NULL;
	SListPushBack(&plist, 1);//Œ≤≤Â
	SListPushBack(&plist, 3);//Œ≤≤Â

	SListPushFront(&plist, -1);//Õ∑≤Â
	SListPushFront(&plist, -2);//Õ∑≤Â

	SLTNode*pos = SListFind(plist, 1);//¡¥±Ì≤È’“
	SListInsertAfter(pos, 2);//¡¥±Ì∫Û≤Â
	SListprint(plist);//¥Ú”°
}
int main()
{
	//TestSList1();
	TestSList2();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void TestSeqList1()
{
	SeqList s;
	SeqListInit(&s);//录入值

	SeqListPushBack(&s, 1);//尾部插入
	SeqListPushBack(&s, 2);//尾部插入
	SeqListPushBack(&s, 3);//尾部插入
	SeqListPushBack(&s, 4);//尾部插入
	SeqListPushBack(&s, 5);//尾部插入
	//12345
	SeqListPushFront(&s, 0);//头部插入
	//012345
	SeqListPopBack(&s);//尾部删除
	//01234
	SeqListPopFront(&s);//头部删除
	//1234
	SeqListInsert(&s, 2, 99);//第二个位置插入99
	//129934
	SeqListErase(&s, 2);//中间删除

	SeqListModify(&s, 2, 10);//中间修改

	SeqListPrint(&s);//打印


	SeqListDeatory(&s);//销毁
}

void menu()
{
	printf("*********************\n");
	printf("1.头插数据 2.尾插数据\n");
	printf("3.尾删数据 4.头删数据\n");
	printf("*********************\n");
}
int main()
{
	//TestSeqList1();
	SeqList s;
	SeqListInit(&s);//录入值
	int option = 0;
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("请输入要插入的数字：");
			int x;
			scanf("%d", &x);
			SeqListPushFront(&s, x);//头部插入
			SeqListPrint(&s);//打印
			break;
		case 2:
			printf("请输入要插入的数字：");
			scanf("%d", &x);
			SeqListPushBack(&s, x);//尾部插入
			SeqListPrint(&s);//打印
			break;
		default:
			break;
		}
	} while (option != 0);
	SeqListDeatory(&s);//销毁
	return 0;
}
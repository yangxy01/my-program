#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void TestSeqList1()
{
	SeqList s;
	SeqListInit(&s);//¼��ֵ

	SeqListPushBack(&s, 1);//β������
	SeqListPushBack(&s, 2);//β������
	SeqListPushBack(&s, 3);//β������
	SeqListPushBack(&s, 4);//β������
	SeqListPushBack(&s, 5);//β������
	//12345
	SeqListPushFront(&s, 0);//ͷ������
	//012345
	SeqListPopBack(&s);//β��ɾ��
	//01234
	SeqListPopFront(&s);//ͷ��ɾ��
	//1234
	SeqListInsert(&s, 2, 99);//�ڶ���λ�ò���99
	//129934
	SeqListErase(&s, 2);//�м�ɾ��

	SeqListModify(&s, 2, 10);//�м��޸�

	SeqListPrint(&s);//��ӡ


	SeqListDeatory(&s);//����
}

void menu()
{
	printf("*********************\n");
	printf("1.ͷ������ 2.β������\n");
	printf("3.βɾ���� 4.ͷɾ����\n");
	printf("*********************\n");
}
int main()
{
	//TestSeqList1();
	SeqList s;
	SeqListInit(&s);//¼��ֵ
	int option = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("������Ҫ��������֣�");
			int x;
			scanf("%d", &x);
			SeqListPushFront(&s, x);//ͷ������
			SeqListPrint(&s);//��ӡ
			break;
		case 2:
			printf("������Ҫ��������֣�");
			scanf("%d", &x);
			SeqListPushBack(&s, x);//β������
			SeqListPrint(&s);//��ӡ
			break;
		default:
			break;
		}
	} while (option != 0);
	SeqListDeatory(&s);//����
	return 0;
}
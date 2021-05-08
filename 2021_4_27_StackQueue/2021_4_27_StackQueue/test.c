#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
#include"Queue.h"

void TestStack()
{
	Stack st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);

	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}
	printf("\n");
	StackDestory(&st);
}

void TestQueue()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	/*QueuePush(&q, 3);
	QueuePush(&q, 4);*/
	printf("%d ", QueueSize(&q));

	QueuePop(&q);
	//printf("%d ", QueueEmpty(&q));//0
	QueuePop(&q);
	//printf("%d ", QueueEmpty(&q));//1
	printf("%d ", QueueSize(&q));
	/*while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
*/
	QueueDestory(&q);
}


int main()
{
	//TestStack();
	TestQueue();
	return 0;
}
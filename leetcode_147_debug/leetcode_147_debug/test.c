#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct ListNode 
{
	int val;
	struct ListNode *next;
};

struct ListNode* insertionSortList(struct ListNode* head)
{
	if (head == NULL || head->next == NULL)
	return head;
	struct ListNode*cur = head->next;
	struct ListNode*sortHead = head;//先把头摘下来
	sortHead->next = NULL;

	while (cur)//循环直至cur为空，即处理了所有节点
	{
		//printf("555\n");
		struct ListNode*next = cur->next;
		if (cur->val <= sortHead->val)//单独对要改头的情况处理
		{
			cur->next = sortHead;
			sortHead = cur;
			cur = next;
			continue;
		}
		struct ListNode*front = sortHead;
		struct ListNode*newcur = sortHead->next;
		while (newcur)
		{
			if (cur->val <= newcur->val)
			{
				cur->next = newcur;
				front->next = cur;
				cur = next;
				break;
			}
			else
			{
				front = newcur;
				newcur = newcur->next;//往后一个节点比对
			}
		}
		if (newcur == NULL)//所有节点的值都比要插入的小
		{
			front->next = cur;
			cur->next = NULL;
			cur = next;
		}

	}
	return sortHead;
}

int main()
{
	struct ListNode n1;
	struct ListNode n2;
	struct ListNode n3;
	struct ListNode n4;
	struct ListNode*p1= &n1;
	struct ListNode*p2= &n2;
	struct ListNode*p3 = &n3;
	struct ListNode*p4 = &n4;

	n1.val = 4;
	n2.val = 2;
	n3.val = 1;
	n4.val = 3;
	n1.next = p2;
	n2.next = p3;
	n3.next = p4;
	p4->next = NULL;

	struct ListNode*cur = insertionSortList(p1);
	while (cur)
	{
		printf("%d->", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}
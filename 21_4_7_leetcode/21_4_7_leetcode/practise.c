#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//-----------206.反转链表-------------

//-----------思路一代码---------------
//struct ListNode* reverseList(struct ListNode* head)
//{
//	if (head == NULL || head->next == NULL)
//		return head;
//	else
//	{
//		struct ListNode*n1 = NULL;
//		struct ListNode*n2 = head;
//		struct ListNode*n3 = head->next;
//		while (n2)
//		{
//			n2->next = n1;
//
//			n1 = n2;
//			n2 = n3;
//			if (n3)
//				n3 = n3->next;
//		}
//		head = n1;
//	}
//
//	return head;
//}


////-----------思路二代码---------------
//struct ListNode* reverseList(struct ListNode* head)
//{
//	struct ListNode*cur = head;
//	struct ListNode*newhead = NULL;
//	struct ListNode*next = NULL;
//	while (cur)
//	{
//		next = cur->next;
//
//		cur->next = newhead;
//		newhead = cur;
//		cur = next;
//	}
//	return newhead;
//}
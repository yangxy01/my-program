#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class ListNode;
class Node
{
	int date;
	Node*next;
public:
	Node(){ date = 0; next = NULL; }
	friend class::ListNode;
};

class ListNode
{
	Node*head;
	Node*tail;
public:
	ListNode(){ head = new Node; tail = head; }
	ListNode(int*p, int n)
	{
		head = new Node; tail = head;//Í·½Úµã
		for (int i = 0; i < n; i++)
		{
			Node*pnode = new Node;
			pnode->date = p[i];
			tail->next = pnode;
			tail = pnode;
		}
	}
	~ListNode()
	{
		Node*cur = head->next;
		while (cur)
		{
			Node*p = cur;
			cur = cur->next;
			delete p;
		}
		delete head;
	}
	void deleteNode()
	{
		Node*cur = head->next;
		while (cur)
		{
			Node*p = cur->next;
			Node*prv = cur;
			while (p)
			{
				if (p->date == cur->date)
				{
					prv->next = p->next;
					delete p;
					p = prv->next;				
				}
				else
				{
					prv = p;
					p = p->next;
				}
			}
			cur = cur->next;
		}
	}
	void display()
	{
		Node*cur = head->next;
		while (cur)
		{
			cout << cur->date;
			if (cur->next == NULL)
				cout << endl;
			else
				cout << " ";
			cur = cur->next;
		}
		cout << endl;
	}
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int*arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		ListNode LN(arr, n);
		//LN.display();
		LN.deleteNode();
		LN.display();

		delete[]arr;
	}
	
	return 0;
}

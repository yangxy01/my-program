#include<iostream>
#include<vector>
using namespace std;


int findMinimum(int n, vector<int> left, vector<int> right)
{
	int maxl = left[0], int maxli=0;
	int low = 0;
	int count = 0;
	int i, j;
	for (i = 0; i < n; i++)
	{
		if (left[i] == 0)
			left[i] = -1;
		if (right[i] == 0)
			right[i] = -1;
	}
	while (1)
	{
		for (i = 0; i < n; i++)
		{
			if (left[i] > maxl)
			{
				maxli = i;
				maxl = left[i];
			}
		}
		left[maxli]--;


		if (1)
			break;
	}

}

int main()
{
	vector<int> left;
	vector<int> right;
	int n,x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		left.push_back(x);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		right.push_back(x);
	}
	int ret = findMinimum(n, left, right);
	return 0;
}
#include<iostream>
using namespace std;

int MaxLengthStr(int* arr, int pos, int n, int* rem)
{
	if (rem[pos])
		return rem[pos];
	int max = 0;
	for (int i = pos + 1; i < n; i++)
	{
		int ret = 0;
		if (arr[i] > arr[pos])
		{
			ret = MaxLengthStr(arr, i, n, rem);
			if (ret > max)
				max = ret;
		}
	}
	rem[pos] = max + 1;
	return rem[pos];
}

int main()
{
	int n;
	while (cin >> n)
	{
		int* arr = new int[n];
		int* rem = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			rem[i] = 0;
		}
		int max = 0, ret=0;
		for (int i = 0; i < n; i++)
		{
			ret = MaxLengthStr(arr, i, n, rem);
			if (ret > max)
				max = ret;
		}

		cout << max << endl;
		delete[]rem;
		delete[]arr;
	}
	return 0;
}
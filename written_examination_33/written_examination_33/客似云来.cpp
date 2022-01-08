#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int start, end;
	while (cin >> start >> end)
	{
		long long a[81] = { 0 };
		for (int i = 1; i <= 80; i++)
		{
			if (i == 1 || i == 2)
				a[i] = 1;
			else
				a[i] = a[i - 1] + a[i - 2];
		}
		long long sum = 0;
		for (int i = start; i <= end; i++)
			sum += a[i];
		cout << sum << endl;

	}
	return 0;
}


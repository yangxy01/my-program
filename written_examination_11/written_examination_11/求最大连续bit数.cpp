#include<iostream>
using namespace std;

int main()
{
	int n;
	int flag = 0, max = 0, count = 0;
	cin >> n;
	while (n )
	{
		if ((n & 0x01) == 1)
		{
			count++;
		}
		else
		{
			if (count > max)
				max = count;
			count = 0;
		}
		n = n >> 1;
		cout << n << endl;
	}
	if (count > max)
		max = count;
	cout << max << endl;
	return 0;
}
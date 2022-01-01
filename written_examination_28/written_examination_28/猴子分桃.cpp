#include<iostream>
using namespace std;

int main()
{
	/*int x;
	while (cin >> x)
	{
		int min = 0, count = 0, sum = 0;
		for (int i = 0; i < x-1; i++)
		{
			sum = sum * 5 + 4;
			count = count + sum % 5;
		}
		sum = sum * 5 + 1;
		count = count + sum - sum / 5;
		cout << sum <<" "<<count<< endl;
	}*/
	int x;
	cin >> x;
	while (x)
	{
		cout << x / 5<<" "<<x%5 << endl;
		x = x - x / 5 - x % 5 - 1;
	}
	return 0;
}
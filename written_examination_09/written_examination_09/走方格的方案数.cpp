#include<iostream>
using namespace std;
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		int product1 = 1, product2 = 1;
		int x = n+m;
		int y = n;
		for (int i = 0; i < n; i++)
		{
			product1 *= x;
			x--;
			product2 *= y;
			y--;
		}
		cout << product1 / product2 << endl;
	}
	return 0;
}
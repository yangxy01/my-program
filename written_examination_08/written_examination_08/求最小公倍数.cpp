#include<iostream>
using namespace std;

int main()
{
	int m, n, r;
	cin >> m >> n;
	int product = m * n;
	while (n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	cout << product/m << endl;
	return 0;
}
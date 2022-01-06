#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int isPrime(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return 0;
	return 1;
}

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> vec;
		cout << n << " = ";
		while (!isPrime(n))
		{
			for (int i = 2; i < n; i++)
			{
				if (n % i == 0 && isPrime(i))
				{
					vec.push_back(i);
					n /= i;
				}
			}
		}
		vec.push_back(n);
		sort(vec.begin(), vec.end());
		for (int i = 0; i < vec.size() - 1; i++)
			cout << vec[i] << " * ";
		cout << vec[vec.size() - 1] << endl;
	}
	return 0;
}
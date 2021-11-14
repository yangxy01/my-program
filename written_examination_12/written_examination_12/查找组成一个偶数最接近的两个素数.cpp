#include<iostream>
using namespace std;

int isPrime(int x)
{
	int flag = 1;
	for (int i = 2; i < x/2; i++)
	{
		if (x % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag)
		return 1;
	return 0;
}

int main()
{
	int m;
	for (m = 6; m < 101; m+=2)
	{
		int n = m / 2;
		int find = 0;
		int i, j;
		if (n % 2 == 1)
			i = n;
		else
			i = n - 1;
		for (; i >= 2; i -= 2)
		{
			if (isPrime(i) == 0)
				continue;
			for (j = 2 * n - i; j < m; j += 2)
			{
				if (i + j > m)
					break;
				if (isPrime(j) == 0)
					continue;
				else
				{
					find = 1;
					break;
				}
			}
			if (find)
				break;
		}
		cout <<m<<":"<< i << " " << j << endl;
	}
	/*int n = m / 2;
	int find = 0;
	int i, j;
	if (n % 2 == 1)
		i = n;
	else
		i = n - 1;
	for (; i > 2; i -= 2)
	{
		if (isPrime(i) == 0)
			continue;
		for (j = 2 * n - i; j < m; j += 2)
		{
			if (i + j > m)
				break;
			if (isPrime(j) == 0)
				continue;
			else
			{
				find = 1;
				break;
			}
		}
		if (find)
			break;
	}
	cout  << i << endl << j << endl;*/

	return 0;
}
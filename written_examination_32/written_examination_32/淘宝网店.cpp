#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int x)
{
	if (x == 1)
		return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return 0;
	return 1;
}
int isGap(int x)
{
	if ((x % 400 == 0) || (x % 100 != 0 && x % 4 == 0))
		return 1;
	return 0;
}

int main()
{
	int m1[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int m2[] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	int year1, month1, day1, year2, month2, day2;
	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
	{
		int sum;
		if (isPrime(month1))
			sum = 1;
		else
			sum = 2;
		int y = year1;
		int m = month1;
		int d = day1;
		while (y != year2 || m != month2 || d != day2)
		{
			d++;
			if (isGap(y))
			{
				if (d > m2[m])
				{
					d = 1;
					m++;
					if (m > 12)
					{
						y++;
						m = 1;
					}
				}
			}
			else
			{
				if (d > m1[m])
				{
					d = 1;
					m++;
					if (m > 12)
					{
						y++;
						m = 1;
					}
				}
			}
			if (isPrime(m))
				sum += 1;
			else
				sum += 2;
		}
		cout << sum << endl;
	}
	return 0;
}
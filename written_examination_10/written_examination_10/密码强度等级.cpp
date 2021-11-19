#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int score = 0;

	if (str.length() >= 8)
		score += 25;
	if (str.length() <= 4)
		score += 5;
	else
		score += 10;

	int noletter = 1, nonumber = 1;
	for (int i = 0; i < str.length(); i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			noletter = 0;
		if (str[i] >= '0' && str[i] <= '9')
			nonumber = 0;
	}

	return 0;
}
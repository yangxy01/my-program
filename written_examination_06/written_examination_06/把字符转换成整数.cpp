#include<iostream>
#include<string>
using namespace std;
int StrToInt(string str)
{
	long double x=0;
	int flag = 0;
	if (str[0] == '+' || str[0] == '-')
		str = str.substr(1);
	for (int i = 0; i < str.length(); i++)
		if (str[0] != '0')
			flag = 1;
	if (flag == 0)
		return 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[0] >= '0' && str[0] <= '9')
		{
			x *= 10;
			x += str[i] - '0';
		}
		else
			return 0;
	}
	return x;
}

int main()
{
	string str;
	cin >> str;
	cout << StrToInt(str) << endl;
	return 0;
}
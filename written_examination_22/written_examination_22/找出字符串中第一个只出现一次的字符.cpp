#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		int flag = 0;
		string used = "";
		for (int i = 0; i < str.length(); i++)
		{
			if (used.find(str[i]) == string::npos)
			{
				if (str.find(str[i], i+1) == string::npos)
				{
					cout << str[i] << endl;
					flag = 1;
					break;
				}
				used += str[i];
			}
		}
		if (flag == 0)
			cout << "-1" << endl;
	}
	return 0;
}
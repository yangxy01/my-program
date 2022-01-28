#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int flag = 1;
		for (auto e : s2)
		{
			auto pos = s1.find(e);
			if (pos == string::npos)
			{
				cout << "No" << endl;
				flag = 0;
				break;
			}
			else
			{
				s1[pos] = '0';
			}
		}
		if (flag)
			cout << "Yes" << endl;
	}
	return 0;
}
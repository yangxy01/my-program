#include<iostream>
#include<string>
#include<list>
using namespace std;

bool cmp(string&s1, string&s2)
{
	return s1 < s2;
}

int main()
{
	int n;
	while (cin >> n)
	{
		list<string> ls;
		string str;
		while (n--)
		{
			int flag = 1;
			cin >> str;
			for (auto it : ls)
			{
				if (str.find(it)!=string::npos)
				{
					ls.remove(it);
					break;
				}
				else if (it.find(str) != string::npos)
				{
					flag = 0;
					break;
				}
			}
			if (flag)
				ls.push_back(str);
		}
		ls.sort(cmp);
		for (auto it : ls)
		{
			cout << "mkdir -p " << it << endl;
		}
		cout << endl;
	}
	return 0;
}
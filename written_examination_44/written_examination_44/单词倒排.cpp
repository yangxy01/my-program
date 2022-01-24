#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		string word;
		stack<string>res;
		int flag = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
			{
				word += s[i];
				flag = 1;
			}
			else
			{
				if (flag)
				{
					res.push(word);
					flag = 0;
					word.clear();
				}
				else
					continue;
			}
		}
		res.push(word);
		while (res.size() > 1)
		{
			cout << res.top() << " ";
			res.pop();
		}
		cout << res.top() << endl;
		res.pop();
	}
	return 0;
}
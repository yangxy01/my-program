#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a = -2;
	cout << a % 4 << endl;
	/*string str1, str2;
	while (cin >> str1 >> str2)
	{
		if (str2.length() < str1.length())
		{
			string tmp = str1;
			str1 = str2;
			str2 = tmp;
		}
		string sub;
		int flag = 0;
		if (str2.find(str1) != string::npos)
			cout << str1;
		else
		{
			for (int i = 1; i < str1.length() - 1; i++)
			{
				for (int j = 0; j <= i; j++)
				{
					sub = str1.substr(j, str1.length() - i);
					if (str2.find(sub) != string::npos)
					{
						cout << sub << endl;
						flag = 1;
						break;
					}
				}
				if (flag)
					break;
			}
		}
	}*/
	
	return 0;
}
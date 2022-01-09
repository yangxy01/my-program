#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		getchar();
		int count = 0;
		vector<string> names;
		string name;
		for (int i = 0; i < n; i++)
		{
			getline(cin, name);
			if (name.find(",")!=string::npos || name.find(" ") != string::npos)
			{
				name = "\"" + name;
				name += "\"";
				names.push_back(name);
			}
			else
				names.push_back(name);
		}
		for (int i = 0; i < n - 1; i++)
			cout << names[i] << ", ";
		cout << names[n - 1] << endl;
	}
	return 0;
}
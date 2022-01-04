#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] >= 'A' && str[i] <= 'E')
				cout << char('V' + str[i] - 'A');
			else if(str[i] >= 'F' && str[i] <= 'Z')
				cout << char('A' + str[i] - 'F');
			else
				cout << str[i];
		}
		cout << endl;
	}
	return 0;
}
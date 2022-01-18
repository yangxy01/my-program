#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2;
	int len1, len2;
	while (cin >> s1 >> s2)
	{
		long sum = 0, num1 = 0, num2 = 0;
		string str1, str2;
		int l = 0;
		if (s1.length() > s2.length())
		{
			l = s1.length() - s2.length();
			for (int i = 0; i < l; i++)
				s2 += 'a' - 1;
		}
		else
		{
			l = s2.length() - s1.length();
			for (int i = 0; i < l; i++)
				s1 += 'a' - 1;
		}
		cin >> len1 >> len2;
		for (int len = len1; len <= len2; len++)
		{
			num1 = 0, num2 = 0;
			str1 = s1.substr(0, len);
			str2 = s2.substr(0, len);
			for (int i = 0; i < len; i++)
			{
				num1 = num1 * 26 + str1[i] - 'a' + 1;
				num2 = num2 * 26 + str2[i] - 'a' + 1;
			}
			sum = sum + num2 - num1;
		}
		sum--;
		cout << sum % 1000007 << endl;
	}
	return 0;
}



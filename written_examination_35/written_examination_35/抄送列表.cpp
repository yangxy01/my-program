#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string str, name, sub;
	while (getline(cin,str))
	{
		vector<string>names;
		int pos = 0;
		if (str.find("\"") == string::npos)//Ã»ÓÐÒýºÅ
		{
			while (str.find(',',pos) != string::npos)
			{
				sub = str.substr(pos, str.find(',', pos)-pos);
				pos = str.find(',', pos) +1;
				names.push_back(sub);
			}
			sub = str.substr(pos);
			names.push_back(sub);
		}
		else
		{
			pos = 0;
			int start = 0;
			int end = -1;
			while (str.find("\"", end+1) != string::npos)
			{
				start = str.find("\"", end + 1);
				end = str.find("\"", start + 1);
				while (pos < start && str.find_first_of(",", pos) != string::npos)
				{
					if (str.find_first_of(",", pos) > start)
						break;
					sub = str.substr(pos, str.find_first_of(",", pos) - pos);
					pos = str.find_first_of(",", pos) + 1;
					names.push_back(sub);
				}
				sub = str.substr(start+1, end - start-1);
				names.push_back(sub);
				pos = end + 2;
			}
			if (pos < str.length())
			{
				while (str.find(',', pos) != string::npos)
				{
					sub = str.substr(pos, str.find(',', pos) - pos);
					pos = str.find(',', pos) + 1;
					names.push_back(sub);
				}
				sub = str.substr(pos);
				names.push_back(sub);
			}
		}
		getline(cin, name);
		int flag = 1;
		for (int i = 0; i < names.size(); i++)
		{
			if (names[i] == name)
			{
				cout << "Ignore" << endl;
				flag = 0;
				break;
			}
		}
		if(flag!=0)
			cout << "Important!" << endl;
	}
	return 0;
}
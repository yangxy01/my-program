//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	vector<string> vec;
//	string str;
//	while (t--)
//	{
//		cin >> str;
//		vec.push_back(str);
//	}
//	int lenflag = 1;
//	int flag = 1;
//	for (auto it = vec.begin(); it < vec.end() -1; it++)
//	{
//		if ((*it).length() > (*(it + 1)).length())
//		{
//			lenflag = 0;
//		}
//	}
//	for (auto it = vec.begin(); it < vec.end() - 1; it++)
//	{
//		if ((*it) > *(it + 1))
//		{
//			flag = 0;
//		}
//	}
//	if (flag)
//	{
//		if (lenflag)
//			cout << "both" << endl;
//		else
//			cout << "lexicographically" << endl;
//	}
//	else
//	{
//		if (lenflag)
//			cout << "lengths" << endl;
//		else
//			cout << "none" << endl;
//	}
//	/*string s1 = "ab";
//	string s2 = "b";
//	if (s1 < s2)
//		cout << s1<< "<"<< s2 << endl;
//	else if (s1 == s2)
//		cout << s1 << "=" << s2 << endl;
//	else
//		cout << s1 << ">" << s2 << endl;*/
//
//	return 0;
//}
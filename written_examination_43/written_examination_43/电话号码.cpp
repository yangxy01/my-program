//#include<iostream>
//#include<string>
//#include<set>
//using namespace std;
//
//string Converter(const string& s)
//{
//	string ret;
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (s[i] == '-')continue;
//		if (s[i] >= '0' && s[i] <= '9')
//			ret.push_back(s[i]);
//		else if (s[i] >= 'A' && s[i] <= 'C')
//			ret.push_back(2 + '0');
//		else if (s[i] >= 'D' && s[i] <= 'F')
//			ret.push_back(3 + '0');
//		else if (s[i] >= 'G' && s[i] <= 'I')
//			ret.push_back(4 + '0');
//		else if (s[i] >= 'J' && s[i] <= 'L')
//			ret.push_back(5 + '0');
//		else if (s[i] >= 'M' && s[i] <= 'O')
//			ret.push_back(6 + '0');
//		else if (s[i] >= 'P' && s[i] <= 'S')
//			ret.push_back(7 + '0');
//		else if (s[i] >= 'T' && s[i] <= 'V')
//			ret.push_back(8 + '0');
//		else if (s[i] >= 'W' && s[i] <= 'Z')
//			ret.push_back(9 + '0');
//	}
//	ret.insert(3, "-");
//	return ret;
//}
//
//class comp
//{
//public:
//	bool operator()( const string& s1, const string& s2) const
//	{
//		if (s1 < s2)
//			return true;
//		return false;
//	}
//};
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		set<string,comp> ans;
//		while (n--)
//		{
//			string s,ret;
//			cin >> s;
//			ans.insert(Converter(s));
//		}
//		for (auto str : ans)
//		{
//			cout << str << endl;
//		}
//		cout << endl;
//
//	}
//	return 0;
//}
//#include<iostream>
//#include<string>
//#include<list>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int maxsize = 0;
//		char no;
//		string oper;
//		list<char> ls;
//		while (n--)
//		{
//			cin >> no >> oper;
//			if (oper == "connect")
//			{
//				ls.push_back(no);
//				if (ls.size() > maxsize)
//					maxsize = ls.size();
//			}
//			else
//			{
//				ls.remove(no);
//			}
//		}
//		cout << maxsize << endl;
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//long Disarrange(long n)
//{
//	if (n == 1)
//		return 0;
//	else if (n == 2)
//		return 1;
//	else
//		return (n-1) * (Disarrange(n - 2) + Disarrange(n - 1));
//}
//
//int main()
//{
//	long n;
//	while (cin >> n)
//	{
//		long ret = Disarrange(n);
//		cout << ret << endl;
//	}
//	return 0;
//}
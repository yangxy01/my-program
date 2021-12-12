//#include<iostream>
//using namespace std;
//
//int Divisor(int m,int n)
//{
//	int r = 0;
//	while (n)
//	{
//		r = m % n;
//		m = n; 
//		n = r;
//	}
//	return m;
//}
//int main()
//{
//	int n, a, x;
//	while (cin >> n >> a)
//	{
//		while (n--)
//		{
//			cin >> x;
//			if (x <= a)
//				a += x;
//			else
//				a += Divisor(x, a);
//		}
//		cout << a;
//	}
//	return 0;
//}
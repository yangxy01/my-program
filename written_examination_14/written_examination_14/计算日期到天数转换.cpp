//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int m1[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int m2[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int y, m, d;
//	int sum = 0;
//	cin >> y >> m >> d;
//	if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
//	{
//		for (int i = 0; i < m - 1; i++)
//			sum += m1[i];
//		sum += d;
//		cout << sum << endl;
//	}
//	else
//	{
//		for (int i = 0; i < m - 1; i++)
//			sum += m2[i];
//		sum += d;
//		cout << sum << endl;
//	}
//	return 0;
//}
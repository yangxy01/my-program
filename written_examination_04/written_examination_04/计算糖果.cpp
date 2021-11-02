//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int flag = 0;
//	int A, B, C;
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	for (A = -30; A <= 30; A++)
//	{
//		for (B = -30; B <= 30; B++)
//		{
//			for (C = -30; C <= 30; C++)
//			{
//				if (A - B == a && B - C == b && A + B == c && B + C == d)
//				{
//					flag = 1;
//					break;
//				}
//			}
//			if (flag)
//				break;
//		}
//		if (flag)
//			break;
//	}
//	if (flag)
//	{
//		cout << A << " " << B << " " << C << endl;
//	}
//	else
//		cout << "No" << endl;
//	return 0;
//}
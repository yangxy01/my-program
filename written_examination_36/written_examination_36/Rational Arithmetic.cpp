//#include<iostream>
//using namespace std;
//
//long minnum(long m, long n)
//{
//	if (m == 0)
//		return 0;
//	long r;
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
//	long a1, b1, a2, b2;
//	char ch;
//	while (cin >> a1 >>ch>> b1 >> a2>>ch >> b2)
//	{
//		long min = minnum(b1, b2);
//		long max = b1 * b2 / min;
//		long multiple = max / b1;
//		a1 *= multiple;
//		b1 = max;
//		multiple = max / b2;
//		a2 *= multiple;
//		b2 = max;
//		long suma = a1 + a2;
//		if (a1 != 0)
//		{
//			long min1 = minnum(a1, b1);
//			cout << a1 / b1 << " " << a1 % b1 << "//" << b1 / min1 << " + ";
//		}
//		else
//			cout << 0 << " + ";
//		if (a2 != 0)
//		{
//			long min2 = minnum(a2, b2);
//			cout << a2 / b2 << " " << a2 % b2 << "//" << b2 / min2 << " = ";
//		}
//		else
//			cout << 0 << " = ";
//		if (suma != 0)
//		{
//			long min3 = minnum(suma, b2);
//			cout << suma / b2 << " " << suma % b2 << "//" << b2 / min3 <<endl;
//		}
//		else
//			cout << 0 << endl;
//
//	}
//	return 0;
//}
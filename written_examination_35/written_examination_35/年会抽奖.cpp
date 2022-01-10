//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		long long arr[21] = { 0 };
//		long long sum = 0;
//		arr[1] = 0;
//		arr[2] = 1;
//		for (long long i = 3; i <= 20; i++)
//		{
//			arr[i] = (i - 1) * (arr[i - 2] + arr[i - 1]);
//		}
//		double x;
//		if (n == 1)
//			x = 0;
//		else if (n == 2)
//			x = 0.5;
//		else
//		{
//			sum = 1;
//			for (int i = 1; i <= n; i++)
//				sum *= i;
//			x = arr[n]*1.0 / sum;
//		}
//		x *= 100;
//		printf("%.2lf", x);
//		cout << "%" << endl;
//	}
//	return 0;
//}
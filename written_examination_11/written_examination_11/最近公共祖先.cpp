//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	int layerA = 0, layerB = 0;
//	int numA = 1, numB = 1;
//	cin >> a >> b;
//	if (a == 1 || b == 1)
//		cout << 1 << endl;
//	while (numA <= a)
//	{
//		numA *= 2;
//		layerA++;
//	}
//	while (numB <= b)
//	{
//		numB *= 2;
//		layerB++;
//	}
//	while (layerA != layerB)
//	{
//		if (layerA > layerB)
//		{
//			a /= 2;
//			layerA--;
//		}
//		else if (layerA < layerB)
//		{
//			b /= 2;
//			layerB--;
//		}
//	}
//	if (a == b)
//		cout << a << endl;
//	else
//	{
//		while ((a / 2) != (b / 2))
//		{
//			a /= 2;
//			b /= 2;
//		}
//		cout << a/2 << endl;
//	}
//	return 0;
//}
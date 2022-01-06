//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a1[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int a2[] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int year;
//	while (cin >> year)
//	{
//		int start = 6;
//		int days = 0,count=0;
//		for (int i = 2000; i < year; i++)
//		{
//			days += 365;
//			count++;
//			if (count == 4)
//			{
//				count = 0;
//				days++;
//			}
//		}
//		start += days;
//		start %= 7;
//		cout << year << "-01-01" << endl;
//		count = 0;
//		if (start == 1)
//			count++;
//		int newstart = start;
//		for (int i = 1; i < a1[1]; i++)
//		{
//			newstart++;
//			if (newstart % 7 == 1)
//				count++;
//			if (count == 3)
//			{
//				cout<< year << "-01-" ;
//				printf("%02d\n", i);
//				break;
//			}
//		}
//		start += a1[1];
//		start %= 7;
//		count = 0;
//		if (start == 1)
//			count++;
//		newstart = start;
//		for (int i = 1; i < a1[2]; i++)
//		{
//			newstart++;
//			if (newstart % 7 == 1)
//				count++;
//			if (count == 3)
//			{
//				cout << year << "-02-";
//				printf("%02d\n", i);
//				break;
//			}
//		}
//		start = start+a1[2] + a1[3] + a1[4];
//		start %= 7;
//		count = 0;
//		if (start == 1)
//			count++;
//		newstart = start;
//		for (int i = 1; i < a1[2]; i++)
//		{
//			newstart++;
//			if (newstart % 7 == 1)
//				count++;
//			if (count == 3)
//			{
//				cout << year << "-02-";
//				printf("%02d\n", i);
//				break;
//			}
//		}
//	}
//}
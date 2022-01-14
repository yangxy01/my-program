//#include<iostream>
//using namespace std;
//void Show(char** room, int m, int n)
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout<< room[i][j];
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//void Traverse(char** room, int i, int j, int& count, int m, int n)
//{
//	if (room[i][j] == '.' || room[i][j] == '@')
//	{
//		count++;
//		room[i][j] = '#';
//		
//	}
//	else
//		return;
//
//	if (i - 1 >= 0)//ио
//		Traverse(room, i - 1, j, count, m, n);
//	if (i + 1 < m)//об
//		Traverse(room, i + 1, j, count, m, n);
//	if (j - 1 >= 0)//вС
//		Traverse(room, i, j - 1, count, m, n);
//	if (j + 1 < n)//ср
//		Traverse(room, i, j + 1, count, m, n);
//
//}
//
//int main()
//{
//	int m, n, x, y;
//	while (cin >> m >> n)
//	{
//		int count = 0;
//		char** room = new char* [m];
//		for (int i = 0; i < m; i++)
//			room[i] = new char[n];
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cin >> room[i][j];
//				if (room[i][j] == '@')
//				{
//					x = i;
//					y = j;
//				}
//			}
//		}
//
//		Traverse(room, x, y, count, m, n);
//		cout << count << endl;
//		for (int i = 0; i < m; i++)
//			delete[]room[i];
//		delete[]room;
//	}
//	return 0;
//}
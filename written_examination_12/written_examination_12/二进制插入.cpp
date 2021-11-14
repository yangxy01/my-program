//#include<iostream>
//#include<stack>
//using namespace std;
//
//void show(int n)
//{
//	stack<int> st;
//	while (n)
//	{
//		st.push(n % 2);
//		n /= 2;
//	}
//	while (!st.empty())
//	{
//		cout << st.top();
//		st.pop();
//	}
//	cout << endl;
//}
//
//int binInsert(int n, int m, int j, int i)
//{
//	int x = 0;
//	int num = j - i + 1;
//	while (num--)
//	{
//		x = m % 2;
//		m /= 2;
//		n = n | (x << i);
//		i++;
//	}
//	return n;
//}
//
//
//int main()
//{
//	int i, j, m, n;
//	cin >> n >> m >> i >> j;
//	cout << binInsert(n, m, j, i) << endl;;
//	return 0;
//}
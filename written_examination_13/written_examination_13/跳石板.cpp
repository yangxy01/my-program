//#include<iostream>
//#include<string>
//#include<queue>
//#include<stack>
//#include<vector>
//#include<list>
//using namespace std;
//
//stack<int> Divisor(int n)
//{
//	stack<int> st;
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			st.push(i);
//	}
//	return st;
//}
//
//void DFSuntil(int n,int M, queue<int>&path)
//{
//	stack<int> st = Divisor(n);
//	while (!st.empty())
//	{
//		int now = n + st.top();
//		if (now == M)
//		{
//			path.push(st.top());
//			return;
//		}
//		if(now < M)
//		DFSuntil(now, M, path);
//		if (!path.empty())
//		{
//			path.push(st.top());
//			return;
//		}
//		st.pop();
//	}
//	return;
//}
//
//int main()
//{
//	queue<int> path;
//	int N, M;
//	cin >> N >> M;
//	if (N == M)
//	{
//		cout << "-1" << endl;
//	}
//	else
//	{
//		DFSuntil(N, M, path);
//		if (path.empty())
//			cout << "-1" << endl;
//		else
//			cout << path.size() << endl;
//	}
//
//	return 0;
//}
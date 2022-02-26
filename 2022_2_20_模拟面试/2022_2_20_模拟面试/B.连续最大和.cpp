//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> vec(n, 0);
//	vector<int> ans(n, 0);
//	for (int i = 0; i < n; i++)
//		cin >> vec[i];
//	ans[0] = vec[0];
//	for (int i = 1; i < n; i++)
//	{
//		ans[i] = max(ans[i - 1] + vec[i], vec[i]);
//	}
//	int maxnum = ans[0];
//	for (int i = 1; i < n; i++)
//	{
//		maxnum = max(ans[i], maxnum);
//	}
//	cout << maxnum << endl;
//	return 0;
//}
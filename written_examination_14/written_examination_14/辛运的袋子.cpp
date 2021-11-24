#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,x;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		vec.push_back(x);
	}
	return 0;
}
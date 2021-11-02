#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int M, N, x;
	stack<char> st;
	cin >> M >> N;
	while (M)
	{
		x = M % N;
		if (x >= 10)
			st.push('A' + x - 10);
		else
			st.push('0' + x );
		M /= N;
	}
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}
	return 0;
}
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		string exp;
		stack<int>st;
		for (int i = 0; i < n; i++)
		{
			cin >> exp;
			if (exp[0] >= '0' && exp[0] <= '9')
			{
				int num = 0;
				for (int j = 0; j < exp.length(); j++)
					num = num * 10 + exp[j] - '0';
				st.push(num);
			}
			else
			{
				int b = st.top();
				st.pop();
				int a = st.top();
				st.pop();
				int ret = 0;
				if (exp[0] == '+')
				{
					ret = a + b;
					st.push(ret);
				}
				else if (exp[0] == '-')
				{
					ret = a - b;
					st.push(ret);
				}
				else if (exp[0] == '*')
				{
					ret = a * b;
					st.push(ret);
				}
				else if (exp[0] == '/')
				{
					ret = a / b;
					st.push(ret);
				}
			}
		}
		cout << st.top() << endl;
	}
	return 0;
}
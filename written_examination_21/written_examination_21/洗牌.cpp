#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int T,x;
	cin >> T;
	while (T--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> pair1;
		vector<int> pair2(2*n);
		for (int i = 0; i < 2 * n; i++)
		{
			cin >> x;
			pair1.push_back(x);
		}
		
		while (k>0)
		{
			for (int i = 0, j = 0; i < n; i++,j+=2)
			{
				pair2[j] = pair1[i];
				pair2[j + 1] = pair1[n+ i];
			}
			pair1 = pair2;
			k--;
		}
		for (int i = 0; i < 2 * n; i++)
			cout << pair2[i] << " ";
		cout << endl;
	}
	return 0;
}
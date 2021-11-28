#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> rabs;
		rabs.push_back(1);
		while (rabs[0] < n)
		{
			for (int i = 0; i < rabs.size(); i++)
			{
				rabs[i]++;
			}
			for (int i = 0; i < rabs.size(); i++)
			{
				if (rabs[i] >= 3)
					rabs.push_back(1);
			}
		}
		cout << rabs.size() << endl;
	}
	return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, x;
	cin >> n;
	int max , count = 0, m = n;

	vector<int> vec;
	while (m--)
	{
		cin >> x;
		vec.push_back(x);
	}
	max = vec[0];
	int j = 0;
	for (int num = 1; num < vec.size(); num++)
	{
		
		for (int i = 0; i < num + 1; i++)
		{
			count = 0;
			for (j = i; j < vec.size()  - num + i; j++)
			{
				count += vec[j];
			}
			if (count > max)
			{
				max = count;
			}
		}	
	}
	cout << max << endl;
	

	return 0;
}

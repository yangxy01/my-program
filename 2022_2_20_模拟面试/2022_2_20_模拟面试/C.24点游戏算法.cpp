#include<iostream>
#include<vector>
using namespace std;

void reduce(int num, vector<int> vec, bool& state)
{
	if (state == true)
		return;
	if (num == 1)
	{
		if (vec[0] == 24)
		{
			state = true;
		}
		return;
	}
	vector<int> v(num, 0);
	for (int i = 0; i < num; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			int count = 1;
			for (int k = 0; k < num; k++)
			{
				if (k != i && k != j)
				{
					v[count] = vec[k];
					count++;
				}
			}
			num--;
			v[0] = vec[i] * vec[j];
			reduce(num, v, state);

			v[0] = vec[i] + vec[j];
			reduce(num, v, state);

			v[0] = vec[i] - vec[j];
			reduce(num, v, state);

			v[0] = vec[i] / vec[j];
			reduce(num, v, state);
		}
	}
}

int main()
{
	int num = 4;
	vector<int> vec(num, 0);
	for (int i = 0; i < num; i++)
		cin >> vec[i];
	bool state = false;
	reduce(num, vec, state);
	if (state)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}
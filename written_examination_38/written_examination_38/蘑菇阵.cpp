#include<iostream>
using namespace std;
void Show(char** room, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << room[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void Traverse(char** room, int i, int j, double& sum, double cum, int m, int n)
{
	if (i==m-1&&j==n-1)
	{
		sum += cum;
		return;
	}


	if (i + 1 < m && room[i + 1][j] != '@')//об
	{
		if(j + 1 == n)
			Traverse(room, i + 1, j , sum, cum ,m, n);
		else
			Traverse(room, i + 1, j, sum, cum*0.5, m, n);
	}

	if (j + 1 < n && room[i][j + 1] != '@')//ср
	{
		if (i + 1 == m)
			Traverse(room, i , j + 1, sum, cum, m, n);
		else
			Traverse(room, i, j + 1, sum, cum * 0.5, m, n);
	}
	return;
}

int main()
{
	int m, n, k, x, y;
	while (cin >> m >> n)
	{
		double sum = 0,cum=1;
		char** room = new char* [m];
		for (int i = 0; i < m; i++)
			room[i] = new char[n];
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				room[i][j]='.';
			}
		}
		cin >> k;
		while (k--)
		{
			cin >> x >> y;
			room[x - 1][y - 1] = '@';
		}
		if(room[0][0]=='@')
			printf("%.2lf\n", sum);
		else
		{
			Traverse(room, 0, 0, sum, cum, m, n);
			printf("%.2lf\n", sum);
		}
		
		
		for (int i = 0; i < m; i++)
			delete[]room[i];
		delete[]room;
	}
	return 0;
}
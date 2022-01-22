#include<iostream>
#include<string>
#include<queue>
#include <utility>
#include<stack>
using namespace std;

int isOK(int x, int y, int visited[][10], string* map)
{
	if (x <= 0 )
		return 0;
	if (y <= 0 || y >= 9)
		return 0;
	if (map[x][y] == '#')
		return 0;
	if (visited[x][y] != 0)
		return 0;
	return 1;
}

int main()
{
	string map[10];
	while (getline(cin, map[0]))
	{
		for (int i = 1; i < 10; i++)
		{
			getline(cin, map[i]);
		}
		/*for (int i = 0; i < 10; i++)
		{
			cout << map[i] << endl;
		}
		cout << endl;*/
		int visited[10][10] = { 0 };
		queue<pair<int, int>> open;
		stack<pair<int, int>> path;
		open.push(make_pair(0, 1));
		path.push(make_pair(0, 1));
		visited[0][1] = 0;
		while (open.size() > 0)
		{
			pair<int, int> p = open.front();
			open.pop();
			int x = p.first;
			int y = p.second;
			if (x == 9 && y == 8)
			{
				cout << visited[x][y] << endl;
				break;
			}
			if (isOK(x - 1, y, visited, map))//ио
			{
				open.push(make_pair(x - 1, y));
				visited[x - 1][y] = visited[x][y] + 1;
			}
			if (isOK(x + 1, y, visited, map))//об
			{
				open.push(make_pair(x + 1, y));
				visited[x + 1][y] = visited[x][y] + 1;
			}
			if (isOK(x, y - 1, visited, map))//вС
			{
				open.push(make_pair(x, y - 1));
				visited[x][y - 1] = visited[x][y] + 1;
			}
			if (isOK(x, y + 1, visited, map))//ср
			{
				open.push(make_pair(x, y + 1));
				visited[x][y + 1] = visited[x][y] + 1;
			}	
			
		}
	}
	return 0;
}
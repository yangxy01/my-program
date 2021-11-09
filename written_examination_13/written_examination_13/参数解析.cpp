#include<iostream>
#include<string>
#include<queue>
using namespace std;
//hello world "yes today" moon
int main()
{
	string command;
	string mark = "\"";
	getline(cin,command);
	queue<string> para;
	int pos1 = 0, pos2 = 0;

	queue<string> que;
	while (command.find(mark) != string::npos && command.find(" ") != string::npos)
	{
		if (command.find(" ") < command.find(mark))
		{
			pos2 = command.find(" ");
		}
		else
		{
			pos1 = command.find(mark);
			pos2 = command.find(mark, pos1+1);
		}
		string sub = command.substr(pos1+1, pos2 - pos1);
		command = command.erase(pos1, pos2 - pos1 + 1);
		cout << command << endl;
		que.push(sub);
	}
	while (command.find(" ") != string::npos)
	{
		pos2 = command.find(" ");
		string sub = command.substr(pos1, pos2 - pos1);
		command = command.erase(pos1, pos2 - pos1 +1 );
		cout << command << endl;
		que.push(sub);
	}
	while (command.find(mark) != string::npos)
	{
		pos2 = command.find(mark);
		string sub = command.substr(pos1, pos2 - pos1);
		command = command.erase(pos1, pos2 - pos1);
		cout << command << endl;
		que.push(sub);
	}
	que.push(command);
	cout << que.size() << endl;
	while (!que.empty())
	{
		cout << que.front() << endl;
		que.pop();
	}
	return 0;
}
//hello world yes
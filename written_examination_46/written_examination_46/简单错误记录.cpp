
//******************************网上参考代码，模仿学习******************************
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct item
{
	string filename;
	int line;
	int cnt;

	bool operator== (const item& item)
	{
		if (item.filename == filename && item.line == line)
			return true;
		return false;
	}
};

// 获取净文件名的最后16个字符
string get_filename(string filename)
{
	string ret;
	int index = filename.find_last_of('\\', filename.size() - 1);
	if (index == -1)
		ret = filename;
	else
		ret = filename.substr(index + 1);

	if (ret.size() > 16)
		ret = ret.substr(ret.size() - 16);

	return ret;
}

int main(void)
{
	string filename;
	int line;
	vector<item> log;
	while (cin >> filename >> line)
	{
		filename = get_filename(filename);
		vector<item>::iterator it;
		item tmp = { filename, line, 1 };
		if ((it = std::find(log.begin(), log.end(), tmp)) != log.end())
			(*it).cnt++;
		else
			log.push_back(tmp);
	}

	int start_index = log.size() - 8;
	if (start_index < 0) start_index = 0;
	for (int i = start_index; i < log.size(); ++i)
		cout << log[i].filename << " " << log[i].line << " " << log[i].cnt << endl;
	system("pause");
	return 0;
}
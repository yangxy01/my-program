#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<string> result;
    int max = 0, count = 0, end = 0, i;
    int is_num = 0;
    for (i = 0; i < str.length(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            is_num = 1;
        else
            is_num = 0;
        if (is_num)
        {
            count++;
        }
        else
        {
            if (count == max)
            {
                max = count;
                end = i;
                string s = str.substr(i - max, max);
                result.push_back(s);
            }
            else if (count > max)
            {
                while (result.size() > 0)
                    result.pop_back();
                max = count;
                end = i;
                string s = str.substr(i - max, max);
                result.push_back(s);
            }
            count = 0;
        }
    }
    if (is_num)
    {
        if (count == max)
        {
            max = count;
            end = i;
            string s = str.substr(i - max, max);
            result.push_back(s);
        }
        else if (count > max)
        {
            while (result.size() > 0)
                result.pop_back();
            max = count;
            end = i;
            string s = str.substr(i - max, max);
            result.push_back(s);
        }
    }
    for (auto it : result)
        cout << it << endl;
    return 0;
}
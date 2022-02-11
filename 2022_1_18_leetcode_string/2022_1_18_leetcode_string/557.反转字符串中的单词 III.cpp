#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        int start = 0;
        while (start < s.length() && s.find(" ", start) != string::npos)
        {
            int end = s.find(" ", start);
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
        }
        reverse(s.begin() + start, s.end());
        return s;
    }
};

int main()
{
    Solution S;
    string s = "Let's contest";
    S.reverseWords(s);
    //auto it = s.begin() + 5;
    return 0;
}
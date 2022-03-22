#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s)
    {
        vector<int> letters(26, 0);
        int i = 0;
        for (i = 0; i < s.length() / 2; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                letters[s[i] - 'a']++;
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                letters[s[i] - 'A']++;
        }
        for (; i < s.length(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                letters[s[i] - 'a']--;
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                letters[s[i] - 'A']--;
        }
        for (int i = 0; i < 26; i++)
            if (letters[i] != 0)
                return false;
        return true;
    }
};

int main()
{
    Solution S;
    string s = "AbCdEfGh";
    S.halvesAreAlike(s);
    return 0;
}
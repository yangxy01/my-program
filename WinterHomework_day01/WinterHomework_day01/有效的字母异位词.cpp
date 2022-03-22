//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    bool isAnagram(string s, string t)
//    {
//        vector<int> letters(26, 0);
//        for (int i = 0; i < s.length(); i++)
//            letters[s[i] - 'a']++;
//        for (int i = 0; i < t.length(); i++)
//            letters[t[i] - 'a']--;
//        for (int i = 0; i < t.length(); i++)
//            if (letters[i] != 0)
//                return false;
//        return true;
//    }
//};
//
//int main()
//{
//    Solution S;
//    string s = "ab";
//    string t = "a";
//    S.isAnagram(s, t);
//	return 0;
//}
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//    string reverseStr(string s, int k)
//    {
//        int i = 0, count = 0;
//        for (i = 1, count = 0; count < s.length(); count++, i++)
//        {
//            if (i == 2 * k)
//            {
//                auto it = s.begin() + count + 1 - 2 * k;
//                reverse(it, it + k);
//                i = 0;
//            }
//        }
//        int remain = s.length() % (2 * k);
//        if (remain > 0 && remain < k)
//        {
//            auto it = s.end() - remain;
//            reverse(it, s.end());
//        }
//        else if (remain >= k && remain < 2 * k)
//        {
//            auto it = s.end() - remain;
//            reverse(it, it + k);
//        }
//        return s;
//    }
//};
//
//int main()
//{
//    Solution S;
//    string s = "abcd";
//    S.reverseStr(s,2);
//    //auto it = s.begin() + 5;
//    return 0;
//}
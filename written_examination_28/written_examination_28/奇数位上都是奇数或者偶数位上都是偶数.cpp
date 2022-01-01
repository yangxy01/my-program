//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution 
//{
//public:
//    void oddInOddEvenInEven(vector<int>& arr, int len) 
//	{
//		int odd = 1;
//		int even = 0;
//		while (odd < len && even < len)
//		{
//			if (arr[odd] % 2 != 1)
//			{
//				while (even < len && arr[even] % 2 != 1)
//					even += 2;
//				if (even < len)
//				{
//					int tmp = arr[even];
//					arr[even] = arr[odd];
//					arr[odd] = tmp;
//				}
//			}
//			odd += 2;
//		}
//    }
//};
//
//int main()
//{
//	vector<int> vec;
//	for (int i = 0; i < 5; i++)
//		vec.push_back(2);
//	Solution S;
//	S.oddInOddEvenInEven(vec, 5);
//	for (int i = 0; i < 5; i++)
//		cout << vec[i] << " " ;
//	cout << endl;
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//int main()
//{
//	vector<char> vecA,vecB;
//	string A, B;
//	int k = 0;
//	int sum = 0;
//	cin >> A >> B;
//	for (int i = 0; i < A.length(); i++)
//	{
//		vecA.push_back(A[i]);
//	}
//	
//	for (int i = 0; i < A.length()+1; i++)
//	{
//		vecB = vecA;
//		auto it = vecB.begin() + i;
//		int len = B.length();
//		for (int j = 0; j < len; j++)
//		{
//			it = vecB.begin() + i + j;
//			vecB.insert(it, B[j]);
//			
//		}
//		int left = 0, right = vecB.size() - 1;
//		int flag = 1;
//		while (left < right)
//		{
//			if (vecB[left] != vecB[right])
//			{
//				flag = 0;
//				break;
//			}
//			left++;
//			right--;
//		}
//		if (flag)
//			sum++;
//	}
//	cout << sum << endl;
//	return 0;
//}
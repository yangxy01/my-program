//#include<iostream>
//#include<vector>
//using namespace std;
//class MaxGap {
//public:
//    int findMaxGap(vector<int> A, int n) 
//    {
//        int left = 0;
//        int right = 0;
//        int max = A[0];
//        vector<int> B(A.size(), 0);
//        vector<int> C(A.size(), 0);
//        for (int i = 0; i < A.size(); i++)
//        {
//            if (A[i] > max)
//            {
//                max = A[i];
//            }
//            B[i] = max;
//        }
//        max = A[A.size()-1];
//        for (int i = A.size() - 1; i >=0; i--)
//        {
//            if (A[i] > max)
//            {
//                max = A[i];
//            }
//            C[i] = max;
//        }
//        max = B[0] - C[1];
//        for (int i = 0; i <= A.size()-2; i++)
//        {
//            int val = abs(B[i] - C[i + 1]);
//            /*cout << val << "=" << B[i] << "-" << C[i + 1] << endl;*/
//            
//            if (val > max)max = val;
//        }
//        /*for (int i = 0; i < A.size(); i++)
//            cout << A[i] << " ";
//        cout << endl;
//        for (int i = 0; i < B.size(); i++)
//            cout << B[i] << " ";
//        cout << endl;
//        for (int i = 0; i < C.size(); i++)
//            cout << C[i] << " ";
//        cout << endl;*/
//        return max;
//    }
//};
//
//int main()
//{
//    vector<int> A;
//    A.push_back(2);
//    A.push_back(7);
//    A.push_back(3);
//    A.push_back(1);
//    A.push_back(1);
//
//    MaxGap M;
//    cout << M.findMaxGap(A, 5) << endl;
//	return 0;
//}
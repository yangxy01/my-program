//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int n, flag, sum = 1;
//    cin >> n;
//    if (n <= 2)
//        sum = 1;
//    else
//    {
//        int* arr = new int[n];
//        for (int i = 0; i < n; i++)
//            cin >> arr[i];
//
//        int i;
//        for (i = 0; i < n - 1; i++)
//        {
//            if ((arr[i] - arr[i + 1]) != 0)
//            {
//                flag = arr[i] - arr[i + 1];
//                break;
//            }
//        }
//        i++;
//        
//        while(i < n - 1)
//        {
//            if ((arr[i] - arr[i + 1]) * flag < 0)
//                sum++;
//            flag = arr[i] - arr[i + 1];
//            i++;
//        }
//        delete[]arr;
//    }
//
//    cout << sum << endl;
//    return 0;
//}
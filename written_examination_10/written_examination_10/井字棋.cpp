//#include<iostream>
//#include<vector>
//using namespace std;
//class Board {
//public:
//    bool checkWon(vector<vector<int> > board)
//    {
//        int len = board.size();
//        int flag = 1;
//        for (int i = 0; i < len; i++)
//        {
//            flag = 1;
//            for (int j = 0; j < len ; j++)
//            {
//                if (board[i][j] != 1)
//                    flag = 0;
//            }
//            if (flag)
//                return true;
//        }
//        for (int j = 0; j < len; j++)
//        {
//            flag = 1;
//            for (int i = 0; i < len ; i++)
//            {
//                if (board[i][j] != 1)
//                    flag = 0;
//            }
//            if (flag)
//                return true;
//        }
//        flag = 1;
//        for (int i = 0; i < len; i++)
//        {
//            for (int j = 0; j < len; j++)
//            {
//                if ((i==j)&&(board[i][j] != 1))
//                    flag = 0;
//            }
//        }
//        if (flag)
//            return true;
//        flag = 1;
//        for (int i = 0; i < len ; i++)
//        {
//            for (int j = len - 1; j >=0 ; j--)
//            {
//                if ((i + j == len - 1) && (board[i][j] != 1))
//                    flag = 0;
//            }
//        }
//        if (flag)
//            return true;
//        return false;
//    }
//    
//};
////1 0 1 1 0 1 -1 1 1 -1 0 1 0 -1 1 -1
//int main()
//{
//    Board B;
//    int x;
//    vector<vector<int> > board(4, vector<int>(4));
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            cin >> x;
//            board[i][j]=x;
//            cout << x << " ";
//        }
//        cout << endl;
//    }
//    if (B.checkWon(board))
//        cout << "yes" << endl;
//    else
//        cout << "no" << endl;
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Bonus 
//{
//public:
//    int getMost(vector<vector<int> > board)
//    {
//        for (int i = 0; i < 3; i++)
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                cout << board[i][j] << " ";
//            }
//            cout << endl;
//        }
//        int ret = GetPathVal(0, 0, board);
//        cout << ret << endl;
//        return 1;
//    }
//    int GetPathVal(int x, int y, vector<vector<int> > board)
//    {
//        if (x == 2 && y == 2)
//            return board[x][y];
//        else
//        {
//            int down = 0, right = 0;
//            if(y + 1 < 3)
//                right = GetPathVal(x, y + 1, board);
//            if (x + 1 < 3)
//                down = GetPathVal(x + 1, y , board);
//            if (down > right)
//                return board[x][y] + down;
//            else
//                return board[x][y] + right;
//        }
//    }
//    
//};
//
//int main()
//{
//    vector<vector<int> > board;
//    board.resize(3);
//    int count = 1;
//    for (int i = 0; i < 3; i++)
//        board[i].resize(3);
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            board[i][j] = count;
//            count++;
//        }
//    }
//    Bonus B;
//    B.getMost(board);
//
//}
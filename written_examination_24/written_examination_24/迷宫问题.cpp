#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        int i, j;
        vector<int> path;
        vector<vector<int> > board;
        board.resize(n);
        path.resize(2*(n + m));
        for (int i = 0; i < n; i++)
            board[i].resize(m);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> board[i][j];
            }
        }
        int size = 2;
        path.push_back(0);
        path.push_back(0);
        while (path[size - 2] != n - 1 || path[size - 1] != m - 1)
        {
            i = path[size - 2];
            j = path[size - 1];
            if (j + 1 < m && board[i][j + 1] == 0)
            {
                size += 2;
                path[size - 2] = i;
                path[size - 1] = j + 1;
                continue;
            }
            if (i + 1 < n && board[i + 1][j] == 0)
            {
                size += 2;
                path[size - 2] = i + 1;
                path[size - 1] = j;           
                continue;
            }
            board[i][j] = 1;
            size -= 2;
            
        }
        for (i = 0; i < size - 1; i+=2)
        {
            cout << "(" << path[i] << "," << path[i + 1] << ")" << endl;
        }
    }
}
#include<iostream>
#include<vector>
using namespace std;

class Printer 
{
public:
    vector<int> clockwisePrint(vector<vector<int> > mat, int n, int m) 
    {
        vector<int> ret;
        int right = m - 1, down = n - 1, left = 0, up = 0;
        int i = 0, j = 0;
        while (1)
        {
            while (j <= right)//ср
            {
                ret.push_back(mat[i][j]);
                j++;
            }
            j--;
            i++;
            up++;
            if (left > right || up > down)
                break;
            while (i <= down)//об
            {
                ret.push_back(mat[i][j]);
                i++;
            }
            i--;
            j--;
            right--;
            if (left > right || up > down)
                break;
            while (j >= left)//вС
            {
                ret.push_back(mat[i][j]);
                j--;
            }
            j++;
            i--;
            down--;
            if (left > right || up > down)
                break;
            while (i >= up)//ио
            {
                ret.push_back(mat[i][j]);
                i--;
            }
            i++;
            j++;
            left++;
            if (left > right || up > down)
                break;
        }
        return ret;
    }
};

int main()
{
    Printer P;
    vector<vector<int> > mat;
    mat.resize(3);
    for (int i = 0; i < 3; i++)
        mat[i].resize(3);
    int count = 1;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            mat[i][j] = count++;
    vector<int> vec=P.clockwisePrint(mat, 3, 3);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
	return 0;
}
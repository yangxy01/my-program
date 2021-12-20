#include<iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        while (n > 9)
        {
            int x = 0;
            while (n)
            {
                x = x + (n % 10);
                n /= 10;
            }
            n = x;
        }
        cout << n << endl;
    }
    return 0;
}
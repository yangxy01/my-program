#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    int max, mid, least;
    while (cin >> a >> b >> c)
    {
        max = a, mid = b, least = c;
        if (b > max)
            max = b;
        if (c > max)
            max = c;
        if (a < least)
            least = a;
        if (b < least)
            least = c;
        if (a != max && a != least)
            mid = a;
        if (c != max && c != least)
            mid = c;
        cout << least << mid << max << endl;
        if (least + mid > max && max - mid < least)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
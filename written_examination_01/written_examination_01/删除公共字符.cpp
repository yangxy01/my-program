#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<char> ls1, ls2;
    char ch;
    while ((ch=getchar())&& ch != '\n')
        ls1.push_back(ch);

    while ((ch = getchar()) && ch != '\n')
        ls2.push_back(ch);
    
    int flag = 1;
    for (auto it : ls1)
    {
        flag = 1;
        for (auto ite : ls2)
        {
            if (it == ite)
                flag = 0;
        }
        if (flag)
            cout << it;
    }
    return 0;
}
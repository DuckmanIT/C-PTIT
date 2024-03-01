/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

int check(char s[])
{
    if (strlen(s) == 2)
        if (abs(int(s[0]) - int(s[1])) != 1)
            return 0;
        else
            return 1;

    for (int i = 1; i < strlen(s) - 1; i++)
    {
        if (abs(int(s[i]) - int(s[i - 1])) != 1 || abs(int(s[i]) - int(s[i + 1])) != 1)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[1000];
        cin >> s;
        if (check(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
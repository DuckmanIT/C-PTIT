/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

int check(char s[])
{
    int len = strlen(s);
    if (s[len - 1] == '6' && s[len - 2] == '8')
        return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[1000];
        cin >> s;
        cout << check(s) << endl;
    }

    return 0;
}
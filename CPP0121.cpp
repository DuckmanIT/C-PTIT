/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

long long mygcd(long long a, long long b)
{
    while (a * b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }

    return a + b;
}

long long mylcm(long long a, long long b)
{
    return a * b / mygcd(a, b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        cout << mylcm(a, b) << ' ' << mygcd(a, b) << endl;
    }

    return 0;
}
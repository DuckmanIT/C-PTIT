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
        int n;
        cin >> n;
        long long max = 1;
        for (int i = 2; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (mylcm(i, j) > max)
                    max = mylcm(i, j);
            }
        }
        cout << max << endl;
    }

    return 0;
}
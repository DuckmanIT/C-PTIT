/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

long long cal(long long n)
{
    long long s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int check(long long n)
{
    n = cal(n);
    if (n < 10)
        return n;
    else
        return check(n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << check(n) << endl;
    }

    return 0;
}
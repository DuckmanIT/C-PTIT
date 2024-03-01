/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

int isPrime(long n)

{
    if (n <= 1)
    {
        return 0;
    }

    if (n == 2 || n == 3)
    {
        return 1;
    }

    if (n % 2 == 0 || n % 3 == 0)
    {
        return 0;
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return 0;
        }
    }
}

void solve(long long n)
{

    if (isPrime(n))
    {
        cout << n << endl;
        return;
    }

    for (long long i = 2; i <= n / 2; i++)
    {
        if (isPrime(n / i) && n % i == 0 && n % (n / i) == 0)
        {
            cout << n / i << endl;
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        solve(n);
    }

    return 0;
}
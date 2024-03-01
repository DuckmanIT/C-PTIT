/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

int prime[1000001];

void sieve()
{
    for (int i = 0; i < 1000000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i < 1000; i++)
        if (prime[i])
        {
            for (int j = i * i; j < 1000000; j += i)
                prime[j] = 0;
        }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 2; i < n; i++)
            if (prime[i] == 1 && prime[n - i] == 1)
            {
                cout << i << ' ' << n - i << endl;
                break;
            }
    }

    return 0;
}
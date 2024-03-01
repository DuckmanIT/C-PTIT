/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

long long fib[1000];

void solve()
{
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i <= 92; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    solve();
    while (t--)
    {
        int n;
        cin >> n;
        cout << fib[n - 1] << endl;
    }

    return 0;
}
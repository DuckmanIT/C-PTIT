/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, sum1 = 0, sum2 = 0;
        cin >> n >> k;
        sum1 = (k - 1) * k / 2;
        long long c = n / k;
        n %= k;
        sum2 = (n + 1) * n / 2;
        cout << sum1 * c + sum2 << endl;
    }

    return 0;
}
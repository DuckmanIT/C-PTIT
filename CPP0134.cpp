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
        int n, i, k, d, check = 0;
        int count = 0;
        cin >> n >> k;
        for (int i = 2; i <= n; i++)
        {
            d = 0;
            while (n % i == 0)
            {
                d++;
                n = n / i;
                count++;
                if (count == k)
                {
                    check = 1;
                    cout << i << endl;
                    break;
                }
            }
            if (check)
                break;
        }
        if (!check)
            cout << -1 << endl;
    }

    return 0;
}
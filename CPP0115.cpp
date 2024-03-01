/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, i, d;
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            d = 0;
            while (n % i == 0)
            {
                d++;
                n = n / i;
            }
            if (d != 0)
            {
                cout << i << ' ' << d;
                if (n > i)
                {
                    cout << ' ';
                }
            }
        }
        cout << endl;
    }

    return 0;
}
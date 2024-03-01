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
        int a, m;
        cin >> a >> m;
        int check = 0;
        for (int i = a; i < m; i++)
        {
            if (a * i % m == 1)
            {
                cout << i << endl;
                check = 1;
                break;
            }
        }
        if (!check)
            cout << -1 << endl;
    }

    return 0;
}
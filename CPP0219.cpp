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
        int n, m;
        cin >> n >> m;
        int a[n][m], res[n][m] = {0};
        memset(res, 0, sizeof(res));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 1)
                {
                    for (int k = 0; k < m; k++)
                        res[i][k] = 1;
                    for (int k = 0; k < n; k++)
                        res[k][j] = 1;
                }
            }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << res[i][j] << ' ';
            cout << endl;
        }
    }

    return 0;
}
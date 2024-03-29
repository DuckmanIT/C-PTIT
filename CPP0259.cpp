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
    int n, m, p;
    cin >> n >> m >> p;
    int a[n][m], b[m][p], c[n][p];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            cin >> b[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
            cout << c[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
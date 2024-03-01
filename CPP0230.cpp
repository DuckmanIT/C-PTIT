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
    int n;
    cin >> n;
    int a[n][3];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int res = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            res += a[i][j];
        }
        if (res > 1)
            count++;
    }
    cout << count << endl;

    return 0;
}
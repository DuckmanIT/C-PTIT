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
        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ques[q][2];
        for (int i = 0; i < q; i++)
            for (int j = 0; j < 2; j++)
                cin >> ques[i][j];
        for (int i = 0; i < q; i++)
        {
            long long value = 0;
            for (int j = ques[i][0] - 1; j <= ques[i][1] - 1; j++)
                value += a[j];
            cout << value << endl;
        }
    }

    return 0;
}
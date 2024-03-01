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
        int n;
        cin >> n;
        int a[n];
        int check[100001];
        memset(check, 0, sizeof(check));
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            check[a[i]]++;
        }
        long long count = 0;
        for (int i = 0; i < 100001; i++)
        {
            if (check[i] > 1)
                count += check[i];
        }
        cout << count << endl;
    }

    return 0;
}
/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

int compare(const void *a, const void *b)
{
    const int *x = (int *)a;
    const int *y = (int *)b;
    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;
    return 0;
}

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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        qsort(a, n, sizeof(int), compare);
        cout << a[n - 1] << endl;
    }

    return 0;
}
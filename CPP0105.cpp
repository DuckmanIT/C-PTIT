#include <bits/stdc++.h>
using namespace std;

int check(long long n)
{
    while (n != 0)
    {
        int c = n % 10;
        if (c == 0 || c == 6 || c == 8)
        {
            n /= 10;
            continue;
        }
        else
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (check(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
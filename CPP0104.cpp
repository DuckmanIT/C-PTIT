#include <bits/stdc++.h>
using namespace std;

long long cal(int n, int i, long long s)
{
    s *= i;
    if (i == n)
        return s;
    else
    {
        i++;
        return cal(n, i, s);
    }
}

int main()
{
    int n;
    cin >> n;
    long long value = 0;
    for (int i = 1; i <= n; i++)
    {
        long long s = 1;
        value += cal(i, 1, s);
    }
    cout << value;
    return 0;
}
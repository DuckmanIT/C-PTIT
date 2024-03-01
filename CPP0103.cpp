#include <bits/stdc++.h>
using namespace std;

double cal(int n, int i, double s)
{
    s += 1.0 / i;
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
    double s = 0;
    cin >> n;
    printf("%.4f", cal(n, 1, s));
    return 0;
}
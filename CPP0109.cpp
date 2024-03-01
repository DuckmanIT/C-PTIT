#include <bits/stdc++.h>
using namespace std;

int check(int n)
{
    int count_odd = 0;
    int count_even = 0;
    while (n != 0)
    {
        int c = n % 10;
        if (c % 2 == 0)
            count_even++;
        else
            count_odd++;
        n /= 10;
    }
    if (count_even == count_odd)
        return 1;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int begin = int(pow(10, n - 1));
    int end = int(pow(10, n)) - 1;
    int count = 0;
    for (int i = begin; i <= end; i++)
    {
        if (check(i))
        {
            if (count == 10)
            {
                cout << endl;
                count = 0;
            }
            cout << i << ' ';
            count++;
        }
    }
    return 0;
}
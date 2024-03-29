/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

int prime[1000001];

void sieve()
{
    for (int i = 0; i < 1000000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i < 1000; i++)
        if (prime[i])
        {
            for (int j = i * i; j < 1000000; j += i)
                prime[j] = 0;
        }
}

int main()
{
    /*int t;
    cin >> t;
    while(t--)
    {

    }
    */
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        int c = a;
        a = b;
        b = c;
    }
    sieve();

    for (int i = a; i <= b; i++)
        if (prime[i])
            cout << i << ' ';
    return 0;
}
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
    for (int i = 0; i < 1000000000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i < int(sqrt(1000000000)); i++)
        if (prime[i])
        {
            for (int j = i * i; j < 1000000000; j += i)
                prime[j] = 0;
        }
}

int main()
{
    sieve();
    long long n;
    cin >> n;
    if (Isprime(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

long long prime[100001];
void sieve()
{
    for (long long i = 0; i < 1000000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (long long i = 2; i < 10000; i++)
        if (prime[i])
        {
            for (int j = i * i; j < 1000000; j += i)
                prime[j] = 0;
        }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        long long n, count = 0;
        vector<long long> value;
        cin >> n;
        for (long long i = 2; i <= n; i++)
            if (prime[i])
                if (n % i == 0)
                {
                    count++;
                    value.push_back(i);
                }
        if (count > 1)
            cout << count << ' ';
        for (int i = 0; i < count; i++)
            cout << value[i] << ' ';
        cout << endl;
    }

    return 0;
}

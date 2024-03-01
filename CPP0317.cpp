/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;

int check(string s)
{
    for (int i = 0; i <= s.length() / 2; i++)
        if (s[i] != s[s.length() - i - 1])
            return 0;
        else
        {
            if (int(s[i]) % 2 != 0)
                return 0;
        }
    return 1;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    cin >> n;
    string c;
    getline(cin, c);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (check(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
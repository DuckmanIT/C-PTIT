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
    int n;
    cin >> n;
    string c;
    getline(cin, c);
    set<string> s;
    for (int i = 0; i < n; i++)
    {
        string x;
        getline(cin, x);
        s.insert(x);
    }

    cout << s.size();
    return 0;
}
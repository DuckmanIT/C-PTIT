#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, new_s;
        cin >> s;
        new_s = s;
        reverse(s.begin(), s.end());
        if (new_s == s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
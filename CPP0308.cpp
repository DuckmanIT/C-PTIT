/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[10000];
        cin >> s;
        int check[256];
        memset(check, 0, sizeof(check));
        for (int i = 0; i < strlen(s); i++)
        {
            int c;
            c = int(s[i]);
            check[c]++;
        }

        for (int i = 0; i < strlen(s); i++)
        {
            int c;
            c = int(s[i]);
            if (check[c] == 1)
                cout << s[i];
        }
        cout << endl;
    }

    return 0;
}
/*
    Hoang Huu Duc
    B21DCCN240
    D21CQCN12-B
*/
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    // std::ios_base::sync_with_stdio(false);
    // std::cin.tie(nullptr);
    int t;
    char c;
    cin >> t >> c;
    while (t--)
    {
        char c[1000];
        gets(c);
        char *p = strtok(c, " ");
        int count = 0;
        while (p != NULL)
        {
            count++;
            p = strtok(NULL, " ");
        }
        cout << count << endl;
    }
    return 0;
}
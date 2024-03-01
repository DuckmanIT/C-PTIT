#include <bits/stdc++.h>
using namespace std;

int main()
{
    char key1[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
    char key2[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
    int t;
    cin >> t;
    while (t--)
    {
        int code;
        cin >> code;
        double count = 0;
        char a[15];
        for (int i = 0; i < 15; i++)
        {
            cin >> a[i];
        }
        if (code == 101)
        {
            for (int i = 0; i < 15; i++)
                if (a[i] == key1[i])
                {
                    count += 10.0 / 15;
                }
        }
        else if (code == 102)
        {
            for (int i = 0; i < 15; i++)
                if (a[i] == key2[i])
                    count += 10.0 / 15;
        }
        printf("%.2f\n", count);
    }
    return 0;
}
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
        double xA, yA, xB, yB;
        cin >> xA >> yA >> xB >> yB;
        double s = sqrt(abs(xA - xB) * abs(xA - xB) + abs(yA - yB) * abs(yA - yB));
        printf("%.4f\n", s);
    }

    return 0;
}
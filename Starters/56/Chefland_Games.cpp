#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    cin >> cas;

    while (cas--)
    {
        int a, b, c, d;

        cin >> a >> b >> c >> d;

        if (a == 1 or b == 1 or c == 1 or d == 1)
            cout << "OUT" << endl;

        else
            cout << "IN" << endl;
    }

    return 0;
}
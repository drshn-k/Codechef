#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas, x;
    cin >> cas;

    while (cas--)
    {
        cin >> x;
        if (x <= 100)
            cout << x << endl;

        else if (x > 100 and x <= 1000)
            cout << x - 25 << endl;

        else if (x > 1000 and x <= 5000)
            cout << x - 100 << endl;

        else
            cout << x - 500 << endl;
    }

    return 0;
}
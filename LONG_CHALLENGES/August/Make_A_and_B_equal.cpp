#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    float a, b;
    float x;
    cin >> cas;

    while (cas--)
    {
        cin >> a >> b;

        if (a > b)
            x = a / b;
        else
            x = b / a;

        if (x == 1 or x == 2 or x == 4 or x == 8 or x == 16 or x == 32)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    cin >> cas;

    while (cas--)
    {
        int x, p, q;
        cin >> x >> p >> q;
        int m = (p - q) * x;
        cout << m << endl;
    }

    return 0;
}
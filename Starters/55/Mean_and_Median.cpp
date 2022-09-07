#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    cin >> cas;

    while (cas--)
    {
        int x, y;
        cin >> x >> y;
        int c = (x * 3) - y;
        cout << "0 " << y << " " << c << endl;
    }

    return 0;
}
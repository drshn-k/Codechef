#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    cin >> cas;

    while (cas--)
    {
        int w, x, y, m, z;
        cin >> w >> x >> y >> m;
        z = w + ((x - y) * m);
        //  cout << w << endl;
        //  cout << y << endl;
        //  cout << x << endl;
        //  cout << y-x << endl;
        //  cout << m << endl;

        cout << z << endl;
    }

    return 0;
}
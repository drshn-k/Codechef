#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    cin >> cas;

    while (cas--)
    {
        long long a, b;
        cin >> a >> b;

        if (a > b)
            cout << "NEW PHONE" << endl;

        else if (a < b)
            cout << "REPAIR" << endl;

        else
            cout << "ANY" << endl;
    }

    return 0;
}
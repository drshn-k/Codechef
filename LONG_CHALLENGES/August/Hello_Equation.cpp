#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long cas;

    cin >> cas;

    while (cas--)
    {
        long long x;

        bool yes = false;
        
        cin >> x;

        for (int i = 1; i * i <= x; i++)
        {
            int a = (x - 2 * i) % (i + 2);
            if ( a == 0 and x != 2 * i)
            {
                yes = true;
                break;
            }
        }
        if (yes)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    cin >> cas;

    while (cas--)
    {
        int G = 0, n, k;
        vector<int> v;

        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
            G = __gcd(G, a);
        }

        // int start = 0;
        int count = 0;
        int gcd = 0;

        for (int i = 0; i < n; i++)
        {
            gcd = __gcd(gcd, v[i]);
            if (gcd == G)
            {
                count++;
                gcd = 0;
            }
        }

        if (count >= k)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}
//  Darshan Ajay Kasar

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    long long i, a[1000], n, cas;

    cin >> cas;

    while (cas--)
    {
        cin >> n;
        vector<int> v(n + 1, 0);

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            v[a[i]]++;
        }

        sort(v.begin(), v.end());

        int k = v.size();
        if (n == 1)
            cout << "YES" << endl;
        else if (v[k - 1] == 1 or v[k - 1] == 0)
            cout << "NO" << endl;
        else if (v[k - 1] == v[k - 2])
            cout << "NO" << endl;

        else if (v[k - 1] != v[k - 2])
            cout << "YES" << endl;
    }

    return 0;
}

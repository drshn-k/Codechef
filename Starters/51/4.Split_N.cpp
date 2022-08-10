
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long i, a[1000], n, cas;

    cin >> cas;

    while (cas--)
    {

        cin >> n;
        int count = 0;
        for (i = 0; n > 0; i++)
        {
            a[i] = n % 2;
            n = n / 2;
            if (a[i] == 1)
                count++;
        }

        cout << count - 1 << endl;
    }

    return 0;
}
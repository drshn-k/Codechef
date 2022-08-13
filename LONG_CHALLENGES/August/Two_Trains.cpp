#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    cin >> cas;
    long long n;

    while (cas--)
    {
        cin >> n;
        vector<int> v;
        int sum = 0, max = 0, i;
        for (i = 0; i < n - 1; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
            sum = sum + a;

            if (a > max)
                max = a;
        }

        sum = sum + max;

        cout << sum << endl;
    }

    return 0;
}
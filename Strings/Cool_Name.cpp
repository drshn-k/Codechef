#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    cin >> cas;

    while (cas--)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            ans = ans + ((i + 1) * ((int)s[i] - 96));
        }

        cout << ans << endl;
    }

    return 0;
}
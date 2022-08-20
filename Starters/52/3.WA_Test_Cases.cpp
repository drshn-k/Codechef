#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    long long n;
    cin >> cas;

    while (cas--)
    {
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        string s;
        cin >> s;
        //  for (int i = 0; i < n; i++)
        // {
        //   cout << s[i] << " ";
        // }
        long long min = 100, ans;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= min and s[i] == '0')
            {
                min = v[i];
                ans = v[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}

// 3
// 5 10 3
// 001
// 3
// 5 5 3
// 001
// 3
// 5 5 3
// 101
// 5
// 10 100 100 10 10
// 00001

// 5
// 5
// 5
// 10
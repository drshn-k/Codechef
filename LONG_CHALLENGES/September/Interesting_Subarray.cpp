#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long cas;
    cin >> cas;

    while (cas--)
    {
        long long n;
        cin >> n;
        vector<long long> v;
        long long min_positive = 1e9;
        // long long max = -1e9;
        // long long max_positive = 0, max_negative = 0;
        // long long min_positive = 1e9, min_negative = -1e9;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            v.push_back(a);
            if (a >= 0 and a < min_positive)
                min_positive = a;
        }

        long long leftmost = *min_element(v.begin(), v.end());
        long long rightmost = *max_element(v.begin(), v.end());

        if (min_positive == 1e9)
        {
            cout << rightmost * rightmost << " " << leftmost * leftmost << endl;
        }

        else
        {
            if (leftmost < 0)
            {
                cout << leftmost * rightmost << " " << max(leftmost * leftmost, rightmost * rightmost) << endl;
            }

            else
            {
                cout << leftmost * leftmost << " " << rightmost * rightmost << endl;
            }
        }
    }
}
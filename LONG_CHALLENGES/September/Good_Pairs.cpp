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
        vector<long long> v(n);
        // long long max = 0;
        unordered_map<long long, long long> count;
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            count[v[i]]++;
            // if (a > max)

            //     max = a;
        }

        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }

        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }

        // cout << endl;
        //  cout << "count: ";
        // for (int i = 0; i < count.size(); i++)
        // {
        //     cout <<  count[i] << " ";
        // }
        // cout << endl;

        //  cout << "after count: ";
        // for (int i = 0; i < count.size(); i++)
        // {
        //     cout << count[i] << " ";
        // }
        // cout << endl;

        long long final_sum = 0;
        for (auto i : count)
        {
            long long sum = 0;
            if (i.second >= 2)
            {
                long long d = i.second;
                sum = ((d - 1) * d) / 2;
                final_sum = final_sum + sum;
            }
        }

        cout << final_sum << endl;
    }

    return 0;
}
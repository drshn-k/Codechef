#include <bits/stdc++.h>
using namespace std;

vector<long long> ans(long long a, long long b, long long c, vector<long long> v)
{
    priority_queue<long long, vector<long long>, greater<long long>> minimumQ;
    for (int itr : v)
    {
        minimumQ.push(itr);
    }
    while (c > 0)
    {
        long long min = minimumQ.top();

        if ((min ^ b) > min)
        {
            minimumQ.pop();
            minimumQ.push(min ^ b);
            c--;
        }

        else
        {
            if ((c & 1) == 0)
                break;
            else
            {
                minimumQ.pop();
                minimumQ.push(min ^ b);
                break;
            }
        }
    }

    vector<long long> ans;

    while (!minimumQ.empty())
    {
        ans.push_back(minimumQ.top());
        minimumQ.pop();
    }
    return ans;
}
int main()
{

    long long CAS;
    cin >> CAS;
    while (CAS--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        vector<long long> v(a);

        for (int itr = 0; itr < a; itr++)
        {
            cin >> v[itr];
        }

        for (int itr : ans(a, b, c, v))
        {
            cout << itr << " ";
        }
        cout << endl;
    }
    return 0;
}
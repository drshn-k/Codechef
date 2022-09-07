#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cas;
    cin >> cas;

    while (cas--)
    {
        long long N, K;
        cin >> N >> K;

        long long sum = (K * (K + 1)) / 2;

        if (K == 1)
            cout << "Yes" << endl;

        else if (N < K)
            cout << "NO" << endl;

        else if (N >= sum)
            cout << "Yes" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}
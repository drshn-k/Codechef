#include <bits/stdc++.h>
using namespace std;
int main()
{
    //   long long cas;
    //   cin >> cas;

    //    while (cas--)
    //            {
    int K, N;
    cin >> K >> N;
    string lucky[K];
    string found[N];

    for (int i = 0; i < K; i++)
    {
        cin >> lucky[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> found[i];
    }
    for (int i = 0; i < N; i++)
    {
        bool flag = false;
        for (int j = 0; j < K; j++)
        {
            long long int p = found[i].find(lucky[j]);
            if (p >= 0 or found[i].size() >= 47)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "Good" << endl;

        else
            cout << "Bad" << endl;
    }

    //    }

    return 0;
}
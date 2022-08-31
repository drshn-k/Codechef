#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    cin >> cas;

    while (cas--)
    {
        int N;
        cin >> N;
        set<int> s;

        for (int i = 0; i < N; i++)
        {
            int a;
            cin >> a;
            s.insert(a);
        }
        int size = s.size();

        if (size % 2 == 0)
            cout << "Yes" << endl;
        else
        {
            if (size < N)
                cout << "Yes" << endl;

            else
                cout << "No" << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    cin >> cas;

    while (cas--)
    {
        long long P, Q, R;
        cin >> P >> Q >> R;

        long long flag = 1;
        for (int i = 20; i >= 0; i--)
        {
            long for_p = ((P >> i) & 1);
            long for_q = ((Q >> i) & 1);
            long for_r = ((R >> i) & 1);
            long check = for_p + for_q + for_r;

            if (check == 1)
                flag = 0;

            if (check == 3)
                flag = flag * 4;
        }

        cout << flag << endl;
    }

    return 0;
}
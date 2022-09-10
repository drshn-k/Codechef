#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    cin >> cas;

    while (cas--)
    {
        float a, x, b, y;
        cin >> a >> x >> b >> y;
        float alice_speed = (a / x);
        float bob_speed = (b / y);

        if (alice_speed < bob_speed)
            cout << "Bob" << endl;

        else if (bob_speed < alice_speed)
            cout << "Alice" << endl;

        else if (bob_speed == alice_speed)
            cout << "Equal" << endl;
    }

    return 0;
}
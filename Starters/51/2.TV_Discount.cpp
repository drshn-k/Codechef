//  Darshan Ajay Kasar

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    long long i, cas;
    long long a, b, c, d;
    cin >> cas;

    while (cas--)
    {
        cin >> a >> b >> c >> d;

        if (a - c < b - d)
            cout << "FIRST" << endl;

        else if (b - d < a - c)
            cout << "SECOND" << endl;

        else
            cout << "ANY" << endl;
    }

    return 0;
}

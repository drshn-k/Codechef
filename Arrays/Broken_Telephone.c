//  Darshan Ajay Kasar

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    long long i, cas, n, arr[100000];

    cin >> cas;

    while (cas--)
    {
        long count = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {

            cin >> arr[i];
        }

        for (i = 0; i < n; i++)
        {
            if (i == 00)
            {
                if (arr[i] != arr[i + 1])
                    count++;
            }
            else if (i == n - 1)
            {
                if (arr[i] != arr[i - 1])
                    count++;
            }
            else if (arr[i] != arr[i + 1] or arr[i] != arr[i - 1])
                count++;
        }

        cout << count << endl;
    }

    return 0;
}

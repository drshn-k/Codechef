#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    cin >> cas;

    while (cas--)
    {
        string str_original;

        cin >> str_original;
        string str1 = str_original;
        string str2 = str_original;
        int a = str_original.size();

        // for left shift
        for (int i = 0; i < a - 1; i++)
        {
            swap(str1[i], str1[i + 1]);
        }
        // cout << str1 << endl;
        for (int i = a - 1; i > 0; i--)
        {
            swap(str2[i], str2[i - 1]);
        }

        // cout << str2 << endl;

        if (str1 == str2)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}
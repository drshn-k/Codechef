#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    cin >> cas;

    while (cas--)
    {
        int size;
        cin >> size;
        vector<int> original;
        vector<int> bugs;

        for (int i = 0; i < size; i++)
        {
            int a;
            cin >> a;
            original.push_back(a);
        }
        set<int> st;
        int bugs_size;
        cin >> bugs_size;
        for (int i = 0; i < bugs_size; i++)
        {
            int a;
            cin >> a;
            st.insert(a);
        }

        for (int i = 0; i < original.size(); i++)
        {
            if (st.count(original[i]) == 0)
                cout << original[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
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
        vector<int> arr(N), brr(N);
        vector<int> garbage1(N), garbage2(N);

        for (int i = 0; i < N; i++)
        { 
            cin >> arr[i];
            garbage1[i] = arr[i];
        }

        for (int i = 0; i < N; i++)
        {
            cin >> brr[i];
            garbage2[i] = brr[i];
        }

        sort(garbage1.begin(), garbage1.end());

        sort(garbage2.begin(), garbage2.end());

        garbage1.erase(unique(garbage1.begin(), garbage1.end()), garbage1.end());

        garbage2.erase(unique(garbage2.begin(), garbage2.end()), garbage2.end());

        for (int i = 0; i < N; i++)
        {
            arr[i] = lower_bound(garbage1.begin(), garbage1.end(), arr[i]) - garbage1.begin();
        }

        for (int i = 0; i < N; i++)
        {
            brr[i] = lower_bound(garbage2.begin(), garbage2.end(), brr[i]) - garbage2.begin();
        }

        int template1 = 0, final_ans = 0;

        vector<int> P1(N);
        vector<int> Q1(N);
        vector<int> r;
        vector<int> carrage(N);

        for (int i = 0; i < N; i++)
        {
            carrage[arr[i]] = brr[i];
            P1[i] = arr[i] + brr[i];
            Q1[brr[i]] = i;
        }

        for (int i = 0; i < N; i++)
        {
            r.insert(upper_bound(r.begin(), r.end(), carrage[i]), carrage[i]);
            P1[Q1[carrage[i]]] -= lower_bound(r.begin(), r.end(), carrage[i]) - r.begin();
        }

        for (auto i : P1)
        {
            template1 = max(i, template1);
        }

        for (auto i : P1)
        {
            final_ans += (i == template1);
        }

        cout << final_ans << endl;
    };

    return 0;
}
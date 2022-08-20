#include <bits/stdc++.h>
using namespace std;
int main()
{
      long long cas;
      cin >> cas;
 
       while (cas--)
               {
                long long n;
                vector<long long> v;
                for (long long i = 0; i < n; i++)
                {
                    int a;
                    cin >> a;
                    v.push_back(a);
                }
                sort(v.begin(),v.end());

                for (long long i = 0; i < n; i++)
                {
                    for (long long j = 0; j < n; j++)
                    {
                        if(v[j] % v[i] == 0) v[j] = v[i];


                        if(i == j - 1)
                        break;
                    }
                    
                }
               
               
 
 
      return 0;
}
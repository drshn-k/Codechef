#include <bits/stdc++.h>
using namespace std;
int main()
{
      long long cas;
      cin >> cas;
 
       while (cas--)
               {
                       long long n , m ;
                       cin >> n >> m;
                        vector<long long> v;
                       for(long long i = 0 ; i < n ; i++){
                        long long a;
                        cin >> a;
                        v.push_back(a);
                       }
                        long long sum = 0;
                       for(long long i = 0 ; i < n ; i++){
                        sum = sum + max(abs(v[i] - m) , abs(v[i] - 1));
                        // cout << sum <<endl;
                        // cout << abs(v[i] - m) <<endl;
                        // cout << abs(v[i] - 1)<<endl;
                        // cout << max(abs(v[i] - m) , abs(v[i] - 1)) <<endl;

                       }
                       


                       cout << sum << endl;

               }
 
 
      return 0;
}
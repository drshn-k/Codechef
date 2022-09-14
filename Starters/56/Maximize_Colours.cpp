#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long cas;
    cin >> cas;

    while (cas--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int count_1 = 0;
        int count = 0;
        int count_0 = 0;
        if (x == 1)
            count_1++;
        if (y == 1)
            count_1++;
        if (z == 1)
            count_1++;

             if (x == 0)
            count_0++;
        if (y == 0)
            count_0++;
        if (z == 0)
            count_0++;

        if (x >= 1)
        {
            count++;
            x = x - 1;
            // cout << count << " ";
        }
        if (y >= 1)
        {
            count++;
            y = y - 1;
            // cout << count << " ";
        }

        if (z >= 1)
        {
            count++;
            z = z - 1;
            // cout << count << " ";
        }

        int final = count;
        int min1 = min(x, min(y, z));
        int max1 = max(x, max(y, z));

        if ((count_1 == 2 && count_0 != 1) or (count_0 ==1 && ((x >= 1 and y >= 1) or (y >= 1 and z >= 1) or (x >= 1 and z >= 1)) ))
            final = 3;

        if (count_1 == 1 && ((x >= 1 and y >= 1) or (y >= 1 and z >= 1) or (x >= 1 and z >= 1)))
            final = 4;

        if (min1 >= 2) //for 6
            final = final + 3;

        if (min1 == 1 && max1 >= 2)  //for 5
            final = final + 2;

        if (min1 == 1 && max1 < 2)
            final = final + 1;

        cout << final << endl;

        //    int sum  = x + y + z;

        //     if( count != 0 && sum)
        //   else if(count == 1 && sum >= 4) cout << "3" << endl;
    }

    return 0;
}
//一星必考題

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long i, j;
    while(cin >> i >> j)
    {
        cout << i << " " << j << " ";
        long long ans = 0;
        if(i <= j)
        {
            for(; i<=j ; i++)
            {
                long long count = 1;
                long long n = i;
                while(n != 1)
                {
                    if(n%2 == 1)
                        n = 3*n + 1;
                    else
                        n /= 2;
                    count++;
                }
                ans = max(ans, count);
            }
            cout << ans << endl;
        }
        else if(i > j)
        {
            for(; j<=i ; j++)
            {
                long long count = 1;
                long long n = j;
                while(n != 1)
                {
                    if(n%2 == 1)
                        n = 3*n + 1;
                    else
                        n /= 2;
                    count++;
                }
                ans = max(ans, count);
            }
            cout << ans << endl;
        }
    }
    return 0;
}
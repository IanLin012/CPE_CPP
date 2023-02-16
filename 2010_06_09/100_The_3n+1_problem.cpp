//一星必考題

#include <bits/stdc++.h>
using namespace std;

int func(long long n)
{
    long long count = 1;
    while(n != 1)
    {
        if(n%2 == 1)
            n = 3*n + 1;
        else
            n /= 2;
        count++;
    }
    return count;
}

int main()
{
    long long i, j;
    while(cin >> i >> j)
    {
        cout << i << " " << j << " ";
        long long count;
        long long ans = 0;
        if(i <= j)
        {
            for(; i<=j ; i++)
            {
                count = func(i);
                ans = max(ans, count);
            }
        }
        else
        {
            for(; j<=i ; j++)
            {
                count = func(j);
                ans = max(ans, count);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
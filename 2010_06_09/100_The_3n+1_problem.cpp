//一星必考題

#include <bits/stdc++.h>

using namespace std;

int func1(long long i, long long j)
{
    long long ans = 0;
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

int func2(long long i, long long j)
{
    long long ans = 0;
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

int main()
{
    long long i, j;
    while(cin >> i >> j)
    {
        cout << i << " " << j << " ";
        if(i <= j) func1(i, j);
        else if(i > j) func2(i, j);
    }
    return 0;
}
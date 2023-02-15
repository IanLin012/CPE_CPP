//一星必考題

#include <bits/stdc++.h>

using namespace std;

bool compare(long long x, long long y)
{
    return x > y;
}
int main()
{
    long long i, j;
    while(cin >> i >> j)
    {
        cout << i << " " << j << " ";
        long long arr[] = {0};
        for(long long n=i ; n<=j ; n++)
        {
            for(long long a1=0 ; a1<j-i ; a1++)
            {
                long long count[] = {0};
                long long a2=0;
                long long c=i;
                while(c!=1)
                {
                    if(c%2 == 1)
                        c = 3*c+1;
                    else
                        c = c/2;
                    a1++;
                    count[a2] = c;
                }
                for(long long a2=0 ; a2<sizeof(count) ; a2++)
                {
                    if(count[a2] == sizeof(count))
                        arr[a1] = count[a2];
                }
            }
        }
        sort(arr, arr+sizeof(arr), compare);
        cout << arr[0] << endl;
    }
    return 0;
}
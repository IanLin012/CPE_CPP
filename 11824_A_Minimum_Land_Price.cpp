#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int Li[100] = {0};
    while(T--)
    {
        int n = 0;
        while(cin >> Li[n] && Li[n]!=0)
            n++;
        sort(Li, Li+n);
        long long price=0, pow=0;
        for(int i=n-1 ; i>=0 ; i--)
        {
            pow = 2;
            for(int j=n ; j>i ; j--)
                pow *= Li[i];
            price += pow;
        }
        if(price > 5000000) cout << "Too expensive\n";
        else cout << price << endl;
    }
    return 0;
}
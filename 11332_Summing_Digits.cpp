// 一星必考題
// 2022-10-18 / 2015-12-22 / 2012-12-18
 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;	
    while(cin >> n)
    {
    	if(n == 0)
    		break;
        while (n/10 != 0)
        {
            int sum = 0;
            while (n != 0)
            {
                sum += n % 10;
                n /= 10;
            }
            n = sum;
        }
    	cout << n << endl;
    }
    return 0;
}
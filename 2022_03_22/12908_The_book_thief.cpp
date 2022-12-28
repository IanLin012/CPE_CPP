#include <bits/stdc++.h>

using namespace std;

/*
s = 少一頁的頁碼總和
c = 頁碼 
sum = 正確的頁碼總和 
*/

int main()
{
	long long s;
	while(cin >> s)
	{
		if(s == 0)
			break;
		int c;
		long long sum=0;
		for(c=1 ; ; c++)
		{
			sum += c;
			if(sum>s)
				break;
		}
		cout << sum-s << " " << c << endl;
	}
	return 0;
}

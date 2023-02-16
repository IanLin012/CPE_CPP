#include<bits/stdc++.h>
using namespace std;

/*
f = female
m = male
y = year
fc = female_count
mc = male_count
*/

int main()
{
	long long N;
	while(cin >> N)
	{
		if(N == -1)
			break;
		else
		{
			long long f=1, m=0, fc=0, mc=0;
			for(long long y=1 ; y<=N ; y++)
			{
				fc = f;
				mc = m;
				f += mc - (fc-1);
				m += fc;
			}
			cout << m << " " << f+m << endl;
		}
	}
}

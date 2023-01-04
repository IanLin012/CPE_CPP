//一星必考題

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n, m;
	while(cin >> n >> m)
	{
		if (n==0 || m==0 || m==1 || n<m)
			cout << "Boring!\n";
		else
		{
			long long data[100] = {0};
			int a = 0; // a = address
			for(; n>=1 ; n/=m)
			{
				if(n!=1 && n%m == 0)
				{
					data[a] = n;
					a++;
				}
				else if(n==1)
				{
					data[a] = n;
					break;
				}
				else
					break;
			}
			if(n == 1)
			{
				cout << data[0];
				for(a=1 ; a<(sizeof data/sizeof data[0]) ; a++)
				{
					if(data[a] != 0)
						cout << " " << data[a];
				}
				cout << endl;
			}
			else
				cout << "Boring!\n";
		}	
	}
	return 0;
}
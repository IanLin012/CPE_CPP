#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int size;
		cin >> size;
		int d[size] = {0}; // d = data
		for(int a=0 ; a<size ; a++) // a = address
		{
			int n;
			cin >> n;
			d[a] = n;
		}
		int D[size] = {0};
		for(int a=0 ; a<size ; a++)
			D[a] = abs(d[a+1]-d[a]);
		D[size-1] = abs(d[0]-d[size-1]);
		
	}
	return 0;
}

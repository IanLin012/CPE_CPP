#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	cout << "Lumberjacks:\n";
	while(N--)
	{
		int l[10] = {0}; // l = data
		
		for(int a=0 ; a<10 ; a++) // a = address
			cin >> l[a];
		
		for(int a=1 ; a<9 ; a++)
		{
			if((l[1]-l[0]<=0 && l[a+1]-l[a]>0) || (l[1]-l[0]>0 && l[a+1]-l[a]<=0))
			{
				cout << "Unordered\n";
				break;
			}
			else if(a == 8)
			{
				cout << "Ordered\n";
				break;
			}
		}
	}
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int Case;
	cin >> Case;
	while(Case--)
	{
		int h, cycle; //h = height
		cin >> h;
		cin >> cycle;
		for(int c=1 ; c<=cycle ; c++)
		{
			for(int i=1 ; i<=h ; i++)
			{
				for(int time=1 ; time<=i ; time++)
					cout << i;
				cout << endl;
			}
			for(int i=h-1 ; i>=1 ; i--)
			{
				for(int time=1 ; time<=i ; time++)
					cout << i;
				cout << endl;
			}
			cout << endl;
		}
	}
	return 0;
}

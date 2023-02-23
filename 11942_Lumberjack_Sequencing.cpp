//一星題

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	cout << "Lumberjacks:\n";
	int i;
	while(N--)
	{
		int arr[10] = {0};
		for(i=0 ; i<10 ; i++)
			cin >> arr[i];
		for(i=1 ; i<9 ; i++)
		{
			if((arr[1]-arr[0]<=0 && arr[i+1]-arr[i]>0) || (arr[1]-arr[0]>0 && arr[i+1]-arr[i]<=0))
			{
				cout << "Unordered\n";
				break;
			}
			else if(i == 8)
			{
				cout << "Ordered\n";
				break;
			}
		}
	}
	return 0;
}
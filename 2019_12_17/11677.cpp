#include <bits/stdc++.h>

using namespace std;

int main()
{
	int H1, M1, H2, M2;
	while(cin >> H1 >> M1 >> H2 >> M2)
	{
		if(H1+M1+H2+M2 == 0)
			break;
		int ans = 0;
		if(H1==H2 && M1>M2)
			ans = 24*60+(M2-M1);
		else if(H1>H2 && M1>=M2)
			ans = (24-(abs(H2-H1)))*60 + (M2-M1);
		else if(H1>H2 && M1<M2)
			ans = (24-(abs(H2-H1)))*60 + abs(M2-M1);
		else if(H1<H2 && M1>M2)
			ans = (H2-H1)*60 + (M2-M1);
		else
			ans = abs(H2-H1)*60 + abs(M2-M1);
		cout << ans << endl;
	}
	return 0;
}

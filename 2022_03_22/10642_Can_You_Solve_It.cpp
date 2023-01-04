//一星必考題

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int Case=1 ; Case<=n ; Case++)
	{
		long long x1, y1, x2, y2, step1=0, step2=0;
		cin >> x1 >> y1 >> x2 >> y2;
		step1 = (x1+y1+1)*(x1+y1)/2 + x1;
		step2 = (x2+y2+1)*(x2+y2)/2 + x2;
		/*
		從原點出發 :
		1. 在x軸的右下到左上 - 多餘的右下到左上 : [1+2+...+(x+y)] - [(x+y)-x] = (x+y+1)*(x+y)/2 - y
		2. 左到右 + 左上到右下 : x+y
		3. 所有步數 : (x+y+1)*(x+y)/2 - y + (x+y) = (x+y+1)*(x+y)/2 + x
		*/
		cout << "Case " << Case << ": " << step2-step1 << endl;
	}
	return 0;
}
// 一星必考題
// 2016-12-20 / 2010-12-23

#include <bits/stdc++.h>
using namespace std;

/*
平行四邊形的對角座標總和相同 (左上加右下 = 右上加左下)
=> (三點座標與一點重複座標總和) - (一點重複座標*3) = 欲求座標
*/

int main()
{
	double x[4], y[4];
	while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3])
	{
		double a=0, b=0;
		for(int i=0 ; i<4 ; i++) // 計算三點座標與一點重複座標總和
		{
			a += x[i];
			b += y[i];
		}
		for(int i=0 ; i<4 ; i++) // 尋找重複座標
		{
			for(int j=i+1 ; j<4 ; j++)
				if(x[i]==x[j] && y[i]==y[j]) printf("%.3f %.3f\n", a-x[i]*3, b-y[i]*3);
		}
	}
    return 0;
}
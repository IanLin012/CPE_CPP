// 一星必考題

#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x[4], y[4];
	while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3])
	{
		double a=0, b=0;
		for(int i=0 ; i<4 ; i++)
		{
			a += x[i];
			b += y[i];
		}
		for(int i=0 ; i<4 ; i++)
		{
			for(int j=i+1 ; j<4 ; j++)
			{
				if(x[i]==x[j] && y[i]==y[j])
					printf("%.3f %.3f\n", a-x[i]*3, b-y[i]*3);
			}
		}
	}
    return 0;
}
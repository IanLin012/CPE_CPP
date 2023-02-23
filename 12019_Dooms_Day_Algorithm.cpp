// 一星必考題
// 2021-03-23 / 2011-12-20

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string week1[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string week2[7] = {"Monday", "Sunsday", "Saturday", "Friday", "Thursday", "Wednesday", "Tuesday"};
    int T; // T = test cases
    cin >> T;
    while(T--)
    {
    	int m, d; // M = month, D = date
    	cin >> m >> d;
    	if(m==4 || m==6 || m==8 || m==10 || m==12)
		{
			if(m == d)
				cout << week1[0];
			else if(d < m)
				cout << week2[(m-d) % 7];
			else if(d > m)
				cout << week1[(d-m) % 7];
		}
		else if(m == 5)
		{
			if(d == 9)
				cout << week1[0];
			else if(d < 9)
				cout << week2[(9-d) % 7];
			else if(d > 9)
				cout << week1[(d-9) % 7];
		}
		else if(m == 9)
		{
			if(d == 5)
				cout << week1[0];
			else if(d < 5)
				cout << week2[(5-d) % 7];
			else if(d > 5)
				cout << week1[(d-5) % 7];
		}
		else if(m == 7)
		{
			if(d == 11)
				cout << week1[0];
			else if(d < 11)
				cout << week2[(11-d) % 7];
			else if(d > 11)
				cout << week1[(d-11) % 7];
		}
		else if(m == 11)
		{
			if(d == 7)
				cout << week1[0];
			else if(d < 7)
				cout << week2[(7-d) % 7];
			else if(d > 7)
				cout << week1[(d-7) % 7];
		}
		else if(m == 1)
		{
			if(d == 10)
				cout << week1[0];
			else if(d < 10)
				cout << week2[(10-d) % 7];
			else if(d > 10)
				cout << week1[(d-10) % 7];
		}
		else if (m == 2)
		{
			if(d == 21)
				cout << week1[0];
			else if(d < 21)
				cout << week2[(21-d) % 7];
			else if(d > 21)
				cout << week1[(d-21) % 7];
		}
		else if(m == 3)
		{
			if(d == 28)
				cout << week1[0];
			else if(d < 28)
				cout << week2[(28-d) % 7];
			else if(d > 28)
				cout << week1[(d-28) % 7];
		}
		cout << endl;
	}
    return 0;
}
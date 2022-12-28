#include <bits/stdc++.h>

using namespace std;

int main()
{
    string week1[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string week2[7] = {"Monday", "Sunsday", "Saturday", "Friday", "Thursday", "Wednesday", "Tuesday"};
    int line;
    cin >> line;
    while(line--)
    {
    	int m, d; // m, d = month, date
    	cin >> m >> d;
    	if(m==4 || m==6 || m==8 || m==10 || m==12)
		{
			if(m == d)
				cout << week1[0];
			else if(m > d)
				cout << week2[(m-d)%7];
			else if(m < d)
				cout << week1[(d-m)%7];
		}
		else if(m == 5)
		{
			if(d == 9)
				cout << week1[0];
			else if(9 > d)
				cout << week2[(9-d)%7];
			else if(9 < d)
			cout << week1[(d-9)%7];
		}
		else if(m == 9)
		{
			if(d == 5)
				cout << week1[0];
			else if(5 > d)
				cout << week2[(5-d)%7];
			else if(5 < d)
			cout << week1[(d-5)%7];
		}
		else if(m == 7)
		{
			if(d == 11)
				cout << week1[0];
			else if(11 > d)
				cout << week2[(11-d)%7];
			else if(11 < d)
			cout << week1[(d-11)%7];
		}
		else if(m == 11)
		{
			if(d == 7)
				cout << week1[0];
			else if(7 > d)
				cout << week2[(7-d)%7];
			else if(7 < d)
			cout << week1[(d-7)%7];
		}
		else if(m == 1)
		{
			if(d == 10)
				cout << week1[0];
			else if(10 > d)
				cout << week2[(10-d)%7];
			else if(10 < d)
			cout << week1[(d-10)%7];
		}
		else if (m == 2)
		{
			if(d == 21)
				cout << week1[0];
			else if(21 > d)
				cout << week2[(21-d)%7];
			else if(21 < d)
			cout << week1[(d-21)%7];
		}
		else if(m == 3)
		{
			if(d == 28)
				cout << week1[0];
			else if(28 > d)
				cout << week2[(28-d)%7];
			else if(28 < d)
			cout << week1[(d-28)%7];
		}
		cout << endl;
	}
    return 0;
}


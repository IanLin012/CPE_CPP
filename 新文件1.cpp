//使用Java的考生請注意，最外層的類別(class)需命名為 main 。
//如果遇到超乎想像的狀況，請更改編譯器試看看!! 各編譯器特性不同!!
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int Case;
	cin >> Case;
	while(Case--)
	{
		int M, D;
		cin >> M >> D;
		string w1[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
		string w2[7] = {"Sunday", "Saturday", "Friday", "Thursday", "Wednesday", "Tuesday", "Monday" };
		if(M==4 || M==6 || M==8 || M==10 || M==12)
		{
			if(D >= M)
			{
				int week = (D-M) % 7;
				cout << w1[week] << endl;
			}
			else
			{
				int week = (M-D-1) % 7;
				cout << w2[week] << endl;
			}
		}
		else if(M==5)
		{
			if(D >= 9)
			{
				int week = (D-9) % 7;
				cout << w1[week] << endl;
			}
			else
			{
				int week = (9-D-1) % 7;
				cout << w2[week] << endl;
			}
		}
		else if(M==9)
		{
			if(D >= 5)
			{
				int week = (D-5) % 7;
				cout << w1[week] << endl;
			}
			else
			{
				int week = (5-D-1) % 7;
				cout << w2[week] << endl;
			}
		}
		else if(M==7)
		{
			if(D >= 11)
			{
				int week = (D-11) % 7;
				cout << w1[week] << endl;
			}
			else
			{
				int week = (11-D-1) % 7;
				cout << w2[week] << endl;
			}
		}
		else if(M==11)
		{
			if(D >= 7)
			{
				int week = (D-7) % 7;
				cout << w1[week] << endl;
			}
			else
			{
				int week = (7-D-1) % 7;
				cout << w2[week] << endl;
			}
		}
		else if(M==1)
		{
			if(D >= 10)
			{
				int week = (D-10) % 7;
				cout << w1[week] << endl;
			}
			else
			{
				int week = (10-D-1) % 7;
				cout << w2[week] << endl;
			}
		}
		else if(M==2)
		{
			if(D >= 21)
			{
				int week = (D-21) % 7;
				cout << w1[week] << endl;
			}
			else
			{
				int week = (21-D-1) % 7;
				cout << w2[week] << endl;
			}
		}
		else if(M==3)
		{
			int week = D % 7;
			cout << w1[week] << endl;
		}
	}
	return 0;
}

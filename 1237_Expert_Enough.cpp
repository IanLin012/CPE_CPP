// 一星題

#include <iostream>
using namespace std;

int main()
{
    int Case;
    cin >> Case;
    while(Case--)
    {
    	int line;
    	cin >> line;
    	int n1=1;
    	string manu[line] = {};
    	long long low[line] = {0};
    	long long high[line] = {0};
    	for(int n1=0 ; n1 < line ; n1++)
    	{
    		string m;
    		long long lp, hp;
    		cin >> m >> lp >> hp;
    		manu[n1] = m;
    		low[n1] = lp;
    		high[n1] = hp;
		}
		int line2;
		cin >> line2;
		for(int n2=0 ; n2 < line2 ; n2++)
		{
			long long p; //p == price
			cin >> p;
			string s = "UNDETERMINED";
			for(int i=0 ; i<line ; i++)
			{
				if(p>=low[i] && p<=high[i])
				{
					if(s == "UNDETERMINED")
						s = manu[i];
					else
					{
						s = "UNDETERMINED";
						break;
					}
				}
			}
			cout << s << endl;
		}
		cout << endl;
	}
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	getchar();
	string s;
	while(t--)
	{
		getline(cin, s);
		char o[11] = "0000000000"; // o = original
		int count[10] = {0};
		for(int a1=0 ; a1<s.size() ; a1++) // a = address
		{
			char f[11] = "0000000000"; // f = finger
			switch(s[a1])
			{
				case'c':
            		f[9] = '1';
        		case'd':
        		case'D':
            		f[8] = '1';
        		case'e':
        		case'E':
            		f[7] = '1';
        		case'f':
        		case'F':
            		f[6] = '1';
        		case'g':
        		case'G':
            		f[3] = '1';
        		case'a':
        		case'A':
            		f[2] = '1';
        		case'b':
        		case'B':
            		f[1] = '1';
            		if(s[a1] >= 'A' && s[a1] <= 'G' && s[a1]!='C')
           				f[0] = '1';
            		break;
        		case'C':
            		f[2] = '1';
			}
			for(int a2=0 ; a2<10 ; a2++)
			{
				if(o[a2]=='0' && f[a2]=='1')
					count[a2]++;
			}
			strcpy(o, f);
		}
		cout << count[0];
		for(int a=1 ; a<10 ; a++)
			cout << " " << count[a];
		cout << endl;	
	}
	return 0;
}

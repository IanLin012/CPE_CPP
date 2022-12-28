#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	getchar();
	while(N--)
	{
		string k = "qwertyuiop[]asdfghjkl;\'zxcvbnm,."; // k = keyboard
		string s;
		getline(cin, s);
		for(int a1=0 ; a1<s.size() ; a1++) // a = address
		{
			if(s[a1] == ' ')
			{
				cout << " ";
				continue;
			}
			s[a1] = tolower(s[a1]);
			for(int a2=0 ; a2<k.size() ; a2++)
			{
				if(s[a1] == k[a2])
					cout << k[a2-2];
			}
		}
		cout << endl;
	}
	return 0;
}

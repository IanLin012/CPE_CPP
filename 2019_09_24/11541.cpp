#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	int line;
	cin >> line;
	getchar();
	char c;
	int Case = 1;
	char alph;
	long long num;
	string s;
	while(Case <= line)
	{
		getline(cin, s);
		cout << "Case " << Case << ": ";
		for(int i=0 ; i<s.size() ;)
		{
			c = s[i];
			cout << "DEBUG: " << c << endl;
			if(c>='A' && c<='Z')
				alph = s[i++];
			else if(c>='0' && c<='9') {
				int j=0;
				char nc[100]{};
				while(c>='0' && c<='9') {
					c = s[i+j];
					cout << "DEBUG: " << c << endl;
					nc[j++] = c;
				} 
				i += j;
				num = atoi(nc);
				for(int j=0; j<num; j++) {
					cout << alph;
				}
			}
		}
		cout << string(num, alph) << endl;
		Case++;
	}
}


// 一星題

#include <iostream>
using namespace std;

int main() {
	string s1, s2;
	while(cin >> s1) {
		cin >> s2;
		char d1[101] = {0};
		char d2[101] = {0};
		
		for(int a=0 ; a<s1.size() ; a++)
			d1[a] = s1[a];
		for(int a=0 ; a<s2.size() ; a++)
			d2[a] = s2[a];
		
		int c1 = 0;
		for(int a1=0 ; a1<s1.size() ; a1++) {
			for(int a2=0 ; a2<a1 ; a2++) {
				if(d1[a1] == d1[a2])
					c1++;
			}
		}
		
		int c2 = 0;
		for(int a1=0 ; a1<s2.size() ; a1++) {
			for(int a2=0 ; a2<a1 ; a2++) {
				if(d2[a1] == d2[a2])
					c2++;
			}
		}
		
		if(c1 == c2)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
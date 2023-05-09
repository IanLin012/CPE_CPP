#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t, b=0;
	string s;
	while(getline(cin, s)) {
		if(b) cout << endl;
		int ASCII[97]={0}, count[97]={0};
		for(int i=0; i<96; i++) 
			ASCII[i]=i+32;
		for(int i=0; i<s.length(); i++)
			count[s[i]-32]++;
		for(int i=0; i<96; i++) {
			for(t=0;t<96-i-1;t++) {
				if(count[t] > count[t+1]) {
					int temp = ASCII[t];
					ASCII[t] = ASCII[t+1];
					ASCII[t+1] = temp;
					temp = count[t];
					count[t] = count[t+1];
					count[t+1] = temp;
				}
				else if(count[t]==count[t+1] && ASCII[t]<ASCII[t+1]) {
					int temp = ASCII[t];
					ASCII[t] = ASCII[t+1];
					ASCII[t+1] = temp;
				}
			}
		}
		for(int i=0; i<96; i++) {
			if(count[i] != 0)
				cout << ASCII[i] << " " << count[i] << endl;
		}
		b = 1; 
	}
    return 0;
}
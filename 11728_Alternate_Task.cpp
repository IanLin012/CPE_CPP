// 一星題

#include <iostream>
using namespace std;

int main() {
	int S;
	int Case = 1;
	while(cin >> S) {
		int f[1001];
		if(S == 0)
			break;
		for(int n=1 ; n<=S ; n++) {
			f[n] = 0;
			for(int factor=1 ; factor<=n ; factor++) {
				if(n%factor == 0)
					f[n] += factor;
			}
		}
		int ans = -1;
		for(int n=S ; n>=1 ; n--) {
			if(f[n] == S) {
				ans = n;
				break;
			}
		}
		cout << "Case " << Case << ": " << ans << endl;
		Case++;
	}
	return 0;
}
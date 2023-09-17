// 一星題

#include <iostream>
using namespace std;

int main() {
	long long N;
	while(cin >> N) {
		if(N == -1)
			break;
		else {
			long long f=1, m=0, fc=0, mc=0; // female / male / female count / male count
			for(long long y=1 ; y<=N ; y++) { // year
				fc = f;
				mc = m;
				f += mc - (fc-1);
				m += fc;
			}
			cout << m << " " << f+m << endl;
		}
	}
}
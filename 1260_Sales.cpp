// 一星題

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		int A[n] = {0};
		int B[n] = {0};
		for(int a=0 ; a<n ; a++)
			cin >> A[a];
		for(int a1=1 ; a1<n ; a1++) {
			int count = 0;
			for(int a2=0 ; a2<a1 ; a2++) {
				if(A[a1] >= A[a2])
					count += 1;
			}
			B[a1] = count;
		}
		int total = 0;
		for(int a=0 ; a<n ; a++)
			total += B[a];
		cout << total << endl;
	}
	return 0;
}
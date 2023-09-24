//一星題

#include <iostream>
using namespace std;

int main() {
	long long s; // 少一頁的頁碼總和
	while(cin >> s) {
		if(s == 0)
			break;
		int c; // 頁碼
		long long sum = 0; // 正確的頁碼總和
		for(c=1 ; ; c++) {
			sum += c;
			if(sum>s)
				break;
		}
		cout << sum-s << " " << c << endl;
	}
	return 0;
}
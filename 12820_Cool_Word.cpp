// 一星題

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int Case1 = 0;
	while(cin >> n) {
		Case1++;
		int Case2 = 0;
		int time = 0;
		while(Case2 < n) {
			Case2++;
			int count[150] = {0};
			string word;
			cin >> word;
			for(int i=0 ; i<word.size() ; i++)
				count[word[i]]++;
			sort(count+'a', count+'z'+1);
			if(count['z'-2] == 0)
				continue;
			for(int i='a' ; i<='z'; i++) {
				if(count[i] == count[i-1] && count[i] != 0)
					break;
				else if(i == 'z')
					time++;
			}
		}
		cout << "Case " << Case1 << ": " << time << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
        int N, M;
		cin >> N >> M;
		priority_queue<int, vector<int>> pQN, pQM;
        int x;
		for(int i=0; i<N; i++) {
			cin >> x;
			if(x) pQN.push(x);
		}
		for(int i=0; i<M; i++) {
			cin >> x;
			if(x) pQM.push(x);
		}
		int ret = 0;
		while(!pQN.empty()) {
			int r = pQN.top();
			pQN.pop();
			queue<int> tmp;
			while(r && !pQM.empty()) {
				int c = pQM.top();
				pQM.pop();
				c--, r--, ret++;
				if(c)
					tmp.push(c);
			}
			ret += r;
			while(!tmp.empty()) {
				pQM.push(tmp.front());
				tmp.pop();
			}
		}
		while(!pQM.empty()) {
			int c = pQM.top();
			pQM.pop();
			ret += c;
		}
		printf("%d\n", ret);
	}
	return 0;
}
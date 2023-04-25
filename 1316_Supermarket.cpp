#include<bits/stdc++.h>
using namespace std;

const int N = 10000;
int n, arr[N];

struct S {
	int v, t;
}

s[N];

void init() {
	memset(arr, -1, sizeof(arr));
	for (int i=0 ; i<n ; i++)
		cin >> s[i].v >> s[i].t;
}

bool cmp(S a, S b) {
	return (a.v > b.v);
}

int find(int x) {
	return (arr[x] == -1 ? x : arr[x] = find(arr[x]));
}

int solve() {
	int ans = 0;
	sort(s, s+n, cmp);
	for (int i=0 ; i<n ; i++) {
		int t = find(s[i].t);
		if (t) {
			ans += s[i].v;
			arr[t] = t-1;
		}
	}
	return ans;
}

int main() {
	while (cin >> n) {
		init();
		cout << solve() << endl;
	}
	return 0;
}
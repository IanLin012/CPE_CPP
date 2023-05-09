#include <bits/stdc++.h>
using namespace std;

struct sct {
    int begin, end, distance, glod;
}

a[30001];

bool cmp(sct x,sct y) {
    if(x.end!=y.end) return(x.end < y.end);
    else return(x.glod < y.glod);
}

int main() {
    int t;
    int dp[30001];
    cin >> t;
    for(int l=1; l<=t; l++) {
        int n;
        cin >> n;
        for(int i=1; i<=n; i++) {
            cin >> a[i].begin >> a[i].distance >> a[i].glod;
            a[i].end = a[i].begin+a[i].distance - 1;
        }
        sort(a+1, a+n+1, cmp);
        dp[1] = a[1].glod;
        for(int i=2; i<=n; i++) {
            int k = 0;
            for(int j=i-1; j>0; j--) {
                if(a[j].end < a[i].begin) {
                    k = j;
                    break;
                }
            }
            if(dp[i-1] < dp[k]+a[i].glod)
                dp[i] = dp[k] + a[i].glod;
            else
                dp[i] = dp[i-1];
        }
        printf("Case %d: %d\n", l, dp[n]);
    }
    return 0;
}
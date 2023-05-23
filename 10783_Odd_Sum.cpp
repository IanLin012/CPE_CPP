// 一星必考題
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, a, b;
    cin >> T;
    for(int Case=1; Case<=T; Case++) {
        cin >> a >> b;
        int ans = 0;
        for(int i=a; i<=b; i++) {
            if(i%2 == 1) ans += i;
        }
        printf("Case %d: %d\n", Case, ans);
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[50];
    int n, m;
    while(cin >> s >> n >> m) {
        int l = strlen(s);
        long long dec=0, j=1;
        for(int i=l-1 ; i>=0 ; i--) {
            if(s[i] <= '9')
                dec += (s[i]-'0') * j;
            else
                dec += (s[i]-'A'+10) * j;
            j *= n;
        }
        int ans[60]={}, idx=-1;
        while(dec > 0)
            ans[++idx] = dec%m, dec /= m;
        if(idx < 0) idx = 0;
        for(int i=6 ; i>idx ; i--)
            cout << "0";
        if(idx > 7) {
            for(int i=6 ; i>=0 ; i--)
                printf("%c", ans[i] < 10 ? ans[i]+'0' : ans[i]+'A'-10);
        }
        else {
            for(int i=idx ; i>=0 ; i--)
                printf("%c", ans[i] < 10 ? ans[i]+'0' : ans[i]+'A'-10);
        }
        cout << endl;
    }
    return 0;
}
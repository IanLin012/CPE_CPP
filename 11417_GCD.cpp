#include <bits/stdc++.h>
using namespace std;

int GCD(int i, int j) {
    int n = 0;
    for(n=i; n>=1; n--) {
        if(i%n==0 && j%n==0)
            break;
    }
    return n;
}

int main() {
    int N;
    while(cin >> N) {
        if(N == 0) break;
        long long G = 0;
        for(int i=1; i<N; i++) {
            for(int j=i+1; j<=N; j++)
                G += GCD(i, j);
        }
        cout << G << endl;
    }
    return 0;
}
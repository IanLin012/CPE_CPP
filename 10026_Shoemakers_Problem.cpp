#include <bits/stdc++.h>
using namespace std;

struct Work {
    int T;
    int S;
    int num;
};

bool cmp(Work a, Work b) {
    if((double)a.S/(double)a.T > (double)b.S/(double)b.T) return true;
    else if ((double)a.S/(double)a.T == (double)b.S/(double)b.T)
        if(a.num < b.num) return true;
    return false;
}

int main() {
    int Case, N;
    Work shoemaker[1005];
    while(cin >> Case) {
        for(int i=0; i<Case; i++) {
        if(i) cout << endl;
        cin >> N;
        for(int j=0; j<N; j++) {
            cin >> shoemaker[j].T >> shoemaker[j].S;
            shoemaker[j].num = j+1;
        }
        sort(shoemaker, shoemaker+N, cmp);
        for(int j=0; j<N; j++) {
            if( j ) cout << " ";
            cout << shoemaker[j].num;
        }
        cout << endl;
        }
    }
    return 0;
}
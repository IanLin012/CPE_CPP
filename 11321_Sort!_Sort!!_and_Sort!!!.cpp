// 一星必考題

#include <bits/stdc++.h>
using namespace std;

struct List {
    int num;
    int mod;
    int Even_Odd;
};

bool cmp(List a, List b) {
    if(a.mod == b.mod) {
        if(a.Even_Odd==0 && b.Even_Odd==0)
            return(a.num < b.num);
        else if(a.Even_Odd==1 && b.Even_Odd==1)
            return(a.num > b.num);
        else if(a.Even_Odd == 1 && b.Even_Odd == 0)
            return true;
        else
            return false;
    }
    return(a.mod < b.mod);
}

int main() {
    int N, M;
    int num;
    while(cin >> N >> M) {
        printf("%d %d\n", N, M);
        if(N==0 && M==0) break;
        else {
            vector<List> seq;
            for(int i=0; i<N; i++) {
                cin >> num;
                seq.push_back({num, num%M, num&1});
            }
            sort(seq.begin(), seq.end(), cmp);
            for(auto i: seq)
                cout << i.num << "\n";
        }
    }
    return 0;
}
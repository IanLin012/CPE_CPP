

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long N;
    long long seq[10000] = {0};
    int i=0, ct=1;
    while(cin >> N) {
        seq[i] = N;
        sort(seq, seq+ct);
        if(ct%2 == 1)
            cout << seq[ct/2] << endl;
        else
            cout << (seq[ct/2] + seq[ct/2-1]) / 2 << endl;
        i++;
        ct++;
    }
    return 0;
}
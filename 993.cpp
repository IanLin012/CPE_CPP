#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long data, n, j, ans;
    vector <long long> dig;
    cin >> data;
    while(data--) {
        cin >> n;
        j = 0;
        for(long long i=1; i<=n; i++) {
            if(n%i == 0) dig[j] = n/i;
            j++;
        }
        sort(dig.begin(), dig.end());
        ans = dig[0]*10 + n/dig[0];
        cout << ans << endl;
    }
}
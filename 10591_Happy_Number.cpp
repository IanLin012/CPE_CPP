#include <bits/stdc++.h>
using namespace std;

int sum_of_squares(int N) {
    int count = 0;
    for(int i=0; i<to_string(N).size(); i++) {
        count = int(to_string(N)[i]) * int(to_string(N)[i]);
        N += count;
    }
    return N;
}

int main() {
    int Case;
    cin >> Case;
    int sum[1000] = {0};
    for(int c=1; c<=Case; c++) {
        int N;
        cin >> N;
        for(int i=0; i<1000; i++) {
            if(N == 1) {
                printf("Case #%d: %d is a Happy number.\n", c, N);
                break;
            }
            N = sum_of_squares(N);
            sum[i] == N;
            for(int j=0; j<i; j++) {
                if(N == sum[j]) {
                    printf("Case #%d: %d is an Unappy number.\n", c, N);
                    break;
                }
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

struct Block {
    int L;
    int W;
    int H;
} B[300];

bool cmp(const Block &X, const Block &Y) {
    if(X.L == Y.L)
        return (X.W < Y.W);
    return (X.L < Y.L);
}

int cnt;

int main()
{
    int Case=1, n, L, W, H;
    while(cin >> n) {
        if(n == 0) break;
        cnt = 0;
        for(int i=0; i<n; i++) {
            cin >> L >> W >> H;
            B[cnt++] = {L, W, H};
            B[cnt++] = {L, H, W};
            B[cnt++] = {W, L, H};
            B[cnt++] = {W, H, L};
            B[cnt++] = {H, L, W};
            B[cnt++] = {H, W, L};
        }
        sort(B, B+cnt, cmp);

        int amt[300], Max=0;
        for (int i=0; i<cnt; i++) {
            amt[i] = B[i].H;
            for (int j=0; j<i; j++) {
                if (B[i].L > B[j].L && B[i].W > B[j].W && amt[j]+B[i].H > amt[i])
                    amt[i] = amt[j] + B[i].H;
            }
            if(amt[i] > Max) Max = amt[i];
        }
        printf("Case %d: maximum height = %d\n", Case++, Max);
    }
    return 0;
}
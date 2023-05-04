#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, M;
    while(scanf("%d:%2d", &H, &M)) {
        if(H==0 && M==00) break;
        else {
            float angle = (float(H)*5 + float(M)/12 - float(M))*6;
            if(angle > float(180)) printf("%.3f\n", abs(angle-360));
            else printf("%.3f\n", abs(angle));
        }
    }
    return 0;
}
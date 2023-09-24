

#include <iostream>
using namespace std;

int main() {
    int Case = 1;
    int N1, N2;
    int towers[2][100];
    while(cin >> N1 >> N2) {
        if(N1==0 && N2==0) break;
        for(int i=1; i<=N1; i++)
            cin >> towers[0][i];
        for(int i=1; i<=N2; i++)
            cin >> towers[1][i];
        int LCS[110][110] = {0}; //DP：LCS
        for(int i=1; i<=N1; i++) {
            for(int j=1; j<=N2; j++) {
                if(towers[0][i] == towers[1][j]) LCS[i][j] = LCS[i-1][j-1] + 1; 
                else LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
            }
        }
        printf("Twin Towers #%d\n", Case++);
        printf("Number of Tiles : %d\n\n", LCS[N1][N2]);
    }
    return 0;
}
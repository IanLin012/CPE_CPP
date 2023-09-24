#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    string m;
    int d, y, c1=0, c2=0;
    for(int i=1 ; i<=T ; i++) {
        cin  >> m;
        scanf("%d, %d", &d, &y);
        if((m[0]=='J' && m[1]=='a') || (m[0]=='F')) y--;
        c1 = y/4 - y/100 + y/400;
        cin >> m;
        scanf("%d, %d", &d, &y);
        if((m[0]=='J' && m[1]=='a') || (m[0]=='F')) y--;
        if(m[0]=='F' && d==29) y++;
        c2 = y/4 - y/100 + y/400;
        cout << "Case " << i << ": " << c2-c1 << endl;
    }
    return 0;
}
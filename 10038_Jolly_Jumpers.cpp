// 一星必考題

#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int b = 1; // bool
        int data, lastdata;
        int s[3000] = {0}; // 序列長度 < 3000
        for(int i = 0 ; i < n ; i++) {
            cin >> data;
            if(i && (b==1)) {
                int d = abs(data - lastdata); // differernce
                if(d < 1 || d > (n-1) || s[d] > 0) b = 0;
                s[d]++;
            }
            lastdata = data;
        }
        if(b == 1)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
    }
}
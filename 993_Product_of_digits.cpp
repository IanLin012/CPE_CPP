#include <iostream>

using namespace std;

int main() {
    int data;
    long long N;
    cin >> data;
    while(data--) {
        cin >> N;
        if(N == 1)
            cout << "1" << endl;
        else {
            for(int i=0; i<10; i++) {
                for(int j=0; j<10; j++) {
                    if(i*j == N) {
                        cout << i << j << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
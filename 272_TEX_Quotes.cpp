// 一星必考題

#include <iostream>
using namespace std;

int main() {
    string text;
    int count = 0; // 計算引號出現次數
    while(getline(cin, text)) {// 一次讀取一行
        for(int a=0 ; a<text.size() ; a++) {
            if(text[a]=='"' && count%2!=1) {
                cout << "``";
                count++;
            }
            else if(text[a]=='"' && count%2==1) {
                cout << "''";
                count++;
            }
            else cout << text[a];
            if(a == text.size()-1) cout << endl; // 讀到每行的最後一個字元時換行
        }
    }
    return 0;
}
// 二星題
#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  while(cin >> N && N!=-1) {
    for(int i=0; i<N; i++) {
      int D, I;
      cin >> D >> I;
      int answer = 1 << (D-1);
      --I;
      for(int j=D-2; j>=0; --j) {
        answer |= (I % 2) << j;
        I /= 2;
      }
      cout << answer << endl;
    }
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef struct S_pair {
    double left;
    double right;
}s_pair;

int32_t compare(const void *a, const void *b) {
    if ((((s_pair *)a)->left) > (((s_pair *)b)->left)) 
        return 1;  
    return 0;
}

int main() {
    int32_t n = 0, l = 0, w = 0;
    while (cin >> n >> l >> w) {
        s_pair arr[n];
        int32_t ans = 0;
        for (int32_t i = 0 ; i < n ; i ++) {
            int32_t pos = 0, r = 0;
            double len = 0;
            cin >> pos >> r;
            if (r < (double)(w/2)) {
                arr[i].left = l + 5000;
                arr[i].right= l + 5000;
            }
            else {
                len = sqrt(1.0 * r * r - (w/2.0)*(w/2.0));
                arr[i].left = pos - len;
                arr[i].right= pos + len;
            }
            if (pos-len <= 0 && pos+len >= l) ans = 1;
        }
        if (ans) cout << "1" << endl;
        else {
            ans = 1;
            qsort(arr, n, sizeof(s_pair), compare);
            for (int32_t i = 0 ; i < n ; i++) {
                if (arr[i].right >= l) break;
                int32_t right_num = -1;
                for (int32_t j = i+1; j < n ; j++) {
                    int32_t temp = (arr[i].right >= arr[j].left);
                    if ((right_num == -1)&& temp ==1) right_num = j;
                    else if (temp==1 && (arr[j].right > arr[right_num].right)) right_num = j;
                }
                i = right_num - 1;
                ans += 1;
                if (right_num != -1 && arr[right_num].right >= l) break;
                if (right_num == -1) {
                    ans = 0;
                    break;
                }
            }
            if (ans!=0 && arr[0].left <= 0) cout << ans << endl;
            else cout << "-1\n";
        }
    }
    return 0;
}
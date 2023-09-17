#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n, arr[2]={0}, high=0 ,low=0;
        cin >> n;
        while(n--) {
            cin >> arr[1];
            if(arr[1] < arr[0]) low = high+1;
            else if(arr[1] > arr[0]) high = low+1;
            arr[0] = arr[1];
        }
        if(high > low) cout << high << endl;
        else cout << low << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int f = 1; // f = flag
        int data, lastdata;
        int s[3000] = {0}; // s = sequence
        for(int i = 0 ; i < n ; i++)
        {
            cin >> data;
            if(i && (f==1))
            {
                int d = abs(data - lastdata); // d = differernce
                if(d < 1 || d > (n-1) || s[d] > 0)
                f = 0;
                s[d]++;
            }
            lastdata = data;
        }
        if(f == 1)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string k1 = "`1234567890-=";
    string k2 = "QWERTYUIOP[]\\";
    string k3 = "ASDFGHJKL;'";
    string k4 = "ZXCVBNM,./";
    while(getline(cin, s))
    {
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i] == ' ') cout << " ";
            int index = 0;
            index = k1.find(s[i]);
            if(index != -1) cout << k1[index-1];
            else
            {
                index = k2.find(s[i]);
                if(index != -1) cout << k2[index-1];
                else
                {
                    index = k3.find(s[i]);
                    if(index != -1) cout << k3[index-1];
                    else
                    {
                        index = k4.find(s[i]);
                        cout << k4[index-1];
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}
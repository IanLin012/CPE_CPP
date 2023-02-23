// 一星題
// 2016-03-22

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
        for(int i=0 ; i<s.length() ; i++)
        {
            if(s[i] == ' ') cout << " ";
            else
            {    
                int index = 0;
                index = k1.find(s[i]);
                if(index == -1)
                {
                    index = k2.find(s[i]);
                    if(index == -1)
                    {
                        index = k3.find(s[i]);
                        if(index == -1)
                        {
                            index = k4.find(s[i]);
                            if(index != -1)
                                cout << k4[index-1];
                        }
                        else cout << k3[index-1];
                    }
                    else cout << k2[index-1];
                }
                else cout << k1[index-1];
            }
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()  
{
    long long n1, n2;
    while(cin >> n1 >> n2)
    {
        if(n1==0 && n2==0)
            break;
        string s1 = to_string(n1);
        string s2 = to_string(n2);
        string s;
        if(s1.size() > s2.size())
            s2.insert(0, s1.size() - s2.size(), '0');
        else if(s1.size() < s2.size())
            s1.insert(0, s2.size()-s1.size(), '0');
        int times=0, ct=0;
        for(int i=s1.size()-1 ; i>=0 ; i--)
        {
            if((s1[i]-'0')+(s2[i]-'0')+ct > 9)
            {
                times += 1;
                ct = 1;
            }
            else ct=0;
        }
        if(times == 0) cout << "No carry operation.\n";
        else if(times == 1) cout << times << " carry operation.\n";
        else cout << times << " carry operations.\n";
    }
    return 0;
}
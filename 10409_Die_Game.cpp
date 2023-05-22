// 一星必考題
// 2018-10-02
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string act;
    while(cin >> n)
    {
        if(n == 0)
            break;
    	int instr[3][4] = {0};
        instr[0][0] = 2;
    	instr[1][0] = 1;
    	instr[1][1] = 4;
    	instr[1][2] = 6;
    	instr[1][3] = 3;
    	instr[2][0] = 5;
    	int t = 0;
    	while(n--)
    	{
    		cin >> act;
    		if(act=="north")
			{
				t = instr[0][0];
				instr[0][0] = instr[1][0];
				instr[1][0] = instr[2][0];
				instr[2][0] = instr[1][2];
				instr[1][2] = t;
			}
			else if(act=="east")
			{
				t = instr[1][0];
				instr[1][0] = instr[1][3];
				instr[1][3] = instr[1][2];
				instr[1][2] = instr[1][1];
				instr[1][1] = t;
			}
			else if(act=="south")
			{
				t = instr[2][0];
				instr[2][0] = instr[1][0];
				instr[1][0] = instr[0][0];
				instr[0][0] = instr[1][2];
				instr[1][2] = t;
			}
			else if(act=="west")
			{
				t = instr[1][0];
				instr[1][0] = instr[1][1];
				instr[1][1] = instr[1][2];
				instr[1][2] = instr[1][3];
				instr[1][3] = t;
			}
		}
		cout<< instr[1][0] <<endl;
	}
    return 0;
}
//�@�P (�����D) 

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int Case=1 ; Case<=n ; Case++)
	{
		long long x1, y1, x2, y2, step1=0, step2=0;
		cin >> x1 >> y1 >> x2 >> y2;
		step1 = (x1+y1+1)*(x1+y1)/2 + x1;
		step2 = (x2+y2+1)*(x2+y2)/2 + x2;
		/*
		�q���I�X�o : 
		1. �bx�b���k�U�쥪�W - �h�l���k�U�쥪�W : [1+2+...+(x+y)] - [(x+y)-x] = (x+y+1)*(x+y)/2 - y
		2. ����k + ���W��k�U : x+y
		3. �Ҧ��B�� : (x+y+1)*(x+y)/2 - y + (x+y) = (x+y+1)*(x+y)/2 + x
		*/
		cout << "Case " << Case << ": " << step2-step1 << endl;
	}
	return 0;
}

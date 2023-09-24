// 一星題

#include <iostream>
using namespace std;

int main() {
    int Case;
    cin >> Case;
    for(int c=1 ; c<=Case ; c++) {
		int d1, m1, y1, d2, m2, y2; // 1:now 2:birth
    	scanf("%2d/%2d/%4d\n%2d/%2d/%4d", &d1, &m1, &y1, &d2, &m2, &y2);
    	
    	if(y1 < y2)
    		cout << "Case #" << c << ": Invalid birth date\n";
    	
    	else if(y1==y2 && m1<m2)
			cout << "Case #" << c << ": Invalid birth date\n";
    	else if(y1==y2 && m1==m2 && d1<d2)
    		cout << "Case #" << c << ": Invalid birth date\n";
    	else if (y1==y2 && m1==m2 && d1 >= d2)
    		cout << "Case #" << c << ": " << y1 -y2 << endl;
    	else if(y1==y2 && m1>m2)
    		cout << "Case #" << c << ": " << y1- y2 << endl;
    	
		else if(y1-y2==1 && m1<m2)
			cout << "Case #" << c << ": " << y1 - y2 - 1 << endl;
		else if(y1-y2==1 && m1 == m2 && d1<d2)
			cout << "Case #" << c << ": " << y1 - y2 - 1 << endl;
		else if(y1-y2==1 && m1 == m2 && d1 >= d2)
			cout << "Case #" << c << ": " << y1 - y2 << endl;
		else if(y1-y2==1 && m1>m2)
			cout << "Case #" << c << ": " << y1 - y2 << endl;
		
		else if((y1-y2>1 && y1-y2<=130) && m1<m2)
			cout << "Case #" << c << ": " << y1 - y2 - 1 << endl;
		else if((y1-y2>1 && y1-y2<=130) && m1==m2 && d1<d2)
			cout << "Case #" << c << ": " << y1 - y2 - 1 << endl;
		else if((y1-y2>1 && y1-y2<=130) && m1==m2 && d1>=d2)
			cout << "Case #" << c << ": " << y1 - y2 << endl;
		else if((y1-y2>1 && y1-y2<=130) && m1>m2)
			cout << "Case #" << c << ": " << y1 - y2 << endl;
		
		else if(y1-y2>130 && m1<m2)
			cout << "Case #" << c << ": " << y1 - y2 - 1 << endl;
		else if(y1-y2>130 && m1==m2 && d1<d2)
			cout << "Case #" << c << ": " << y1 - y2 - 1 << endl;
		else if(y1-y2>130 && m1==m2 && d1>=d2)
			cout << "Case #" << c << ": Check birth date\n";
		else if(y1-y2>130 && m1>m2)
			cout << "Case #" << c << ": Check birth date\n";
	}
    return 0;
}

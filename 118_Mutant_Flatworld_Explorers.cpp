//一星必考題

#include <iostream>
using namespace std;

int main() {
	int len=0, wid=0; // rectangular world
	while(cin >> len >> wid) {
		int x, y; // position
		char i; // instruction
		cin >> x >> y >> i;
		string move;
		cin >> move;
		for(int a=0 ; a<move.size() ; a++) {
			if(move[a] == 'L') {
				if(i == 'N');
				else if(i == 'S');
				else if(i == 'E');
				else if(i == 'W');
			}
			else if(move[a] == 'R')
				;
		}
	}
	return 0;
}
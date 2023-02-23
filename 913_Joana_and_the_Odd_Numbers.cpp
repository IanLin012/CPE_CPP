// 一星題
// 2018-05-29

#include <iostream>

using namespace std;

int main()
{
	long long num;
	while(cin >> num)
	{
		long long line = (num + 1) / 2;
		long long last_num = ((line * line) * 2) - 1;
		num = (last_num-4) + (last_num-2) + last_num;
		cout << num << endl;
	}
	return 0;
}

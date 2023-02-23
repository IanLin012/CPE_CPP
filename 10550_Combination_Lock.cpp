// 一星題
// 2018-12-18

#include <iostream>
using namespace std;
 
int main() {
    long long num0, num1, num2, num3;
    while ((cin >> num0 >> num1 >> num2 >> num3) && (num0!=0 || num1!=0 || num2!=0 || num3!=0))
    {
        int degree = 720;
		degree += (((num0 + 40) - num1) % 40) * 9;
        degree += 360;
        degree += (((num2 + 40) - num1) % 40) * 9;
        degree += (((num2 + 40) - num3) % 40) * 9;
        cout << degree << "\n";
    }
}

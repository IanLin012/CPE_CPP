#include <iostream>

using namespace std;

int main()
{
    long long line;
    cin >> line;
    while(line--)
    {
        long long card_number[4], odd_number = 0, even_number = 0;
        for(int i=0 ; i<=3 ; i++)
        {
            cin >> card_number[i];
            long long digit = 1;
            while(card_number[i] != 0)
            {
                if(digit % 2 == 0)
                {
                    long long num  = (card_number[i] % 10) * 2;
                    while(num > 0)
                    {
                        even_number += num % 10;
                        num /= 10;
                    }
                }
                else
                    odd_number += card_number[i] % 10;
                card_number[i] /= 10;
                digit++;
            }
        }
        if((even_number + odd_number)%10 == 0)
            cout<<"Valid"<<endl;
        else
            cout<<"Invalid"<<endl;
    }
   return 0;
}

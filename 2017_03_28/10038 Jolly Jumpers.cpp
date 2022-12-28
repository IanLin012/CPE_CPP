#include <stdio.h>
#include <math.h>

#define MAX 3000

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int key = 1;
        int data, lastdata;
        int check[MAX] = {0};
        for(int i = 0 ; i < n ; i++)
        {
            scanf("%d", &data);
            if(i && key)
            {
                int differernce = abs(data - lastdata);
                if(differernce < 1 || differernce > (n-1) || check[differernce] > 0)
                key = 0;
                check[differernce]++;
            }
            lastdata = data;
        }
        printf("%s\n", key? "Jolly" : "Not jolly");
    }
}

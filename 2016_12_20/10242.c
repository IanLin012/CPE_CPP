#include <stdio.h>

int main()
{
	float x[4],y[4];
	scanf("%f %f %f %f %f %f %f %f", &x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[4],&y[4]);
	while(1)
	{
		x=x[0];
		y=y[0];
		
		for(int i=1;i<4;i++)
		{
			x += x[i];
			y += y[i];
		}
		
		for(i=0;i<4;i++)
		{
			for(int j=i+1;j<4;j++)
			{
				if(x[i]==x[j] && y[j]==y[j])
				{
					printf("%f ", x - 3*x[i]);
					printf("%f\n", y - 3*y[i]);
				}
			}
		}
	}
    return 0;
}

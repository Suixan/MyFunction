/*
#include <stdio.h>

#define N 1000
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 0;
	int sum = 0;	
	int a[256] = {0};

	for(i = 2; i < N; i++)
	{
		sum = 1;
		a[0] = 1;
		k = 0;

		for(j = 2; j <= (i/2); j++)
		{
			if(i % j == 0)
			{
				sum += j;
				a[++k] = j;			
			}
		}
		if(i == sum)
		{
			printf("%d = %d", i, a[0]);
			for(n = 1; n <= k; n++)
			{
				printf("+%d", a[n]);
			}
			printf("\n");
		
		}

	
	}

	return 0;
}
*/
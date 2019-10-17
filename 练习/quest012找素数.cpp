/*
#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int count = 0;

	for(i = 101; i < 200; i++)
	{
		int k = i / 2 + 1;
		for(j = 2; j < k; j++)
		{
			if(i % j == 0)
			{
				break;
			}
		}

		if(j >= k)
		{
			count++;
			printf("%d ", i);

			if(count % 5 == 0)
			{
				printf("\n");
			}
		}
	}


	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	long i = 10000000L;
	clock_t start = 0;
	clock_t finish = 0;

	double TheTimes = 0;
	printf("%ld�ο�ѭ����Ҫ��ʱ��Ϊ", i);

	start = clock();
	while(i--);
	
	finish = clock();
	
	TheTimes = (double)(finish - start)/CLOCKS_PER_SEC;
	printf("%f�롣", TheTimes);
	return 0;
}
*/